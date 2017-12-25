/****************************************************************************
** Meta object code from reading C++ file 'music_player.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GPS/music_player.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'music_player.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_music_player_t {
    QByteArrayData data[19];
    char stringdata0[367];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_music_player_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_music_player_t qt_meta_stringdata_music_player = {
    {
QT_MOC_LITERAL(0, 0, 12), // "music_player"
QT_MOC_LITERAL(1, 13, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 31), // "on_pushButton_stop_cont_clicked"
QT_MOC_LITERAL(4, 73, 29), // "on_verticalSlider_sliderMoved"
QT_MOC_LITERAL(5, 103, 8), // "position"
QT_MOC_LITERAL(6, 112, 26), // "on_pushButton_next_clicked"
QT_MOC_LITERAL(7, 139, 26), // "on_pushButton_prev_clicked"
QT_MOC_LITERAL(8, 166, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(9, 193, 11), // "slot_getpos"
QT_MOC_LITERAL(10, 205, 4), // "Flag"
QT_MOC_LITERAL(11, 210, 31), // "on_horizontalSlider_sliderMoved"
QT_MOC_LITERAL(12, 242, 10), // "closeEvent"
QT_MOC_LITERAL(13, 253, 12), // "QCloseEvent*"
QT_MOC_LITERAL(14, 266, 5), // "event"
QT_MOC_LITERAL(15, 272, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(16, 304, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(17, 321, 4), // "item"
QT_MOC_LITERAL(18, 326, 40) // "on_listWidget_showlist_itemDo..."

    },
    "music_player\0on_pushButton_open_clicked\0"
    "\0on_pushButton_stop_cont_clicked\0"
    "on_verticalSlider_sliderMoved\0position\0"
    "on_pushButton_next_clicked\0"
    "on_pushButton_prev_clicked\0"
    "on_pushButton_back_clicked\0slot_getpos\0"
    "Flag\0on_horizontalSlider_sliderMoved\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0"
    "on_listWidget_showlist_itemDoubleClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_music_player[] = {

 // content:
       7,       // revision
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
       4,    1,   71,    2, 0x08 /* Private */,
       6,    0,   74,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,
      15,    1,   86,    2, 0x08 /* Private */,
      18,    1,   89,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void music_player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        music_player *_t = static_cast<music_player *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_open_clicked(); break;
        case 1: _t->on_pushButton_stop_cont_clicked(); break;
        case 2: _t->on_verticalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_next_clicked(); break;
        case 4: _t->on_pushButton_prev_clicked(); break;
        case 5: _t->on_pushButton_back_clicked(); break;
        case 6: _t->slot_getpos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 9: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 10: _t->on_listWidget_showlist_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject music_player::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_music_player.data,
      qt_meta_data_music_player,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *music_player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *music_player::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_music_player.stringdata0))
        return static_cast<void*>(const_cast< music_player*>(this));
    return QDialog::qt_metacast(_clname);
}

int music_player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
