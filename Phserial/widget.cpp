#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    timer = new QTimer(this);   //扫描串口定时器
    rxtimer = new QTimer(this); //接收数据定时器

    mserial = new QSerialPort(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeUpSerial()));  //连接串口扫描函数
    connect(rxtimer,SIGNAL(timeout()),this,SLOT(rxtimeSerchData()));    //连接数据接收函数
    rxtimer->setSingleShot(true);   //单次触发，超时后只触发一次
    rxtimer->setInterval(0);        //超时时间间隔

    timer->start(10000);    //串口没打开时，设置每隔10秒扫描一次可用串口
    searchSerial();
    show_Widgets();
    show_setData();
}

Widget::~Widget()
{
    if(mserial->isOpen())
    {
        mserial->close();
    }

    delete ui;
}
//扫描串口函数
void Widget::searchSerial()
{
    ui->comboBox_serialPort->clear();
    foreach (const QSerialPortInfo &Info, QSerialPortInfo::availablePorts())
    {
        ui->comboBox_serialPort->addItem(Info.portName());  //显示串口号
    }
}

//超时后扫描串口
void Widget::timeUpSerial()
{

    if((ui->pushButton_openSerial->text()==tr("打开")))
    {
        searchSerial();
    }
}

//查找串口
void Widget::on_pushButton_serchSerial_clicked()
{
    searchSerial();
}


//打开串口
void Widget::on_pushButton_openSerial_clicked()
{

    if((ui->pushButton_openSerial->text()==tr("打开")))
    {
        ui->pushButton_openSerial->setText("关闭");
        mserial->setPortName(ui->comboBox_serialPort->currentText());
        if(mserial->open(QIODevice::ReadWrite))
        {
            mserial->open(QIODevice::ReadWrite);
            mserial->setBaudRate(ui->comboBox_serialBaund->currentText().toInt());
            mserial->setDataBits(QSerialPort::Data8);
            mserial->setParity(QSerialPort::NoParity);
            mserial->setFlowControl(QSerialPort::NoFlowControl);
            mserial->setStopBits(QSerialPort::OneStop);
            connect(mserial,SIGNAL(readyRead()),this,SLOT(recv_data()));

        }
        else
        {
            ui->pushButton_openSerial->setText("打开");
            QMessageBox::warning(nullptr,"Warning","串口打开错误",QMessageBox::Close);

        }


    }
    else
    {
        ui->pushButton_openSerial->setText("打开");

        mserial->close();

    }
    show_Widgets();

}

//串口数据接收rxSerialbuf
void Widget::recv_data(void)
{
    rxtimer->start(50); //50ms超时时间，根据实际来调整超时时间

    rxSerialbuf.append(mserial->readAll()); //触发函数后把缓冲区数据全部接收到rxSerialbuf

}
//void Widget::recv_data(void)  //这种方式中文可能会出现个别乱码，原因是readyRead触发机制的问题
//{
//    QByteArray buf = mserial->readAll();
//        if(!buf.isEmpty())
//        {
//            QString myStrTemp = QString::fromLocal8Bit(buf); //支持中文显示
//            //QString myStrTemp = QString::fromUtf8(buf); //支持中文显示

//            QString str = ui->textBrowser_recvData->toPlainText();
//            //str+=tr(buf);
//            str+=myStrTemp;
//            ui->textBrowser_recvData->clear();
//            ui->textBrowser_recvData->append(str);
//        }
//}
//超时后显示数据，使用定时器机制，可避免接收中文出现个别字符乱码
void Widget::rxtimeSerchData(void)
{
    rxtimer->stop();
    if(!rxSerialbuf.isEmpty())
    {
        QString myStrTemp = QString::fromLocal8Bit(rxSerialbuf); //支持中文显示

        QString str = ui->textBrowser_recvData->toPlainText();
        str+=myStrTemp;
        ui->textBrowser_recvData->clear();
        ui->textBrowser_recvData->append(str);
    }
    rxSerialbuf.clear();
}
//清除接收框数据
void Widget::on_pushButton_clearRecv_clicked()
{
    ui->textBrowser_recvData->clear();
}

/*站号设置*/
void Widget::on_pushButton_stationSet_clicked()
{
    QString str = ui->lineEdit_station->text();
    QByteArray cData;         //存放站号协议数据
    QByteArray sLidata;             //接收输入框数据
    QByteArray HexsLidata;          //存放转换后协议数据
    int snum;
    if(!str.isEmpty())
    {
        snum = str.toInt(nullptr,10);     //字符串转整形数据
        sLidata.setNum(snum,16);    //转换为16进制数据
        HexsLidata = QByteArray::fromHex(sLidata);  //十六进制hex
        cData[0] = 0xB0;  //写
        cData[1] = 0x02;  //数据字节数
        cData[2] = 0x01;  //地址
        cData.append(HexsLidata); //把输入框数据填充到协议中

        wrdata_agreement(cData);
    }
}


