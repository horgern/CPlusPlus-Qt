/****************************************************************************
** Meta object code from reading C++ file 'userdata.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Contrlol_Terminal/userdata.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userdata.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_UserData_t {
    QByteArrayData data[10];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserData_t qt_meta_stringdata_UserData = {
    {
QT_MOC_LITERAL(0, 0, 8), // "UserData"
QT_MOC_LITERAL(1, 9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 33), // "on_pushButton_ShowAllData_cli..."
QT_MOC_LITERAL(4, 66, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(5, 92, 13), // "UserDada_SLOT"
QT_MOC_LITERAL(6, 106, 3), // "str"
QT_MOC_LITERAL(7, 110, 26), // "on_pushButton_find_clicked"
QT_MOC_LITERAL(8, 137, 28), // "on_pushButton_update_clicked"
QT_MOC_LITERAL(9, 166, 28) // "on_pushButton_delete_clicked"

    },
    "UserData\0on_pushButton_clicked\0\0"
    "on_pushButton_ShowAllData_clicked\0"
    "on_pushButton_add_clicked\0UserDada_SLOT\0"
    "str\0on_pushButton_find_clicked\0"
    "on_pushButton_update_clicked\0"
    "on_pushButton_delete_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserData[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        UserData *_t = static_cast<UserData *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_ShowAllData_clicked(); break;
        case 2: _t->on_pushButton_add_clicked(); break;
        case 3: _t->UserDada_SLOT((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_find_clicked(); break;
        case 5: _t->on_pushButton_update_clicked(); break;
        case 6: _t->on_pushButton_delete_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject UserData::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UserData.data,
      qt_meta_data_UserData,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *UserData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserData::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_UserData.stringdata0))
        return static_cast<void*>(const_cast< UserData*>(this));
    return QDialog::qt_metacast(_clname);
}

int UserData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
