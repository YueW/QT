/****************************************************************************
** Meta object code from reading C++ file 'composition.h'
**
** Created: Tue Nov 8 17:45:23 2011
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "composition.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'composition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CompositionCanvas[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      25,   19,   18,   18, 0x0a,
      50,   19,   18,   18, 0x0a,
      80,   19,   18,   18, 0x0a,
     120,  109,   18,   18, 0x0a,
     152,  146,   18,   18, 0x0a,
     170,  146,   18,   18, 0x0a,
     186,  146,   18,   18, 0x0a,
     204,  146,   18,   18, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CompositionCanvas[] = {
    "CompositionCanvas\0\0event\0"
    "paintEvent(QPaintEvent*)\0"
    "mousePressEvent(QMouseEvent*)\0"
    "mouseMoveEvent(QMouseEvent*)\0currentRow\0"
    "compositeModeChanged(int)\0value\0"
    "alphaChanged(int)\0redChanged(int)\0"
    "greenChanged(int)\0blueChanged(int)\0"
};

const QMetaObject CompositionCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CompositionCanvas,
      qt_meta_data_CompositionCanvas, 0 }
};

const QMetaObject *CompositionCanvas::metaObject() const
{
    return &staticMetaObject;
}

void *CompositionCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompositionCanvas))
        return static_cast<void*>(const_cast< CompositionCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int CompositionCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: compositeModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: alphaChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: redChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: greenChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: blueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
static const uint qt_meta_data_CompositionWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_CompositionWidget[] = {
    "CompositionWidget\0"
};

const QMetaObject CompositionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CompositionWidget,
      qt_meta_data_CompositionWidget, 0 }
};

const QMetaObject *CompositionWidget::metaObject() const
{
    return &staticMetaObject;
}

void *CompositionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CompositionWidget))
        return static_cast<void*>(const_cast< CompositionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int CompositionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
