/****************************************************************************
** Meta object code from reading C++ file 'page_2.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "page_2.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'page_2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_page_2_t {
    QByteArrayData data[11];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_page_2_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_page_2_t qt_meta_stringdata_page_2 = {
    {
QT_MOC_LITERAL(0, 0, 6), // "page_2"
QT_MOC_LITERAL(1, 7, 13), // "pushButtonSig"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 13), // "sigSocketRecv"
QT_MOC_LITERAL(4, 36, 13), // "page1RecvData"
QT_MOC_LITERAL(5, 50, 14), // "page4RecvData1"
QT_MOC_LITERAL(6, 65, 17), // "sigSocketSendData"
QT_MOC_LITERAL(7, 83, 18), // "on_pToggle_toggled"
QT_MOC_LITERAL(8, 102, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 124, 14), // "on_pDB_clicked"
QT_MOC_LITERAL(10, 139, 22) // "on_pBack_page2_clicked"

    },
    "page_2\0pushButtonSig\0\0sigSocketRecv\0"
    "page1RecvData\0page4RecvData1\0"
    "sigSocketSendData\0on_pToggle_toggled\0"
    "on_pushButton_clicked\0on_pDB_clicked\0"
    "on_pBack_page2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_page_2[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       6,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   74,    2, 0x08 /* Private */,
       8,    0,   77,    2, 0x08 /* Private */,
       9,    0,   78,    2, 0x08 /* Private */,
      10,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void page_2::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<page_2 *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pushButtonSig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigSocketRecv((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->page1RecvData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->page4RecvData1((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->sigSocketSendData((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_pToggle_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_pDB_clicked(); break;
        case 8: _t->on_pBack_page2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (page_2::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page_2::pushButtonSig)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (page_2::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page_2::sigSocketRecv)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (page_2::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page_2::page1RecvData)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (page_2::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page_2::page4RecvData1)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (page_2::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&page_2::sigSocketSendData)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject page_2::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_page_2.data,
    qt_meta_data_page_2,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *page_2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *page_2::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_page_2.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int page_2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void page_2::pushButtonSig(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void page_2::sigSocketRecv(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void page_2::page1RecvData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void page_2::page4RecvData1(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void page_2::sigSocketSendData(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
