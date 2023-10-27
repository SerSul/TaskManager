/****************************************************************************
** Meta object code from reading C++ file 'TaskView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TaskView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSTaskViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTaskViewENDCLASS = QtMocHelpers::stringData(
    "TaskView",
    "requestUpdate",
    "",
    "requestAllTasks",
    "displayTask",
    "id",
    "header",
    "description",
    "priority",
    "sendUpdateRequest",
    "handleDataChanged",
    "QModelIndex",
    "topLeft",
    "bottomRight"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTaskViewENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[9];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[12];
    char stringdata5[3];
    char stringdata6[7];
    char stringdata7[12];
    char stringdata8[9];
    char stringdata9[18];
    char stringdata10[18];
    char stringdata11[12];
    char stringdata12[8];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTaskViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTaskViewENDCLASS_t qt_meta_stringdata_CLASSTaskViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "TaskView"
        QT_MOC_LITERAL(9, 13),  // "requestUpdate"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 15),  // "requestAllTasks"
        QT_MOC_LITERAL(40, 11),  // "displayTask"
        QT_MOC_LITERAL(52, 2),  // "id"
        QT_MOC_LITERAL(55, 6),  // "header"
        QT_MOC_LITERAL(62, 11),  // "description"
        QT_MOC_LITERAL(74, 8),  // "priority"
        QT_MOC_LITERAL(83, 17),  // "sendUpdateRequest"
        QT_MOC_LITERAL(101, 17),  // "handleDataChanged"
        QT_MOC_LITERAL(119, 11),  // "QModelIndex"
        QT_MOC_LITERAL(131, 7),  // "topLeft"
        QT_MOC_LITERAL(139, 11)   // "bottomRight"
    },
    "TaskView",
    "requestUpdate",
    "",
    "requestAllTasks",
    "displayTask",
    "id",
    "header",
    "description",
    "priority",
    "sendUpdateRequest",
    "handleDataChanged",
    "QModelIndex",
    "topLeft",
    "bottomRight"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTaskViewENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    4,   46,    2, 0x0a,    3 /* Public */,
       9,    0,   55,    2, 0x08,    8 /* Private */,
      10,    2,   56,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject TaskView::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSTaskViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTaskViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTaskViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskView, std::true_type>,
        // method 'requestUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestAllTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'sendUpdateRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void TaskView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requestUpdate(); break;
        case 1: _t->requestAllTasks(); break;
        case 2: _t->displayTask((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 3: _t->sendUpdateRequest(); break;
        case 4: _t->handleDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskView::*)();
            if (_t _q_method = &TaskView::requestUpdate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TaskView::*)();
            if (_t _q_method = &TaskView::requestAllTasks; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *TaskView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTaskViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TaskView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TaskView::requestUpdate()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TaskView::requestAllTasks()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
