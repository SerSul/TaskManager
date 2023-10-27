#include "TaskModel.h"

TaskModel::TaskModel(QObject* parent)
    : QObject(parent), networkManager(new QNetworkAccessManager(this))
{
    connect(networkManager, &QNetworkAccessManager::finished, this, &TaskModel::handleNetworkReply);
}

void TaskModel::createTask(const QString& header, const QString& description, int priority, const QString& token) {
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    QUrl url("http://localhost:8080/tasks/createTask");

    QNetworkRequest request(url);
    request.setRawHeader("Authorization", ("Bearer " + token).toUtf8());
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject taskData;
    taskData["header"] = header;
    taskData["description"] = description;
    taskData["priority"] = priority;

    QJsonDocument jsonDoc(taskData);
    QByteArray postData = jsonDoc.toJson();

    QNetworkReply* reply = manager->post(request, postData);

    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QString responseString = QString::fromUtf8(responseData);
            qDebug() << "Успешный ответ: " << responseString;
        }
        else {
            qDebug() << "Ошибка: " << reply->errorString();
        }

        reply->deleteLater();
        });
}

void TaskModel::deleteTask(int taskId, const QString& token) {
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    QUrl url("http://localhost:8080/tasks/deleteTask/" + QString::number(taskId));

    QNetworkRequest request(url);
    request.setRawHeader("Authorization", ("Bearer " + token).toUtf8());

    QNetworkReply* reply = manager->deleteResource(request);

    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            qDebug() << "Задача успешно удалена";
        }
        else {
            qDebug() << "Ошибка: " << reply->errorString();
        }

        reply->deleteLater();
        });
}

void TaskModel::updateTask(int taskId, const QString& header, const QString& description, int priority, const QString& token) {
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    QUrl url("http://localhost:8080/tasks/updateTask/" + QString::number(taskId));

    QNetworkRequest request(url);
    request.setRawHeader("Authorization", ("Bearer " + token).toUtf8());
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject taskData;
    taskData["header"] = header;
    taskData["description"] = description;
    taskData["priority"] = priority;

    QJsonDocument jsonDoc(taskData);
    QByteArray postData = jsonDoc.toJson();

    QNetworkReply* reply = manager->post(request, postData);

    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QString responseString = QString::fromUtf8(responseData);
            qDebug() << "Задача успешно обновлена: " << responseString;
        }
        else {
            qDebug() << "Ошибка: " << reply->errorString();
        }

        reply->deleteLater();
        });
}

void TaskModel::getTasks(const QString& token) {
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    QUrl url("http://localhost:8080/tasks/getTasks");

    QNetworkRequest request(url);
    request.setRawHeader("Authorization", ("Bearer " + token).toUtf8());

    QNetworkReply* reply = manager->get(request);

    connect(reply, &QNetworkReply::finished, this, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QByteArray responseData = reply->readAll();
            QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
            emit tasksFetched(jsonDoc);
        }
        else {
            qDebug() << "Ошибка: " << reply->errorString();
        }

        reply->deleteLater();
        });
}

void TaskModel::handleNetworkReply(QNetworkReply* reply) {
    //todo пропарсить ответы
}
