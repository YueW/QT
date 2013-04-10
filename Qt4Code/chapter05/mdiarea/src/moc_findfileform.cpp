/****************************************************************************
** Meta object code from reading C++ file 'findfileform.h'
**
** Created: Tue Nov 8 17:54:44 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "findfileform.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findfileform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CFindFileForm[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      24,   14,   14,   14, 0x08,
      31,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CFindFileForm[] = {
    "CFindFileForm\0\0browse()\0find()\0stop()\0"
    "doTxtChange(QString)\0"
};

const QMetaObject CFindFileForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CFindFileForm,
      qt_meta_data_CFindFileForm, 0 }
};

const QMetaObject *CFindFileForm::metaObject() const
{
    return &staticMetaObject;
}

void *CFindFileForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CFindFileForm))
        return static_cast<void*>(const_cast< CFindFileForm*>(this));
    if (!strcmp(_clname, "Ui_FindFileForm"))
        return static_cast< Ui_FindFileForm*>(const_cast< CFindFileForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int CFindFileForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: browse(); break;
        case 1: find(); break;
        case 2: stop(); break;
        case 3: doTxtChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