/*频段设置*/
void Widget::on_pushButton_freqSet_clicked()
{
    QString str = ui->lineEdit_freq->text();
    QByteArray cData;         //存放站号协议数据
    QByteArray sLidata;             //接收输入框数据
    QByteArray HexsLidata;          //存放转换后协议数据
    int snum;
    if(!str.isEmpty())
    {
        snum = str.toInt(0,10);     //字符串转整形数据
        sLidata.setNum(snum,16);    //转换为16进制数据
        HexsLidata = QByteArray::fromHex(sLidata);  //十六进制hex
        cData[0] = 0xB0;  //写
        cData[1] = 0x05;  //数据字节数
        cData[2] = 0x02;  //地址
        cData.append(HexsLidata); //把输入框数据填充到协议中

        wrdata_agreement(cData);
    }
}
/*采样周期设置*/
void Widget::on_pushButton_sampSet_clicked()
{
    QString str = ui->lineEdit_samp->text();
    QByteArray cData;         //存放站号协议数据
    QByteArray sLidata;             //接收输入框数据
    QByteArray HexsLidata;          //存放转换后协议数据
    int snum;
    if(!str.isEmpty())
    {
        snum = str.toInt(0,10);     //字符串转整形数据
        sLidata.setNum(snum,16);    //转换为16进制数据
        HexsLidata = QByteArray::fromHex(sLidata);  //十六进制hex
        cData[0] = 0xB0;  //写
        cData[1] = 0x02;  //数据字节数
        cData[2] = 0x03;  //地址
        cData.append(HexsLidata); //把输入框数据填充到协议中

        wrdata_agreement(cData);
    }
}

/*读取参数*/
void Widget::on_pushButton_readData_clicked()
{
    QByteArray cData;
    cData[0] = 0xC0;  //读
    cData[1] = 0x02;  //数据字节数
    cData[2] = 0x00;  //地址
    cData[3] = 0x01;  //数据
    wrdata_agreement(cData);

}
/*设置脉冲获取方式，1为光纤，2红外*/
void Widget::on_pushButton_pulseSet_clicked()
{
    QString str = ui->lineEdit_pulse->text();
    QByteArray cData;         //存放站号协议数据
    QByteArray sLidata;             //接收输入框数据
    QByteArray HexsLidata;          //存放转换后协议数据
    int snum;
    if(!str.isEmpty())
    {
        snum = str.toInt(0,10);     //字符串转整形数据
        sLidata.setNum(snum,16);    //转换为16进制数据
        HexsLidata = QByteArray::fromHex(sLidata);  //十六进制hex
        cData[0] = 0xB0;  //写
        cData[1] = 0x02;  //数据字节数
        cData[2] = 0x04;  //地址
        cData.append(HexsLidata); //把输入框数据填充到协议中

        wrdata_agreement(cData);
    }
}
//协议
void Widget::wrdata_agreement(QByteArray &wrdata)
{
    QByteArray sdata;
    sdata[0] = 0xAE;    //协议头
    sdata[1] = 0xEA;    //协议头
    sdata.append(wrdata);   //添加数据到协议中

    mserial->write(sdata);   //向串口发送数据
}
//显示
void Widget::show_Widgets()
{
    /*串口关闭*/
    if(ui->pushButton_openSerial->text()==tr("打开"))
    {
        ui->comboBox_serialBaund->setEnabled(true);
        ui->comboBox_serialPort->setEnabled(true);
        ui->pushButton_serchSerial->setEnabled(true);
        ui->pushButton_freqSet->setEnabled(false);
        ui->pushButton_pulseSet->setEnabled(false);
        ui->pushButton_stationSet->setEnabled(false);
        ui->pushButton_sampSet->setEnabled(false);
        ui->pushButton_readData->setEnabled(false);

        ui->lineEdit_freq->setEnabled(false);
        ui->lineEdit_pulse->setEnabled(false);
        ui->lineEdit_samp->setEnabled(false);
        ui->lineEdit_station->setEnabled(false);
    }
    else
    {
        ui->comboBox_serialBaund->setEnabled(false);
        ui->comboBox_serialPort->setEnabled(false);
        ui->pushButton_serchSerial->setEnabled(false);
        ui->pushButton_freqSet->setEnabled(true);
        ui->pushButton_pulseSet->setEnabled(true);
        ui->pushButton_stationSet->setEnabled(true);
        ui->pushButton_sampSet->setEnabled(true);
        ui->pushButton_readData->setEnabled(true);

        ui->lineEdit_freq->setEnabled(true);
        ui->lineEdit_pulse->setEnabled(true);
        ui->lineEdit_samp->setEnabled(true);
        ui->lineEdit_station->setEnabled(true);
    }
}

void Widget::show_setData()
{
    ui->lineEdit_station->setText("1");
    ui->lineEdit_freq->setText("435575000");
    ui->lineEdit_samp->setText("20");
    ui->lineEdit_pulse->setText("1");
    ui->textBrowser_recvData->setText("站号：1-8，脉冲获取：1为光纤，2为红外。");
}
