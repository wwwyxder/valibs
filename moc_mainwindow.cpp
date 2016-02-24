/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../valibs1.0/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata[355];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 10),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 16),
QT_MOC_LITERAL(4, 40, 18),
QT_MOC_LITERAL(5, 59, 18),
QT_MOC_LITERAL(6, 78, 16),
QT_MOC_LITERAL(7, 95, 17),
QT_MOC_LITERAL(8, 113, 19),
QT_MOC_LITERAL(9, 133, 17),
QT_MOC_LITERAL(10, 151, 17),
QT_MOC_LITERAL(11, 169, 15),
QT_MOC_LITERAL(12, 185, 18),
QT_MOC_LITERAL(13, 204, 16),
QT_MOC_LITERAL(14, 221, 13),
QT_MOC_LITERAL(15, 235, 14),
QT_MOC_LITERAL(16, 250, 10),
QT_MOC_LITERAL(17, 261, 16),
QT_MOC_LITERAL(18, 278, 14),
QT_MOC_LITERAL(19, 293, 12),
QT_MOC_LITERAL(20, 306, 9),
QT_MOC_LITERAL(21, 316, 12),
QT_MOC_LITERAL(22, 329, 14),
QT_MOC_LITERAL(23, 344, 9)
    },
    "MainWindow\0onTimerOut\0\0onBrowseRefClick\0"
    "onBrowseRead1Click\0onBrowseRead2Click\0"
    "onBrowseSNPClick\0onBuildIndexClick\0"
    "onShowAndHideDetail\0readProcessStdout\0"
    "readProcessStderr\0processFinished\0"
    "manualInputToggled\0pairedEndToggled\0"
    "onOptionClick\0onMappingClick\0onTaskStop\0"
    "onOpenOutPutFile\0onFastaToggled\0"
    "onClearClick\0onObserve\0showRCDialog\0"
    "showHelpDialog\0showAbout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x0a,
       3,    0,  125,    2, 0x0a,
       4,    0,  126,    2, 0x0a,
       5,    0,  127,    2, 0x0a,
       6,    0,  128,    2, 0x0a,
       7,    0,  129,    2, 0x0a,
       8,    0,  130,    2, 0x0a,
       9,    0,  131,    2, 0x0a,
      10,    0,  132,    2, 0x0a,
      11,    1,  133,    2, 0x0a,
      12,    1,  136,    2, 0x0a,
      13,    1,  139,    2, 0x0a,
      14,    0,  142,    2, 0x0a,
      15,    0,  143,    2, 0x0a,
      16,    0,  144,    2, 0x0a,
      17,    0,  145,    2, 0x0a,
      18,    1,  146,    2, 0x0a,
      19,    0,  149,    2, 0x0a,
      20,    0,  150,    2, 0x0a,
      21,    0,  151,    2, 0x0a,
      22,    0,  152,    2, 0x0a,
      23,    0,  153,    2, 0x0a,

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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->onTimerOut(); break;
        case 1: _t->onBrowseRefClick(); break;
        case 2: _t->onBrowseRead1Click(); break;
        case 3: _t->onBrowseRead2Click(); break;
        case 4: _t->onBrowseSNPClick(); break;
        case 5: _t->onBuildIndexClick(); break;
        case 6: _t->onShowAndHideDetail(); break;
        case 7: _t->readProcessStdout(); break;
        case 8: _t->readProcessStderr(); break;
        case 9: _t->processFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->manualInputToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->pairedEndToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onOptionClick(); break;
        case 13: _t->onMappingClick(); break;
        case 14: _t->onTaskStop(); break;
        case 15: _t->onOpenOutPutFile(); break;
        case 16: _t->onFastaToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onClearClick(); break;
        case 18: _t->onObserve(); break;
        case 19: _t->showRCDialog(); break;
        case 20: _t->showHelpDialog(); break;
        case 21: _t->showAbout(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
