/********************************************************************************
** Form generated from reading UI file 'TaskManage.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGE_H
#define UI_TASKMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManageClass
{
public:
    QWidget* centralWidget;
    QPushButton* loginButton;
    QLineEdit* passwordInput;
    QLineEdit* usernameInput;
    QMenuBar* menuBar;
    QToolBar* mainToolBar;
    QStatusBar* statusBar;

    void setupUi(QMainWindow* TaskManageClass)
    {
        if (TaskManageClass->objectName().isEmpty())
            TaskManageClass->setObjectName("TaskManageClass");
        TaskManageClass->resize(739, 601);
        centralWidget = new QWidget(TaskManageClass);
        centralWidget->setObjectName("centralWidget");

        // ќформление кнопки входа
        loginButton = new QPushButton(centralWidget);
        loginButton->setObjectName("loginButton");
        loginButton->setText("Login"); 
        loginButton->setGeometry(QRect(260, 330, 75, 24));
        loginButton->setStyleSheet("QPushButton { background-color: #0074cc; color: white; border: 1px solid #0074cc; border-radius: 3px; }"
            "QPushButton:pressed { background-color: #004f99; }");

        // ќформление пол€ дл€ парол€
        passwordInput = new QLineEdit(centralWidget);
        passwordInput->setObjectName("passwordInput");
        passwordInput->setGeometry(QRect(250, 290, 113, 22));
        passwordInput->setPlaceholderText("Password"); 
        passwordInput->setStyleSheet("border: 1px solid #ccc; border-radius: 3px; padding: 2px;");

        // ќформление пол€ дл€ имени пользовател€
        usernameInput = new QLineEdit(centralWidget);
        usernameInput->setObjectName("usernameInput");
        usernameInput->setGeometry(QRect(250, 250, 113, 22));
        usernameInput->setPlaceholderText("Username");
        usernameInput->setStyleSheet("border: 1px solid #ccc; border-radius: 3px; padding: 2px;");

        TaskManageClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TaskManageClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 739, 22));
        TaskManageClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TaskManageClass);
        mainToolBar->setObjectName("mainToolBar");
        TaskManageClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TaskManageClass);
        statusBar->setObjectName("statusBar");
        TaskManageClass->setStatusBar(statusBar);

        retranslateUi(TaskManageClass);

        QMetaObject::connectSlotsByName(TaskManageClass);
    } // setupUi

    void retranslateUi(QMainWindow* TaskManageClass)
    {
        TaskManageClass->setWindowTitle("TaskManage");
    } 
};

namespace Ui {
    class TaskManageClass: public Ui_TaskManageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGE_H
