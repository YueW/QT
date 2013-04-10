/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Nov 8 17:54:45 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x08,
      21,   12,   12,   12, 0x08,
      30,   12,   12,   12, 0x08,
      40,   12,   12,   12, 0x08,
      49,   12,   12,   12, 0x08,
      59,   12,   12,   12, 0x08,
      68,   12,   12,   12, 0x08,
      77,   12,   12,   12, 0x08,
      85,   12,   12,   12, 0x08,
      94,   12,   12,   12, 0x08,
     103,   12,   12,   12, 0x08,
     111,   12,   12,   12, 0x08,
     120,   12,   12,   12, 0x08,
     137,   12,   12,   12, 0x08,
     157,   12,   12,   12, 0x08,
     170,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMainWindow[] = {
    "CMainWindow\0\0doNew()\0doOpen()\0doClose()\0"
    "doSave()\0doASave()\0doQuit()\0doUndo()\0"
    "doCut()\0doCopy()\0doPast()\0doAll()\0"
    "doFind()\0openRecentFile()\0updateRecentFiles()\0"
    "updateMenu()\0showCount(int)\0"
};

const QMetaObject CMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CMainWindow,
      qt_meta_data_CMainWindow, 0 }
};

const QMetaObject *CMainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *CMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMainWindow))
        return static_cast<void*>(const_cast< CMainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< CMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doNew(); break;
        case 1: doOpen(); break;
        case 2: doClose(); break;
        case 3: doSave(); break;
        case 4: doASave(); break;
        case 5: doQuit(); break;
        case 6: doUndo(); break;
        case 7: doCut(); break;
        case 8: doCopy(); break;
        case 9: doPast(); break;
        case 10: doAll(); break;
        case 11: doFind(); break;
        case 12: openRecentFile(); break;
        case 13: updateRecentFiles(); break;
        case 14: updateMenu(); break;
        case 15: showCount((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
