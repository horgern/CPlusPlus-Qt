/****************************************************************************
** Meta object code from reading C++ file 'myserial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Contrlol_Terminal/myserial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myserial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myserial_t {
    QByteArrayData data[17];
    char stringdata0[424];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myserial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myserial_t qt_meta_stringdata_myserial = {
    {
QT_MOC_LITERAL(0, 0, 8), // "myserial"
QT_MOC_LITERAL(1, 9, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 10), // "serialRead"
QT_MOC_LITERAL(4, 48, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(5, 80, 4), // "arg1"
QT_MOC_LITERAL(6, 85, 33), // "on_pushButton_Send_Serial_cli..."
QT_MOC_LITERAL(7, 119, 34), // "on_pushButton_Clear_Serial_cl..."
QT_MOC_LITERAL(8, 154, 36), // "on_comboBox_baud_currentIndex..."
QT_MOC_LITERAL(9, 191, 36), // "on_comboBox_data_currentIndex..."
QT_MOC_LITERAL(10, 228, 38), // "on_comboBox_Parity_currentInd..."
QT_MOC_LITERAL(11, 267, 40), // "on_comboBox_StopBits_currentI..."
QT_MOC_LITERAL(12, 308, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(13, 335, 27), // "on_pushButton_close_clicked"
QT_MOC_LITERAL(14, 363, 39), // "on_pushButton_Send_Serial_cle..."
QT_MOC_LITERAL(15, 403, 16), // "SendMsgToMachine"
QT_MOC_LITERAL(16, 420, 3) // "str"

    },
    "myserial\0on_pushButton_back_clicked\0"
    "\0serialRead\0on_comboBox_currentIndexChanged\0"
    "arg1\0on_pushButton_Send_Serial_clicked\0"
    "on_pushButton_Clear_Serial_clicked\0"
    "on_comboBox_baud_currentIndexChanged\0"
    "on_comboBox_data_currentIndexChanged\0"
    "on_comboBox_Parity_currentIndexChanged\0"
    "on_comboBox_StopBits_currentIndexChanged\0"
    "on_pushButton_open_clicked\0"
    "on_pushButton_close_clicked\0"
    "on_pushButton_Send_Serial_clear_clicked\0"
    "SendMsgToMachine\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myserial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    1,   81,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    1,   92,    2, 0x08 /* Private */,
      11,    1,   95,    2, 0x08 /* Private */,
      12,    0,   98,    2, 0x08 /* Private */,
      13,    0,   99,    2, 0x08 /* Private */,
      14,    0,  100,    2, 0x08 /* Private */,
      15,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

       0        // eod
};

void myserial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myserial *_t = static_cast<myserial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_back_clicked(); break;
        case 1: _t->serialRead(); break;
        case 2: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_Send_Serial_clicked(); break;
        case 4: _t->on_pushButton_Clear_Serial_clicked(); break;
        case 5: _t->on_comboBox_baud_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_data_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_comboBox_Parity_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboBox_StopBits_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_open_clicked(); break;
        case 10: _t->on_pushButton_close_clicked(); break;
        case 11: _t->on_pushButton_Send_Serial_clear_clicked(); break;
        case 12: _t->SendMsgToMachine((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject myserial::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_myserial.data,
      qt_meta_data_myserial,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myserial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myserial::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myserial.stringdata0))
        return static_cast<void*>(const_cast< myserial*>(this));
    return QDialog::qt_metacast(_clname);
}

int myserial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
