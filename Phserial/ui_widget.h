/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_9;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_2;
    QTextBrowser *textBrowser_recvData;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_clearRecv;
    QPushButton *pushButton_readData;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_station;
    QPushButton *pushButton_stationSet;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_freq;
    QPushButton *pushButton_freqSet;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_samp;
    QPushButton *pushButton_sampSet;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_pulse;
    QPushButton *pushButton_pulseSet;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QComboBox *comboBox_serialPort;
    QPushButton *pushButton_serchSerial;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QComboBox *comboBox_serialBaund;
    QPushButton *pushButton_openSerial;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->setEnabled(true);
        Widget->resize(1267, 582);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/ico/ico/reph.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        horizontalLayout_9 = new QHBoxLayout(Widget);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textBrowser_recvData = new QTextBrowser(Widget);
        textBrowser_recvData->setObjectName(QStringLiteral("textBrowser_recvData"));

        verticalLayout_2->addWidget(textBrowser_recvData);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_clearRecv = new QPushButton(Widget);
        pushButton_clearRecv->setObjectName(QStringLiteral("pushButton_clearRecv"));

        horizontalLayout_8->addWidget(pushButton_clearRecv);

        pushButton_readData = new QPushButton(Widget);
        pushButton_readData->setObjectName(QStringLiteral("pushButton_readData"));

        horizontalLayout_8->addWidget(pushButton_readData);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_7->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_station = new QLineEdit(Widget);
        lineEdit_station->setObjectName(QStringLiteral("lineEdit_station"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_station->sizePolicy().hasHeightForWidth());
        lineEdit_station->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lineEdit_station);

        pushButton_stationSet = new QPushButton(Widget);
        pushButton_stationSet->setObjectName(QStringLiteral("pushButton_stationSet"));
        pushButton_stationSet->setMaximumSize(QSize(75, 23));

        horizontalLayout->addWidget(pushButton_stationSet);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 5);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        lineEdit_freq = new QLineEdit(Widget);
        lineEdit_freq->setObjectName(QStringLiteral("lineEdit_freq"));
        sizePolicy.setHeightForWidth(lineEdit_freq->sizePolicy().hasHeightForWidth());
        lineEdit_freq->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(lineEdit_freq);

        pushButton_freqSet = new QPushButton(Widget);
        pushButton_freqSet->setObjectName(QStringLiteral("pushButton_freqSet"));
        pushButton_freqSet->setMaximumSize(QSize(75, 23));

        horizontalLayout_2->addWidget(pushButton_freqSet);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEdit_samp = new QLineEdit(Widget);
        lineEdit_samp->setObjectName(QStringLiteral("lineEdit_samp"));
        sizePolicy.setHeightForWidth(lineEdit_samp->sizePolicy().hasHeightForWidth());
        lineEdit_samp->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lineEdit_samp);

        pushButton_sampSet = new QPushButton(Widget);
        pushButton_sampSet->setObjectName(QStringLiteral("pushButton_sampSet"));
        pushButton_sampSet->setEnabled(true);
        pushButton_sampSet->setMaximumSize(QSize(75, 23));

        horizontalLayout_3->addWidget(pushButton_sampSet);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_pulse = new QLineEdit(Widget);
        lineEdit_pulse->setObjectName(QStringLiteral("lineEdit_pulse"));
        sizePolicy.setHeightForWidth(lineEdit_pulse->sizePolicy().hasHeightForWidth());
        lineEdit_pulse->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineEdit_pulse);

        pushButton_pulseSet = new QPushButton(Widget);
        pushButton_pulseSet->setObjectName(QStringLiteral("pushButton_pulseSet"));
        sizePolicy.setHeightForWidth(pushButton_pulseSet->sizePolicy().hasHeightForWidth());
        pushButton_pulseSet->setSizePolicy(sizePolicy);
        pushButton_pulseSet->setMaximumSize(QSize(75, 23));

        horizontalLayout_4->addWidget(pushButton_pulseSet);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        comboBox_serialPort = new QComboBox(Widget);
        comboBox_serialPort->setObjectName(QStringLiteral("comboBox_serialPort"));
        comboBox_serialPort->setEnabled(true);
        sizePolicy.setHeightForWidth(comboBox_serialPort->sizePolicy().hasHeightForWidth());
        comboBox_serialPort->setSizePolicy(sizePolicy);
        comboBox_serialPort->setMinimumSize(QSize(100, 20));
        comboBox_serialPort->setMaximumSize(QSize(100, 20));
        comboBox_serialPort->setSizeIncrement(QSize(0, 0));
        comboBox_serialPort->setBaseSize(QSize(0, 0));
        comboBox_serialPort->setEditable(false);

        horizontalLayout_5->addWidget(comboBox_serialPort);

        pushButton_serchSerial = new QPushButton(Widget);
        pushButton_serchSerial->setObjectName(QStringLiteral("pushButton_serchSerial"));
        sizePolicy.setHeightForWidth(pushButton_serchSerial->sizePolicy().hasHeightForWidth());
        pushButton_serchSerial->setSizePolicy(sizePolicy);
        pushButton_serchSerial->setMinimumSize(QSize(75, 23));
        pushButton_serchSerial->setMaximumSize(QSize(73, 23));
        pushButton_serchSerial->setSizeIncrement(QSize(0, 0));
        pushButton_serchSerial->setBaseSize(QSize(0, 0));

        horizontalLayout_5->addWidget(pushButton_serchSerial);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        comboBox_serialBaund = new QComboBox(Widget);
        comboBox_serialBaund->addItem(QString());
        comboBox_serialBaund->addItem(QString());
        comboBox_serialBaund->addItem(QString());
        comboBox_serialBaund->setObjectName(QStringLiteral("comboBox_serialBaund"));
        comboBox_serialBaund->setEnabled(true);
        sizePolicy.setHeightForWidth(comboBox_serialBaund->sizePolicy().hasHeightForWidth());
        comboBox_serialBaund->setSizePolicy(sizePolicy);
        comboBox_serialBaund->setMinimumSize(QSize(100, 20));
        comboBox_serialBaund->setMaximumSize(QSize(100, 20));
        comboBox_serialBaund->setSizeIncrement(QSize(0, 0));
        comboBox_serialBaund->setBaseSize(QSize(0, 0));

        horizontalLayout_6->addWidget(comboBox_serialBaund);

        pushButton_openSerial = new QPushButton(Widget);
        pushButton_openSerial->setObjectName(QStringLiteral("pushButton_openSerial"));
        sizePolicy.setHeightForWidth(pushButton_openSerial->sizePolicy().hasHeightForWidth());
        pushButton_openSerial->setSizePolicy(sizePolicy);
        pushButton_openSerial->setMinimumSize(QSize(75, 23));
        pushButton_openSerial->setMaximumSize(QSize(75, 23));
        pushButton_openSerial->setSizeIncrement(QSize(0, 0));
        pushButton_openSerial->setBaseSize(QSize(0, 0));

        horizontalLayout_6->addWidget(pushButton_openSerial);


        verticalLayout->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout);

        horizontalLayout_7->setStretch(0, 5);
        horizontalLayout_7->setStretch(1, 2);

        horizontalLayout_9->addLayout(horizontalLayout_7);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\217\202\346\225\260\351\205\215\347\275\256", nullptr));
        pushButton_clearRecv->setText(QApplication::translate("Widget", "\346\270\205\351\231\244\346\216\245\346\224\266", nullptr));
        pushButton_readData->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\345\217\202\346\225\260", nullptr));
        label_3->setText(QApplication::translate("Widget", "\347\253\231\345\217\267\357\274\232    ", nullptr));
        pushButton_stationSet->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label_4->setText(QApplication::translate("Widget", "\351\242\221\346\256\265\357\274\232    ", nullptr));
        pushButton_freqSet->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label_5->setText(QApplication::translate("Widget", "\351\207\207\346\240\267\345\221\250\346\234\237\357\274\232", nullptr));
        pushButton_sampSet->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label_6->setText(QApplication::translate("Widget", "\350\204\211\345\206\262\350\216\267\345\217\226\357\274\232", nullptr));
        pushButton_pulseSet->setText(QApplication::translate("Widget", "\350\256\276\347\275\256", nullptr));
        label->setText(QApplication::translate("Widget", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        pushButton_serchSerial->setText(QApplication::translate("Widget", "\346\237\245\346\211\276", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        comboBox_serialBaund->setItemText(0, QApplication::translate("Widget", "9600", nullptr));
        comboBox_serialBaund->setItemText(1, QApplication::translate("Widget", "38400", nullptr));
        comboBox_serialBaund->setItemText(2, QApplication::translate("Widget", "115200", nullptr));

        pushButton_openSerial->setText(QApplication::translate("Widget", "\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
