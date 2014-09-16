/****************************************************************************
** Meta object code from reading C++ file 'multi3dviewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../multiviewer/multi3dviewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'multi3dviewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_multi3dviewer_t {
    QByteArrayData data[13];
    char stringdata[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_multi3dviewer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_multi3dviewer_t qt_meta_stringdata_multi3dviewer = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 11),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 21),
QT_MOC_LITERAL(4, 49, 23),
QT_MOC_LITERAL(5, 73, 21),
QT_MOC_LITERAL(6, 95, 27),
QT_MOC_LITERAL(7, 123, 5),
QT_MOC_LITERAL(8, 129, 24),
QT_MOC_LITERAL(9, 154, 20),
QT_MOC_LITERAL(10, 175, 4),
QT_MOC_LITERAL(11, 180, 20),
QT_MOC_LITERAL(12, 201, 20)
    },
    "multi3dviewer\0hacerUpdate\0\0"
    "on_keppCloud_released\0on_videoRecBut_released\0"
    "on_videoPlay_released\0on_videoSlider_valueChanged\0"
    "value\0on_videoControl_released\0"
    "on_colR_valueChanged\0arg1\0"
    "on_colG_valueChanged\0on_colB_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_multi3dviewer[] = {

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
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    1,   67,    2, 0x08 /* Private */,
      11,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   10,

       0        // eod
};

void multi3dviewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        multi3dviewer *_t = static_cast<multi3dviewer *>(_o);
        switch (_id) {
        case 0: _t->hacerUpdate(); break;
        case 1: _t->on_keppCloud_released(); break;
        case 2: _t->on_videoRecBut_released(); break;
        case 3: _t->on_videoPlay_released(); break;
        case 4: _t->on_videoSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_videoControl_released(); break;
        case 6: _t->on_colR_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_colG_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_colB_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject multi3dviewer::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_multi3dviewer.data,
      qt_meta_data_multi3dviewer,  qt_static_metacall, 0, 0}
};


const QMetaObject *multi3dviewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *multi3dviewer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_multi3dviewer.stringdata))
        return static_cast<void*>(const_cast< multi3dviewer*>(this));
    return QDialog::qt_metacast(_clname);
}

int multi3dviewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
