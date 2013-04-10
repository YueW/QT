/****************************************************************************
** Meta object code from reading C++ file 'layoutdlg.h'
**
** Created: Tue Nov 8 17:53:34 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "layoutdlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'layoutdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CLayoutDlg[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      30,   11,   11,   11, 0x08,
      45,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      92,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CLayoutDlg[] = {
    "CLayoutDlg\0\0doActConstraint()\0"
    "doActLPolicy()\0doActRPolicy()\0"
    "doActLStretch()\0doActRStretch()\0"
    "doPushBtnShow(bool)\0"
};

const QMetaObject CLayoutDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CLayoutDlg,
      qt_meta_data_CLayoutDlg, 0 }
};

const QMetaObject *CLayoutDlg::metaObject() const
{
    return &staticMetaObject;
}

void *CLayoutDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CLayoutDlg))
        return static_cast<void*>(const_cast< CLayoutDlg*>(this));
    if (!strcmp(_clname, "Ui_LayoutDlg"))
        return static_cast< Ui_LayoutDlg*>(const_cast< CLayoutDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CLayoutDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: doActConstraint(); break;
        case 1: doActLPolicy(); break;
        case 2: doActRPolicy(); break;
        case 3: doActLStretch(); break;
        case 4: doActRStretch(); break;
        case 5: doPushBtnShow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
