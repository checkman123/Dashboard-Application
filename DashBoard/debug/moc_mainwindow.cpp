/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "setCurrentTime"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 12), // "setWorldTime"
QT_MOC_LITERAL(4, 40, 12), // "processImage"
QT_MOC_LITERAL(5, 53, 8), // "QPixmap*"
QT_MOC_LITERAL(6, 62, 18), // "processWeatherJson"
QT_MOC_LITERAL(7, 81, 12), // "QJsonObject*"
QT_MOC_LITERAL(8, 94, 4), // "json"
QT_MOC_LITERAL(9, 99, 15), // "setPhotoDisplay"
QT_MOC_LITERAL(10, 115, 17), // "setWeahterDisplay"
QT_MOC_LITERAL(11, 133, 7), // "weather"
QT_MOC_LITERAL(12, 141, 30), // "on_imageDownloadButton_clicked"
QT_MOC_LITERAL(13, 172, 36), // "on_worldComboBox_currentIndex..."
QT_MOC_LITERAL(14, 209, 5), // "index"
QT_MOC_LITERAL(15, 215, 34), // "on_actionOpen_To_Do_List_trig..."
QT_MOC_LITERAL(16, 250, 23) // "on_actionExit_triggered"

    },
    "MainWindow\0setCurrentTime\0\0setWorldTime\0"
    "processImage\0QPixmap*\0processWeatherJson\0"
    "QJsonObject*\0json\0setPhotoDisplay\0"
    "setWeahterDisplay\0weather\0"
    "on_imageDownloadButton_clicked\0"
    "on_worldComboBox_currentIndexChanged\0"
    "index\0on_actionOpen_To_Do_List_triggered\0"
    "on_actionExit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    1,   69,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
      12,    0,   76,    2, 0x08 /* Private */,
      13,    1,   77,    2, 0x08 /* Private */,
      15,    0,   80,    2, 0x08 /* Private */,
      16,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setCurrentTime(); break;
        case 1: _t->setWorldTime(); break;
        case 2: _t->processImage((*reinterpret_cast< QPixmap*(*)>(_a[1]))); break;
        case 3: _t->processWeatherJson((*reinterpret_cast< QJsonObject*(*)>(_a[1]))); break;
        case 4: _t->setPhotoDisplay(); break;
        case 5: _t->setWeahterDisplay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_imageDownloadButton_clicked(); break;
        case 7: _t->on_worldComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_actionOpen_To_Do_List_triggered(); break;
        case 9: _t->on_actionExit_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
