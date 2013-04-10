/****************************************************************************
** Meta object code from reading C++ file 'mditextedit.h'
**
** Created: Tue Nov 8 17:54:47 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mditextedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mditextedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CMDITextEdit[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      34,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CMDITextEdit[] = {
    "CMDITextEdit\0\0updateRecentFiels()\0"
    "counted(int)\0doModified()\0"
};

const QMetaObject CMDITextEdit::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_CMDITextEdit,
      qt_meta_data_CMDITextEdit, 0 }
};

const QMetaObject *CMDITextEdit::metaObject() const
{
    return &staticMetaObject;
}

void *CMDITextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CMDITextEdit))
        return static_cast<void*>(const_cast< CMDITextEdit*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int CMDITextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateRecentFiels(); break;
        case 1: counted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: doModified(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void CMDITextEdit::updateRecentFiels()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void CMDITextEdit::counted(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
