/****************************************************************************
** Meta object code from reading C++ file 'tuiomultiplexer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../common/tuiomultiplexer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tuiomultiplexer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tuiomultiplexer_t {
    QByteArrayData data[14];
    char stringdata[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tuiomultiplexer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tuiomultiplexer_t qt_meta_stringdata_tuiomultiplexer = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 22),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 7),
QT_MOC_LITERAL(4, 48, 9),
QT_MOC_LITERAL(5, 58, 2),
QT_MOC_LITERAL(6, 61, 13),
QT_MOC_LITERAL(7, 75, 3),
QT_MOC_LITERAL(8, 79, 22),
QT_MOC_LITERAL(9, 102, 10),
QT_MOC_LITERAL(10, 113, 25),
QT_MOC_LITERAL(11, 139, 26),
QT_MOC_LITERAL(12, 166, 19),
QT_MOC_LITERAL(13, 186, 19)
    },
    "tuiomultiplexer\0on_isListening_toggled\0"
    "\0checked\0activated\0nC\0startTraining\0"
    "num\0on_addGesture_released\0updateMats\0"
    "on_pointCalStart_released\0"
    "on_normCoordinates_toggled\0"
    "on_saveCal_released\0on_loadCal_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tuiomultiplexer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    1,   71,    2, 0x08 /* Private */,
      12,    0,   74,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void tuiomultiplexer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tuiomultiplexer *_t = static_cast<tuiomultiplexer *>(_o);
        switch (_id) {
        case 0: _t->on_isListening_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->startTraining((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_addGesture_released(); break;
        case 4: _t->updateMats(); break;
        case 5: _t->on_pointCalStart_released(); break;
        case 6: _t->on_normCoordinates_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_saveCal_released(); break;
        case 8: _t->on_loadCal_released(); break;
        default: ;
        }
    }
}

const QMetaObject tuiomultiplexer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_tuiomultiplexer.data,
      qt_meta_data_tuiomultiplexer,  qt_static_metacall, 0, 0}
};


const QMetaObject *tuiomultiplexer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tuiomultiplexer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_tuiomultiplexer.stringdata))
        return static_cast<void*>(const_cast< tuiomultiplexer*>(this));
    if (!strcmp(_clname, "TuioListener"))
        return static_cast< TuioListener*>(const_cast< tuiomultiplexer*>(this));
    return QDialog::qt_metacast(_clname);
}

int tuiomultiplexer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
