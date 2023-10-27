// authenticationpresenter.h
#pragma once

#include <QObject>
#include "authenticationmodel.h"
#include "AuthenticationView.h"

class AuthenticationPresenter : public QObject {
    Q_OBJECT
public:
    AuthenticationPresenter(AuthenticationModel* model, AuthenticationView* view, QObject* parent = nullptr);
    void handleAuthenticationSuccess(const QString& token);
    void handleAuthenticationFailed();

public slots:
    void handleAuthenticationAttempt(const QString& username, const QString& password);
    void handleAuthenticationResult(bool success);


signals:
    void ChangeVisibillity(const QString token);
private:

    AuthenticationModel* model;
    AuthenticationView* view;
};

