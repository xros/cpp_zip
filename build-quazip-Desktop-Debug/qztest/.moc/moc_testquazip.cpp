/****************************************************************************
** Meta object code from reading C++ file 'testquazip.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../quazip-0.7.2/qztest/testquazip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testquazip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TestQuaZip_t {
    QByteArrayData data[16];
    char stringdata[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_TestQuaZip_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_TestQuaZip_t qt_meta_stringdata_TestQuaZip = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 16),
QT_MOC_LITERAL(2, 28, 0),
QT_MOC_LITERAL(3, 29, 11),
QT_MOC_LITERAL(4, 41, 8),
QT_MOC_LITERAL(5, 50, 3),
QT_MOC_LITERAL(6, 54, 21),
QT_MOC_LITERAL(7, 76, 16),
QT_MOC_LITERAL(8, 93, 31),
QT_MOC_LITERAL(9, 125, 16),
QT_MOC_LITERAL(10, 142, 10),
QT_MOC_LITERAL(11, 153, 11),
QT_MOC_LITERAL(12, 165, 15),
QT_MOC_LITERAL(13, 181, 12),
QT_MOC_LITERAL(14, 194, 11),
QT_MOC_LITERAL(15, 206, 14)
    },
    "TestQuaZip\0getFileList_data\0\0getFileList\0"
    "add_data\0add\0setFileNameCodec_data\0"
    "setFileNameCodec\0setDataDescriptorWritingEnabled\0"
    "testQIODeviceAPI\0setZipName\0setIoDevice\0"
    "setCommentCodec\0setAutoClose\0saveFileBug\0"
    "testSequential\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestQuaZip[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08,
       3,    0,   85,    2, 0x08,
       4,    0,   86,    2, 0x08,
       5,    0,   87,    2, 0x08,
       6,    0,   88,    2, 0x08,
       7,    0,   89,    2, 0x08,
       8,    0,   90,    2, 0x08,
       9,    0,   91,    2, 0x08,
      10,    0,   92,    2, 0x08,
      11,    0,   93,    2, 0x08,
      12,    0,   94,    2, 0x08,
      13,    0,   95,    2, 0x08,
      14,    0,   96,    2, 0x08,
      15,    0,   97,    2, 0x08,

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
    QMetaType::Void,

       0        // eod
};

void TestQuaZip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestQuaZip *_t = static_cast<TestQuaZip *>(_o);
        switch (_id) {
        case 0: _t->getFileList_data(); break;
        case 1: _t->getFileList(); break;
        case 2: _t->add_data(); break;
        case 3: _t->add(); break;
        case 4: _t->setFileNameCodec_data(); break;
        case 5: _t->setFileNameCodec(); break;
        case 6: _t->setDataDescriptorWritingEnabled(); break;
        case 7: _t->testQIODeviceAPI(); break;
        case 8: _t->setZipName(); break;
        case 9: _t->setIoDevice(); break;
        case 10: _t->setCommentCodec(); break;
        case 11: _t->setAutoClose(); break;
        case 12: _t->saveFileBug(); break;
        case 13: _t->testSequential(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestQuaZip::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_TestQuaZip.data,
      qt_meta_data_TestQuaZip,  qt_static_metacall, 0, 0}
};


const QMetaObject *TestQuaZip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestQuaZip::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_TestQuaZip.stringdata))
        return static_cast<void*>(const_cast< TestQuaZip*>(this));
    return QObject::qt_metacast(_clname);
}

int TestQuaZip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
