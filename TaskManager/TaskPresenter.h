#pragma once
#pragma once

#include <QObject>
#include "taskmodel.h"
#include "taskview.h"

class TaskPresenter : public QObject {
    Q_OBJECT
public:
    TaskPresenter(TaskModel* model, TaskView* view, QObject* parent = nullptr, const QString& token = QString())
        : QObject(parent), model(model), view(view), token(token) {

        //обработчики от View
        connect(view, &TaskView::requestAllTasks, this, &TaskPresenter::getTasks);

        //обработчики от Model
        connect(model, &TaskModel::tasksFetched, this, &TaskPresenter::onTasksFetched);

    }

public slots:
    void getTasks() {
        model->getTasks(token);
    }


private slots:
    void onTasksFetched(const QJsonDocument& jsonDoc) {
        QJsonArray jsonArray = jsonDoc.array();
        qDebug() << "Received JSON Array:" << jsonArray;

        // Перебираем каждый объект в массиве
        int row = 0;
        for (const QJsonValue& value : jsonArray) {
            if (value.isObject()) {
                QJsonObject taskObject = value.toObject();

                // Извлекаем поля из объекта
                int id = taskObject.value("id").toInt();
                QString description = taskObject.value("description").toString();
                QString header = taskObject.value("header").toString();
                QString priority = taskObject.value("priority").toString();

                view->displayTask(id, header, description, priority);

                row++; // Переходим к следующей строке
            }
        }
    }


private:
    TaskModel* model;
    TaskView* view;
    QString token;
    
};

/*
* 
AuthenticationPresenter::AuthenticationPresenter(AuthenticationModel* model, AuthenticationView* view, QObject* parent)
    : QObject(parent), model(model), view(view)
{
    connect(view, &AuthenticationView::loginButtonClicked, this, &AuthenticationPresenter::handleAuthenticationAttempt);
    connect(model, &AuthenticationModel::authenticationSuccess_, this, &AuthenticationPresenter::handleAuthenticationSuccess);
    connect(model, &AuthenticationModel::authenticationFailed_, this, &AuthenticationPresenter::handleAuthenticationFailed);
}

*/