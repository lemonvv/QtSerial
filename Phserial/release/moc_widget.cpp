/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[13];
    char stringdata0[301];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 33), // "on_pushButton_serchSerial_cli..."
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 32), // "on_pushButton_openSerial_clicked"
QT_MOC_LITERAL(4, 75, 9), // "recv_data"
QT_MOC_LITERAL(5, 85, 31), // "on_pushButton_clearRecv_clicked"
QT_MOC_LITERAL(6, 117, 32), // "on_pushButton_stationSet_clicked"
QT_MOC_LITERAL(7, 150, 29), // "on_pushButton_freqSet_clicked"
QT_MOC_LITERAL(8, 180, 29), // "on_pushButton_sampSet_clicked"
QT_MOC_LITERAL(9, 210, 30), // "on_pushButton_readData_clicked"
QT_MOC_LITERAL(10, 241, 30), // "on_pushButton_pulseSet_clicked"
QT_MOC_LITERAL(11, 272, 12), // "timeUpSerial"
QT_MOC_LITERAL(12, 285, 15) // "rxtimeSerchData"

    },
    "Widget\0on_pushButton_serchSerial_clicked\0"
    "\0on_pushButton_openSerial_clicked\0"
    "recv_data\0on_pushButton_clearRecv_clicked\0"
    "on_pushButton_stationSet_clicked\0"
    "on_pushButton_freqSet_clicked\0"
    "on_pushButton_sampSet_clicked\0"
    "on_pushButton_readData_clicked\0"
    "on_pushButton_pulseSet_clicked\0"
    "timeUpSerial\0rxtimeSerchData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_serchSerial_clicked(); break;
        case 1: _t->on_pushButton_openSerial_clicked(); break;
        case 2: _t->recv_data(); break;
        case 3: _t->on_pushButton_clearRecv_clicked(); break;
        case 4: _t->on_pushButton_stationSet_clicked(); break;
        case 5: _t->on_pushButton_freqSet_clicked(); break;
        case 6: _t->on_pushButton_sampSet_clicked(); break;
        case 7: _t->on_pushButton_readData_clicked(); break;
        case 8: _t->on_pushButton_pulseSet_clicked(); break;
        case 9: _t->timeUpSerial(); break;
        case 10: _t->rxtimeSerchData(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Widget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Widget.data,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
