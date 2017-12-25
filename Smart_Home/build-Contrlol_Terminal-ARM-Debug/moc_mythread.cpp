/****************************************************************************
** Meta object code from reading C++ file 'mythread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Contrlol_Terminal/mythread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mythread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mythread_t {
    QByteArrayData data[6];
    char stringdata0[50];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mythread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mythread_t qt_meta_stringdata_mythread = {
    {
QT_MOC_LITERAL(0, 0, 8), // "mythread"
QT_MOC_LITERAL(1, 9, 15), // "sig_get_network"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 8), // "show_sig"
QT_MOC_LITERAL(4, 35, 3), // "str"
QT_MOC_LITERAL(5, 39, 10) // "recvFM_sig"

    },
    "mythread\0sig_get_network\0\0show_sig\0"
    "str\0recvFM_sig"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mythread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       5,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void mythread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mythread *_t = static_cast<mythread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sig_get_network(); break;
        case 1: _t->show_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->recvFM_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (mythread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mythread::sig_get_network)) {
                *result = 0;
            }
        }
        {
            typedef void (mythread::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mythread::show_sig)) {
                *result = 1;
            }
        }
        {
            typedef void (mythread::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&mythread::recvFM_sig)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject mythread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_mythread.data,
      qt_meta_data_mythread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mythread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mythread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mythread.stringdata0))
        return static_cast<void*>(const_cast< mythread*>(this));
    return QThread::qt_metacast(_clname);
}

int mythread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void mythread::sig_get_network()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void mythread::show_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void mythread::recvFM_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
