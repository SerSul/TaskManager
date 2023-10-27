#include "AuthenticationView.h"
#include <QString>

AuthenticationView::AuthenticationView(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    loginButton = findChild<QPushButton*>("loginButton");
    usernameInput = findChild<QLineEdit*>("usernameInput");
    passwordInput = findChild<QLineEdit*>("passwordInput");


    connect(loginButton, &QPushButton::clicked, this, &AuthenticationView::handleLoginButtonClicked);
}

AuthenticationView::~AuthenticationView()
{}


void AuthenticationView::handleLoginButtonClicked() {
    QString username = usernameInput->text();
    QString password = passwordInput->text();

    emit loginButtonClicked(username, password);
}
