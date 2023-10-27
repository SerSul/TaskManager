#pragma once

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>

class TaskModel : public QObject {
    Q_OBJECT
public:
    TaskModel(QObject* parent = nullptr);

public slots:
    void createTask(const QString& header, const QString& description, int priority, const QString& token);
    void deleteTask(int taskId, const QString& token);
    void updateTask(int taskId, const QString& header, const QString& description, int priority, const QString& token);
    void getTasks(const QString& token);

signals:
    void taskCreated(const QJsonDocument& task);
    void taskDeleted();
    
    void taskUpdated(const QJsonDocument& task);

    void tasksFetched(const QJsonDocument& tasks);

private slots:
    void handleNetworkReply(QNetworkReply* reply);

private:
    QNetworkAccessManager* networkManager;
};


