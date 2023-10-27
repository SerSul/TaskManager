// authenticationpresenter.cpp
#include "authenticationpresenter.h"
#include <QMessageBox>



AuthenticationPresenter::AuthenticationPresenter(AuthenticationModel* model, AuthenticationView* view, QObject* parent)
    : QObject(parent), model(model), view(view)
{
    connect(view, &AuthenticationView::loginButtonClicked, this, &AuthenticationPresenter::handleAuthenticationAttempt);
    connect(model, &AuthenticationModel::authenticationSuccess_, this, &AuthenticationPresenter::handleAuthenticationSuccess);
    connect(model, &AuthenticationModel::authenticationFailed_, this, &AuthenticationPresenter::handleAuthenticationFailed);
}


void AuthenticationPresenter::handleAuthenticationResult(bool success) {

}

void AuthenticationPresenter::handleAuthenticationAttempt(const QString& username, const QString& password) {
    model->authenticateUser(username, password);

}


void AuthenticationPresenter::handleAuthenticationSuccess(const QString& token) {

    ChangeVisibillity(token);
}

void AuthenticationPresenter::handleAuthenticationFailed() {

    QMessageBox messageBox;
    messageBox.setWindowTitle("Unauthorized");
    messageBox.setText(u8"Failed authentication. Please check your credentials.");
    messageBox.setIcon(QMessageBox::Critical);
    messageBox.setStandardButtons(QMessageBox::Ok);

    messageBox.exec();
}
