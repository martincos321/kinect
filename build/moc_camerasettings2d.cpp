/****************************************************************************
** Meta object code from reading C++ file 'camerasettings2d.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../touch/camerasettings2d.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camerasettings2d.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_cameraSettings2d_t {
    QByteArrayData data[20];
    char stringdata[406];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_cameraSettings2d_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_cameraSettings2d_t qt_meta_stringdata_cameraSettings2d = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 32),
QT_MOC_LITERAL(2, 50, 0),
QT_MOC_LITERAL(3, 51, 5),
QT_MOC_LITERAL(4, 57, 11),
QT_MOC_LITERAL(5, 69, 34),
QT_MOC_LITERAL(6, 104, 4),
QT_MOC_LITERAL(7, 109, 27),
QT_MOC_LITERAL(8, 137, 23),
QT_MOC_LITERAL(9, 161, 21),
QT_MOC_LITERAL(10, 183, 23),
QT_MOC_LITERAL(11, 207, 27),
QT_MOC_LITERAL(12, 235, 27),
QT_MOC_LITERAL(13, 263, 22),
QT_MOC_LITERAL(14, 286, 19),
QT_MOC_LITERAL(15, 306, 24),
QT_MOC_LITERAL(16, 331, 21),
QT_MOC_LITERAL(17, 353, 22),
QT_MOC_LITERAL(18, 376, 21),
QT_MOC_LITERAL(19, 398, 7)
    },
    "cameraSettings2d\0on_horizontalSlider_valueChanged\0"
    "\0value\0hacerUpdate\0"
    "on_methodToUse_currentIndexChanged\0"
    "arg1\0on_minDistance_valueChanged\0"
    "on_dilate0_valueChanged\0on_erode_valueChanged\0"
    "on_dilate1_valueChanged\0"
    "on_maxDistance_valueChanged\0"
    "on_minBlobSize_valueChanged\0"
    "on_zoneButton_released\0on_calBack_released\0"
    "on_variance_valueChanged\0on_calcPlane_released\0"
    "on_refineMask_released\0on_matchIandD_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cameraSettings2d[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x08 /* Private */,
       4,    0,   92,    2, 0x08 /* Private */,
       5,    1,   93,    2, 0x08 /* Private */,
       7,    1,   96,    2, 0x08 /* Private */,
       8,    1,   99,    2, 0x08 /* Private */,
       9,    1,  102,    2, 0x08 /* Private */,
      10,    1,  105,    2, 0x08 /* Private */,
      11,    1,  108,    2, 0x08 /* Private */,
      12,    1,  111,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    1,  121,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   19,

       0        // eod
};

void cameraSettings2d::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        cameraSettings2d *_t = static_cast<cameraSettings2d *>(_o);
        switch (_id) {
        case 0: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->hacerUpdate(); break;
        case 2: _t->on_methodToUse_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_minDistance_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_dilate0_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_erode_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_dilate1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_maxDistance_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_minBlobSize_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_zoneButton_released(); break;
        case 10: _t->on_calBack_released(); break;
        case 11: _t->on_variance_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 12: _t->on_calcPlane_released(); break;
        case 13: _t->on_refineMask_released(); break;
        case 14: _t->on_matchIandD_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject cameraSettings2d::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_cameraSettings2d.data,
      qt_meta_data_cameraSettings2d,  qt_static_metacall, 0, 0}
};


const QMetaObject *cameraSettings2d::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cameraSettings2d::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_cameraSettings2d.stringdata))
        return static_cast<void*>(const_cast< cameraSettings2d*>(this));
    return QDialog::qt_metacast(_clname);
}

int cameraSettings2d::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
