/********************************************************************************
** Form generated from reading UI file 'TaskManager.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_H
#define UI_TASKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManagerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TaskManagerClass)
    {
        if (TaskManagerClass->objectName().isEmpty())
            TaskManagerClass->setObjectName("TaskManagerClass");
        TaskManagerClass->resize(600, 400);
        menuBar = new QMenuBar(TaskManagerClass);
        menuBar->setObjectName("menuBar");
        TaskManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManagerClass);
        mainToolBar->setObjectName("mainToolBar");
        TaskManagerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TaskManagerClass);
        centralWidget->setObjectName("centralWidget");
        TaskManagerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TaskManagerClass);
        statusBar->setObjectName("statusBar");
        TaskManagerClass->setStatusBar(statusBar);

        retranslateUi(TaskManagerClass);

        QMetaObject::connectSlotsByName(TaskManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *TaskManagerClass)
    {
        TaskManagerClass->setWindowTitle(QCoreApplication::translate("TaskManagerClass", "TaskManager", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManagerClass: public Ui_TaskManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_H
