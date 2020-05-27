/****************************************************************************
** Meta object code from reading C++ file 'menusuper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../prueba01/menusuper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menusuper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuSuper_t {
    QByteArrayData data[16];
    char stringdata0[314];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MenuSuper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MenuSuper_t qt_meta_stringdata_MenuSuper = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MenuSuper"
QT_MOC_LITERAL(1, 10, 22), // "on_radioCedula_toggled"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "checked"
QT_MOC_LITERAL(4, 42, 23), // "on_radioUsuario_toggled"
QT_MOC_LITERAL(5, 66, 24), // "on_radioPassword_toggled"
QT_MOC_LITERAL(6, 91, 22), // "on_radioNombre_toggled"
QT_MOC_LITERAL(7, 114, 25), // "on_radioApellidos_toggled"
QT_MOC_LITERAL(8, 140, 21), // "on_radioPhone_toggled"
QT_MOC_LITERAL(9, 162, 21), // "on_radioEMail_toggled"
QT_MOC_LITERAL(10, 184, 24), // "on_radioCedula_2_toggled"
QT_MOC_LITERAL(11, 209, 20), // "on_mBuscarPB_clicked"
QT_MOC_LITERAL(12, 230, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 252, 18), // "on_eUserPB_clicked"
QT_MOC_LITERAL(14, 271, 18), // "on_mostrar_clicked"
QT_MOC_LITERAL(15, 290, 23) // "on_pushButton_2_clicked"

    },
    "MenuSuper\0on_radioCedula_toggled\0\0"
    "checked\0on_radioUsuario_toggled\0"
    "on_radioPassword_toggled\0"
    "on_radioNombre_toggled\0on_radioApellidos_toggled\0"
    "on_radioPhone_toggled\0on_radioEMail_toggled\0"
    "on_radioCedula_2_toggled\0on_mBuscarPB_clicked\0"
    "on_pushButton_clicked\0on_eUserPB_clicked\0"
    "on_mostrar_clicked\0on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuSuper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x08 /* Private */,
       5,    1,   85,    2, 0x08 /* Private */,
       6,    1,   88,    2, 0x08 /* Private */,
       7,    1,   91,    2, 0x08 /* Private */,
       8,    1,   94,    2, 0x08 /* Private */,
       9,    1,   97,    2, 0x08 /* Private */,
      10,    1,  100,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    0,  106,    2, 0x08 /* Private */,
      15,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuSuper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuSuper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_radioCedula_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->on_radioUsuario_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_radioPassword_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->on_radioNombre_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radioApellidos_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radioPhone_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_radioEMail_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radioCedula_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_mBuscarPB_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_eUserPB_clicked(); break;
        case 11: _t->on_mostrar_clicked(); break;
        case 12: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MenuSuper::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MenuSuper.data,
    qt_meta_data_MenuSuper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MenuSuper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuSuper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuSuper.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MenuSuper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
