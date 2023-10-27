// authenticationmodel.cpp
#include "authenticationmodel.h"
#include <QNetworkRequest>
#include <QNetworkReply>
#include <qjsonobject.h>
#include <qjsondocument.h>
AuthenticationModel::AuthenticationModel(QObject* parent) : QObject(parent) {

    networkManager = new QNetworkAccessManager(this);
}

void AuthenticationModel::authenticateUser(const QString& username, const QString& password) {
    QNetworkRequest request(QUrl("http://localhost:8080/api/auth/signin"));

    QJsonObject jsonObject;
    jsonObject["username"] = username;
    jsonObject["password"] = password;

    QJsonDocument jsonDoc(jsonObject);
    QByteArray requestData = jsonDoc.toJson();

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply* reply = networkManager->post(request, requestData);

    connect(reply, &QNetworkReply::finished, this, [this, reply]() {
        QByteArray response;
        QString token;
        if (reply->error() == QNetworkReply::NoError) {
            response = reply->readAll();

            QJsonDocument jsonResponse = QJsonDocument::fromJson(response);
            if (!jsonResponse.isNull()) {
                QJsonObject jsonObject = jsonResponse.object();

                token = jsonObject["accessToken"].toString();
            }

            reply->deleteLater();

            if (!token.isEmpty()) {
                emit authenticationSuccess_(token);
            }
            else {
                emit authenticationFailed_();
            }
        }
        else {
            // Обработка ошибки сети, например, отображение сообщения об ошибке
            emit authenticationFailed_();
        }
        });


}