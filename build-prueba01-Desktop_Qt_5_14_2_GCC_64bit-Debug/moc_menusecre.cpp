/****************************************************************************
** Meta object code from reading C++ file 'menusecre.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../prueba01/menusecre.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menusecre.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuSecre_t {
    QByteArrayData data[8];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuSecre_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuSecre_t qt_meta_stringdata_MenuSecre = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MenuSecre"
QT_MOC_LITERAL(1, 10, 18), // "on_Mostrar_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 25), // "on_enviarRevision_clicked"
QT_MOC_LITERAL(4, 56, 26), // "on_descargaArchvio_clicked"
QT_MOC_LITERAL(5, 83, 19), // "on_aceptado_toggled"
QT_MOC_LITERAL(6, 103, 7), // "checked"
QT_MOC_LITERAL(7, 111, 19) // "on_denegado_toggled"

    },
    "MenuSecre\0on_Mostrar_clicked\0\0"
    "on_enviarRevision_clicked\0"
    "on_descargaArchvio_clicked\0"
    "on_aceptado_toggled\0checked\0"
    "on_denegado_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuSecre[] = {

 // content:
       8,       // revision
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
       5,    1,   42,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void MenuSecre::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuSecre *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Mostrar_clicked(); break;
        case 1: _t->on_enviarRevision_clicked(); break;
        case 2: _t->on_descargaArchvio_clicked(); break;
        case 3: _t->on_aceptado_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_denegado_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuSecre::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MenuSecre.data,
    qt_meta_data_MenuSecre,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuSecre::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuSecre::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuSecre.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MenuSecre::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
