/****************************************************************************
** Meta object code from reading C++ file 'systray.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "systray.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systray.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_systray[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      15,    8,    8,    8, 0x0a,
      29,    8,    8,    8, 0x0a,
      39,    8,    8,    8, 0x08,
      60,    8,    8,    8, 0x08,
      84,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_systray[] = {
    "systray\0\0foo()\0kapatiyoruz()\0refresh()\0"
    "on_setKota_clicked()\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
};

void systray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        systray *_t = static_cast<systray *>(_o);
        switch (_id) {
        case 0: _t->foo(); break;
        case 1: _t->kapatiyoruz(); break;
        case 2: _t->refresh(); break;
        case 3: _t->on_setKota_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData systray::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject systray::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_systray,
      qt_meta_data_systray, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &systray::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *systray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *systray::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_systray))
        return static_cast<void*>(const_cast< systray*>(this));
    return QWidget::qt_metacast(_clname);
}

int systray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
