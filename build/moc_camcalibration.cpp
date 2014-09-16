/****************************************************************************
** Meta object code from reading C++ file 'camcalibration.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../common/camcalibration.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camcalibration.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_camcalibration_t {
    QByteArrayData data[7];
    char stringdata[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_camcalibration_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_camcalibration_t qt_meta_stringdata_camcalibration = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 11),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 23),
QT_MOC_LITERAL(4, 52, 18),
QT_MOC_LITERAL(5, 71, 22),
QT_MOC_LITERAL(6, 94, 24)
    },
    "camcalibration\0hacerUpdate\0\0"
    "on_clearPoints_released\0on_getNew_released\0"
    "on_savePoints_released\0on_pushButton_2_released"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_camcalibration[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void camcalibration::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        camcalibration *_t = static_cast<camcalibration *>(_o);
        switch (_id) {
        case 0: _t->hacerUpdate(); break;
        case 1: _t->on_clearPoints_released(); break;
        case 2: _t->on_getNew_released(); break;
        case 3: _t->on_savePoints_released(); break;
        case 4: _t->on_pushButton_2_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject camcalibration::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_camcalibration.data,
      qt_meta_data_camcalibration,  qt_static_metacall, 0, 0}
};


const QMetaObject *camcalibration::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *camcalibration::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_camcalibration.stringdata))
        return static_cast<void*>(const_cast< camcalibration*>(this));
    return QDialog::qt_metacast(_clname);
}

int camcalibration::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
