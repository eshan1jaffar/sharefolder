/****************************************************************************
** Meta object code from reading C++ file 'action_button.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/stsl/stsl_rviz_plugins/src/action_button.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'action_button.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stsl_rviz_plugins__ActionButton_t {
    QByteArrayData data[6];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stsl_rviz_plugins__ActionButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stsl_rviz_plugins__ActionButton_t qt_meta_stringdata_stsl_rviz_plugins__ActionButton = {
    {
QT_MOC_LITERAL(0, 0, 31), // "stsl_rviz_plugins::ActionButton"
QT_MOC_LITERAL(1, 32, 19), // "cancellingCompleted"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 16), // "runningCompleted"
QT_MOC_LITERAL(4, 70, 14), // "onEnterRunning"
QT_MOC_LITERAL(5, 85, 17) // "onEnterCancelling"

    },
    "stsl_rviz_plugins::ActionButton\0"
    "cancellingCompleted\0\0runningCompleted\0"
    "onEnterRunning\0onEnterCancelling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stsl_rviz_plugins__ActionButton[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void stsl_rviz_plugins::ActionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActionButton *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->cancellingCompleted(); break;
        case 1: _t->runningCompleted(); break;
        case 2: _t->onEnterRunning(); break;
        case 3: _t->onEnterCancelling(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ActionButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionButton::cancellingCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActionButton::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ActionButton::runningCompleted)) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject stsl_rviz_plugins::ActionButton::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_common::Panel::staticMetaObject>(),
    qt_meta_stringdata_stsl_rviz_plugins__ActionButton.data,
    qt_meta_data_stsl_rviz_plugins__ActionButton,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *stsl_rviz_plugins::ActionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stsl_rviz_plugins::ActionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stsl_rviz_plugins__ActionButton.stringdata0))
        return static_cast<void*>(this);
    return rviz_common::Panel::qt_metacast(_clname);
}

int stsl_rviz_plugins::ActionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_common::Panel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void stsl_rviz_plugins::ActionButton::cancellingCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void stsl_rviz_plugins::ActionButton::runningCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
