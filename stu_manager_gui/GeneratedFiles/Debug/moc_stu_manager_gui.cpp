/****************************************************************************
** Meta object code from reading C++ file 'stu_manager_gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../stu_manager_gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stu_manager_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_stu_manager_gui_t {
    QByteArrayData data[8];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_stu_manager_gui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_stu_manager_gui_t qt_meta_stringdata_stu_manager_gui = {
    {
QT_MOC_LITERAL(0, 0, 15), // "stu_manager_gui"
QT_MOC_LITERAL(1, 16, 11), // "OnTouchShow"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "OnTouchAddStu"
QT_MOC_LITERAL(4, 43, 13), // "OnTouchDelStu"
QT_MOC_LITERAL(5, 57, 16), // "OntouchChangeStu"
QT_MOC_LITERAL(6, 74, 8), // "OnMyShow"
QT_MOC_LITERAL(7, 83, 4) // "nNum"

    },
    "stu_manager_gui\0OnTouchShow\0\0OnTouchAddStu\0"
    "OnTouchDelStu\0OntouchChangeStu\0OnMyShow\0"
    "nNum"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_stu_manager_gui[] = {

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
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    1,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void stu_manager_gui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        stu_manager_gui *_t = static_cast<stu_manager_gui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnTouchShow(); break;
        case 1: _t->OnTouchAddStu(); break;
        case 2: _t->OnTouchDelStu(); break;
        case 3: _t->OntouchChangeStu(); break;
        case 4: _t->OnMyShow((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject stu_manager_gui::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_stu_manager_gui.data,
      qt_meta_data_stu_manager_gui,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *stu_manager_gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *stu_manager_gui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_stu_manager_gui.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int stu_manager_gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
