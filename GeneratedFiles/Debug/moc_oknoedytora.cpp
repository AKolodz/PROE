/****************************************************************************
** Meta object code from reading C++ file 'oknoedytora.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../oknoedytora.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oknoedytora.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OknoEdytora_t {
    QByteArrayData data[13];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OknoEdytora_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OknoEdytora_t qt_meta_stringdata_OknoEdytora = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OknoEdytora"
QT_MOC_LITERAL(1, 12, 13), // "uzupelnijDane"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "dodajAplikacje"
QT_MOC_LITERAL(4, 42, 22), // "wyswietlListeAplikacji"
QT_MOC_LITERAL(5, 65, 13), // "usunAplikacje"
QT_MOC_LITERAL(6, 79, 6), // "zapisz"
QT_MOC_LITERAL(7, 86, 7), // "wczytaj"
QT_MOC_LITERAL(8, 94, 5), // "wlacz"
QT_MOC_LITERAL(9, 100, 6), // "wylacz"
QT_MOC_LITERAL(10, 107, 10), // "dodajNumer"
QT_MOC_LITERAL(11, 118, 9), // "usunNumer"
QT_MOC_LITERAL(12, 128, 20) // "wyswietlListeNumerow"

    },
    "OknoEdytora\0uzupelnijDane\0\0dodajAplikacje\0"
    "wyswietlListeAplikacji\0usunAplikacje\0"
    "zapisz\0wczytaj\0wlacz\0wylacz\0dodajNumer\0"
    "usunNumer\0wyswietlListeNumerow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OknoEdytora[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

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

       0        // eod
};

void OknoEdytora::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OknoEdytora *_t = static_cast<OknoEdytora *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uzupelnijDane(); break;
        case 1: _t->dodajAplikacje(); break;
        case 2: _t->wyswietlListeAplikacji(); break;
        case 3: _t->usunAplikacje(); break;
        case 4: _t->zapisz(); break;
        case 5: _t->wczytaj(); break;
        case 6: _t->wlacz(); break;
        case 7: _t->wylacz(); break;
        case 8: _t->dodajNumer(); break;
        case 9: _t->usunNumer(); break;
        case 10: _t->wyswietlListeNumerow(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject OknoEdytora::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OknoEdytora.data,
      qt_meta_data_OknoEdytora,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OknoEdytora::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OknoEdytora::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OknoEdytora.stringdata0))
        return static_cast<void*>(const_cast< OknoEdytora*>(this));
    return QDialog::qt_metacast(_clname);
}

int OknoEdytora::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
