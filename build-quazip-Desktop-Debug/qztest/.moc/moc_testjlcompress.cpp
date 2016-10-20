/****************************************************************************
** Meta object code from reading C++ file 'testjlcompress.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../quazip-0.7.2/qztest/testjlcompress.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testjlcompress.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestJlCompress_t {
    QByteArrayData data[15];
    char stringdata[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TestJlCompress_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TestJlCompress_t qt_meta_stringdata_TestJlCompress = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 17),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 12),
QT_MOC_LITERAL(4, 47, 18),
QT_MOC_LITERAL(5, 66, 13),
QT_MOC_LITERAL(6, 80, 16),
QT_MOC_LITERAL(7, 97, 11),
QT_MOC_LITERAL(8, 109, 16),
QT_MOC_LITERAL(9, 126, 11),
QT_MOC_LITERAL(10, 138, 17),
QT_MOC_LITERAL(11, 156, 12),
QT_MOC_LITERAL(12, 169, 15),
QT_MOC_LITERAL(13, 185, 10),
QT_MOC_LITERAL(14, 196, 15)
    },
    "TestJlCompress\0compressFile_data\0\0"
    "compressFile\0compressFiles_data\0"
    "compressFiles\0compressDir_data\0"
    "compressDir\0extractFile_data\0extractFile\0"
    "extractFiles_data\0extractFiles\0"
    "extractDir_data\0extractDir\0zeroPermissions\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestJlCompress[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08,
       3,    0,   80,    2, 0x08,
       4,    0,   81,    2, 0x08,
       5,    0,   82,    2, 0x08,
       6,    0,   83,    2, 0x08,
       7,    0,   84,    2, 0x08,
       8,    0,   85,    2, 0x08,
       9,    0,   86,    2, 0x08,
      10,    0,   87,    2, 0x08,
      11,    0,   88,    2, 0x08,
      12,    0,   89,    2, 0x08,
      13,    0,   90,    2, 0x08,
      14,    0,   91,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TestJlCompress::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestJlCompress *_t = static_cast<TestJlCompress *>(_o);
        switch (_id) {
        case 0: _t->compressFile_data(); break;
        case 1: _t->compressFile(); break;
        case 2: _t->compressFiles_data(); break;
        case 3: _t->compressFiles(); break;
        case 4: _t->compressDir_data(); break;
        case 5: _t->compressDir(); break;
        case 6: _t->extractFile_data(); break;
        case 7: _t->extractFile(); break;
        case 8: _t->extractFiles_data(); break;
        case 9: _t->extractFiles(); break;
        case 10: _t->extractDir_data(); break;
        case 11: _t->extractDir(); break;
        case 12: _t->zeroPermissions(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestJlCompress::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestJlCompress.data,
      qt_meta_data_TestJlCompress,  qt_static_metacall, 0, 0}
};


const QMetaObject *TestJlCompress::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestJlCompress::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestJlCompress.stringdata))
        return static_cast<void*>(const_cast< TestJlCompress*>(this));
    return QObject::qt_metacast(_clname);
}

int TestJlCompress::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
