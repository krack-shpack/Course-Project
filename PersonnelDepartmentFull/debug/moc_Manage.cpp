/****************************************************************************
** Meta object code from reading C++ file 'Manage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Manage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Manage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Manage_t {
    QByteArrayData data[16];
    char stringdata0[190];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Manage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Manage_t qt_meta_stringdata_Manage = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Manage"
QT_MOC_LITERAL(1, 7, 8), // "addUsers"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "Users"
QT_MOC_LITERAL(4, 23, 9), // "EditUsers"
QT_MOC_LITERAL(5, 33, 11), // "deleteUsers"
QT_MOC_LITERAL(6, 45, 10), // "countUsers"
QT_MOC_LITERAL(7, 56, 12), // "loaddivision"
QT_MOC_LITERAL(8, 69, 7), // "GetName"
QT_MOC_LITERAL(9, 77, 16), // "numberofdevision"
QT_MOC_LITERAL(10, 94, 9), // "GetDirect"
QT_MOC_LITERAL(11, 104, 18), // "on_adduser_clicked"
QT_MOC_LITERAL(12, 123, 21), // "on_deleteuser_clicked"
QT_MOC_LITERAL(13, 145, 19), // "on_edituser_clicked"
QT_MOC_LITERAL(14, 165, 19), // "on_Find_textChanged"
QT_MOC_LITERAL(15, 185, 4) // "arg1"

    },
    "Manage\0addUsers\0\0Users\0EditUsers\0"
    "deleteUsers\0countUsers\0loaddivision\0"
    "GetName\0numberofdevision\0GetDirect\0"
    "on_adduser_clicked\0on_deleteuser_clicked\0"
    "on_edituser_clicked\0on_Find_textChanged\0"
    "arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Manage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    2,   72,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    0,   80,    2, 0x06 /* Public */,
       7,    0,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   82,    2, 0x0a /* Public */,
      10,    1,   85,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x08 /* Private */,
      12,    0,   89,    2, 0x08 /* Private */,
      13,    0,   90,    2, 0x08 /* Private */,
      14,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Int,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::QString, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void Manage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Manage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addUsers((*reinterpret_cast< Users(*)>(_a[1]))); break;
        case 1: _t->EditUsers((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Users(*)>(_a[2]))); break;
        case 2: _t->deleteUsers((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: { int _r = _t->countUsers();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->loaddivision(); break;
        case 5: { QString _r = _t->GetName((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 6: { QString _r = _t->GetDirect((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->on_adduser_clicked(); break;
        case 8: _t->on_deleteuser_clicked(); break;
        case 9: _t->on_edituser_clicked(); break;
        case 10: _t->on_Find_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Manage::*)(Users );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manage::addUsers)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Manage::*)(int , Users );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manage::EditUsers)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Manage::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manage::deleteUsers)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = int (Manage::*)() const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manage::countUsers)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Manage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manage::loaddivision)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Manage::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Manage.data,
    qt_meta_data_Manage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Manage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Manage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Manage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Manage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void Manage::addUsers(Users _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Manage::EditUsers(int _t1, Users _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Manage::deleteUsers(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
int Manage::countUsers()const
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))) };
    QMetaObject::activate(const_cast< Manage *>(this), &staticMetaObject, 3, _a);
    return _t0;
}

// SIGNAL 4
void Manage::loaddivision()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
