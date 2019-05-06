#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "QtSerialPort/QSerialPort"
#include "QtSerialPort/QSerialPortInfo"
#include "QTimer"
#include "QDebug"
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);

    void searchSerial();
    void wrdata_agreement(QByteArray &wrdata);
    void show_Widgets();
    void show_setData();
    ~Widget();

private slots:
    void on_pushButton_serchSerial_clicked();

    void on_pushButton_openSerial_clicked();

    void recv_data(void);

    void on_pushButton_clearRecv_clicked();

    void on_pushButton_stationSet_clicked();

    void on_pushButton_freqSet_clicked();

    void on_pushButton_sampSet_clicked();

    void on_pushButton_readData_clicked();

    void on_pushButton_pulseSet_clicked();

    void timeUpSerial();

    void rxtimeSerchData(void);
private:
    Ui::Widget *ui;
    QSerialPort *mserial;
    QTimer *timer;
    QTimer *rxtimer;
    QByteArray rxSerialbuf;

};

#endif // WIDGET_H
