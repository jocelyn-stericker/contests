/****************************************************************************
** Meta object code from reading C++ file 'CC.h'
**
** Created: Tue Jun 28 18:18:48 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CC/CC.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CC.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CategoricalCompleter[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CategoricalCompleter[] = {
    "CategoricalCompleter\0\0updateCurrentSuggestions()\0"
};

const QMetaObject CategoricalCompleter::staticMetaObject = {
    { &QCompleter::staticMetaObject, qt_meta_stringdata_CategoricalCompleter,
      qt_meta_data_CategoricalCompleter, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CategoricalCompleter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CategoricalCompleter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CategoricalCompleter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CategoricalCompleter))
        return static_cast<void*>(const_cast< CategoricalCompleter*>(this));
    return QCompleter::qt_metacast(_clname);
}

int CategoricalCompleter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCompleter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateCurrentSuggestions(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_CCLineEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CCLineEdit[] = {
    "CCLineEdit\0"
};

const QMetaObject CCLineEdit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_CCLineEdit,
      qt_meta_data_CCLineEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CCLineEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CCLineEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CCLineEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CCLineEdit))
        return static_cast<void*>(const_cast< CCLineEdit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int CCLineEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CCTableModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_CCTableModel[] = {
    "CCTableModel\0"
};

const QMetaObject CCTableModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_CCTableModel,
      qt_meta_data_CCTableModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CCTableModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CCTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CCTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CCTableModel))
        return static_cast<void*>(const_cast< CCTableModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int CCTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_CCTableView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      47,   33,   12,   12, 0x0a,
      87,   77,   12,   12, 0x0a,
     135,  123,   12,   12, 0x0a,
     173,  168,   12,   12, 0x2a,

       0        // eod
};

static const char qt_meta_stringdata_CCTableView[] = {
    "CCTableView\0\0updateSuggestions()\0"
    "columnHeaders\0setColumnHeaders(QStringList)\0"
    "completer\0setCompleter(CategoricalCompleter*)\0"
    "data,prefix\0setData(CompletionCase*,QString)\0"
    "data\0setData(CompletionCase*)\0"
};

const QMetaObject CCTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_CCTableView,
      qt_meta_data_CCTableView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CCTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CCTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CCTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CCTableView))
        return static_cast<void*>(const_cast< CCTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int CCTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: updateSuggestions(); break;
        case 1: setColumnHeaders((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: setCompleter((*reinterpret_cast< CategoricalCompleter*(*)>(_a[1]))); break;
        case 3: setData((*reinterpret_cast< CompletionCase*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: setData((*reinterpret_cast< CompletionCase*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
