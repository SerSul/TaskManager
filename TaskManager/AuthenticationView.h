#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TaskManage.h"

class AuthenticationView : public QMainWindow
{
    Q_OBJECT

public:
    AuthenticationView(QWidget *parent = nullptr);
    ~AuthenticationView();

private:
    QPushButton* loginButton;
    QLineEdit* usernameInput;
    QLineEdit* passwordInput;

signals:
    void loginButtonClicked(const QString& username, const QString& password);

private slots:
    void handleLoginButtonClicked();
private:
    Ui::TaskManageClass ui;
};