/****************************************************************************
** Meta object code from reading C++ file 'customtimectrl.h'
**
** Created: Tue 5. Apr 16:19:21 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../customtimectrl.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'customtimectrl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CustomTimeCtrl[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   29, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x05,
      45,   35,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      68,   62,   15,   15, 0x08,

 // properties: name, type, flags
      95,   85, 0x10195103,

 // properties: notify_signal_id
       0,

       0        // eod
};

static const char qt_meta_stringdata_CustomTimeCtrl[] = {
    "CustomTimeCtrl\0\0bAuto\0isAuto(bool)\0"
    "bDateTime\0isDateTime(bool)\0bTime\0"
    "setHasTime(bool)\0QDateTime\0dateTime\0"
};

const QMetaObject CustomTimeCtrl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CustomTimeCtrl,
      qt_meta_data_CustomTimeCtrl, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CustomTimeCtrl::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CustomTimeCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CustomTimeCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CustomTimeCtrl))
        return static_cast<void*>(const_cast< CustomTimeCtrl*>(this));
    if (!strcmp(_clname, "Ui::DateTime"))
        return static_cast< Ui::DateTime*>(const_cast< CustomTimeCtrl*>(this));
    return QWidget::qt_metacast(_clname);
}

int CustomTimeCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: isAuto((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: isDateTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setHasTime((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDateTime*>(_v) = dateTime(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setDateTime(*reinterpret_cast< QDateTime*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CustomTimeCtrl::isAuto(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CustomTimeCtrl::isDateTime(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
