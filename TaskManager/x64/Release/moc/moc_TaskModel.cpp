/****************************************************************************
** Meta object code from reading C++ file 'TaskModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../TaskModel.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TaskModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTaskModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTaskModelENDCLASS = QtMocHelpers::stringData(
    "TaskModel",
    "taskCreated",
    "",
    "task",
    "taskDeleted",
    "taskUpdated",
    "tasksFetched",
    "tasks",
    "createTask",
    "header",
    "description",
    "priority",
    "token",
    "deleteTask",
    "taskId",
    "updateTask",
    "getTasks",
    "handleNetworkReply",
    "QNetworkReply*",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTaskModelENDCLASS_t {
    uint offsetsAndSizes[40];
    char stringdata0[10];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[12];
    char stringdata5[12];
    char stringdata6[13];
    char stringdata7[6];
    char stringdata8[11];
    char stringdata9[7];
    char stringdata10[12];
    char stringdata11[9];
    char stringdata12[6];
    char stringdata13[11];
    char stringdata14[7];
    char stringdata15[11];
    char stringdata16[9];
    char stringdata17[19];
    char stringdata18[15];
    char stringdata19[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTaskModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTaskModelENDCLASS_t qt_meta_stringdata_CLASSTaskModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "TaskModel"
        QT_MOC_LITERAL(10, 11),  // "taskCreated"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 4),  // "task"
        QT_MOC_LITERAL(28, 11),  // "taskDeleted"
        QT_MOC_LITERAL(40, 11),  // "taskUpdated"
        QT_MOC_LITERAL(52, 12),  // "tasksFetched"
        QT_MOC_LITERAL(65, 5),  // "tasks"
        QT_MOC_LITERAL(71, 10),  // "createTask"
        QT_MOC_LITERAL(82, 6),  // "header"
        QT_MOC_LITERAL(89, 11),  // "description"
        QT_MOC_LITERAL(101, 8),  // "priority"
        QT_MOC_LITERAL(110, 5),  // "token"
        QT_MOC_LITERAL(116, 10),  // "deleteTask"
        QT_MOC_LITERAL(127, 6),  // "taskId"
        QT_MOC_LITERAL(134, 10),  // "updateTask"
        QT_MOC_LITERAL(145, 8),  // "getTasks"
        QT_MOC_LITERAL(154, 18),  // "handleNetworkReply"
        QT_MOC_LITERAL(173, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(188, 5)   // "reply"
    },
    "TaskModel",
    "taskCreated",
    "",
    "task",
    "taskDeleted",
    "taskUpdated",
    "tasksFetched",
    "tasks",
    "createTask",
    "header",
    "description",
    "priority",
    "token",
    "deleteTask",
    "taskId",
    "updateTask",
    "getTasks",
    "handleNetworkReply",
    "QNetworkReply*",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTaskModelENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    0,   71,    2, 0x06,    3 /* Public */,
       5,    1,   72,    2, 0x06,    4 /* Public */,
       6,    1,   75,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    4,   78,    2, 0x0a,    8 /* Public */,
      13,    2,   87,    2, 0x0a,   13 /* Public */,
      15,    5,   92,    2, 0x0a,   16 /* Public */,
      16,    1,  103,    2, 0x0a,   22 /* Public */,
      17,    1,  106,    2, 0x08,   24 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QJsonDocument,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    3,
    QMetaType::Void, QMetaType::QJsonDocument,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::QString,   14,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 18,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject TaskModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTaskModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTaskModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTaskModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TaskModel, std::true_type>,
        // method 'taskCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'taskDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'taskUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'tasksFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'createTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getTasks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleNetworkReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void TaskModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TaskModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->taskCreated((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 1: _t->taskDeleted(); break;
        case 2: _t->taskUpdated((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 3: _t->tasksFetched((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 4: _t->createTask((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 5: _t->deleteTask((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->updateTask((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5]))); break;
        case 7: _t->getTasks((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->handleNetworkReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TaskModel::*)(const QJsonDocument & );
            if (_t _q_method = &TaskModel::taskCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TaskModel::*)();
            if (_t _q_method = &TaskModel::taskDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TaskModel::*)(const QJsonDocument & );
            if (_t _q_method = &TaskModel::taskUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TaskModel::*)(const QJsonDocument & );
            if (_t _q_method = &TaskModel::tasksFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *TaskModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TaskModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTaskModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TaskModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void TaskModel::taskCreated(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TaskModel::taskDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TaskModel::taskUpdated(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TaskModel::tasksFetched(const QJsonDocument & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
