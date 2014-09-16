/****************************************************************************
** Meta object code from reading C++ file 'sktinfoextractor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../touch/sktinfoextractor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sktinfoextractor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sktinfoextractor_t {
    QByteArrayData data[15];
    char stringdata[302];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sktinfoextractor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sktinfoextractor_t qt_meta_stringdata_sktinfoextractor = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 11),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 22),
QT_MOC_LITERAL(4, 53, 29),
QT_MOC_LITERAL(5, 83, 4),
QT_MOC_LITERAL(6, 88, 24),
QT_MOC_LITERAL(7, 113, 7),
QT_MOC_LITERAL(8, 121, 19),
QT_MOC_LITERAL(9, 141, 21),
QT_MOC_LITERAL(10, 163, 25),
QT_MOC_LITERAL(11, 189, 20),
QT_MOC_LITERAL(12, 210, 21),
QT_MOC_LITERAL(13, 232, 38),
QT_MOC_LITERAL(14, 271, 30)
    },
    "sktinfoextractor\0hacerUpdate\0\0"
    "on_pushButton_released\0"
    "on_doubleSpinBox_valueChanged\0arg1\0"
    "on_sendTuioCheck_toggled\0checked\0"
    "on_checkBox_toggled\0on_checkBox_2_toggled\0"
    "on_pointCalStart_released\0"
    "on_tuioMouse_toggled\0on_checkBox_3_toggled\0"
    "on_minDistanceToUpdateBox_valueChanged\0"
    "on_framesPointBox_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sktinfoextractor[] = {

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
       6,    1,   74,    2, 0x08 /* Private */,
       8,    1,   77,    2, 0x08 /* Private */,
       9,    1,   80,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      12,    1,   87,    2, 0x08 /* Private */,
      13,    1,   90,    2, 0x08 /* Private */,
      14,    1,   93,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void sktinfoextractor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sktinfoextractor *_t = static_cast<sktinfoextractor *>(_o);
        switch (_id) {
        case 0: _t->hacerUpdate(); break;
        case 1: _t->on_pushButton_released(); break;
        case 2: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->on_sendTuioCheck_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_checkBox_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_pointCalStart_released(); break;
        case 7: _t->on_tuioMouse_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_3_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_minDistanceToUpdateBox_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->on_framesPointBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject sktinfoextractor::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_sktinfoextractor.data,
      qt_meta_data_sktinfoextractor,  qt_static_metacall, 0, 0}
};


const QMetaObject *sktinfoextractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sktinfoextractor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_sktinfoextractor.stringdata))
        return static_cast<void*>(const_cast< sktinfoextractor*>(this));
    return QDialog::qt_metacast(_clname);
}

int sktinfoextractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
