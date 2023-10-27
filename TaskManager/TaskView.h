#pragma once

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTableView>
#include <QtConcurrent/QtConcurrent>
#include <QStandardItemModel>
#include "ui_menu.h"

//таймер, который активируется при первом изменении, ждущий 5 секунд для отправки запроса, при этом если изменение произошло во время таймера, то он сбрасывается до 5 секунд done
//


class TaskView : public QMainWindow {
    Q_OBJECT

public:
    TaskView(QWidget* parent = nullptr) : QMainWindow(parent) {
        ui.setupUi(this);
        setupUI();
        createModel();
        connectSignalsAndSlots();

        dataTable->setModel(model);

        timer = new QTimer(this);
        timer->setSingleShot(true);
        connect(timer, &QTimer::timeout, this, &TaskView::sendUpdateRequest);
        firstDataChange = true;
        connect(model, &QStandardItemModel::dataChanged, this, &TaskView::handleDataChanged);
    }

public slots:
    void displayTask(int id, const QString& header, const QString& description, const QString& priority) {
        int row = model->rowCount();
        model->insertRow(row);
        model->setData(model->index(row, 0), id);
        model->setData(model->index(row, 1), priority);
        model->setData(model->index(row, 2), header);
        model->setData(model->index(row, 3), description);

        // Заблокируйте редактирование поля ID
        QModelIndex index = model->index(row, 0);
        QStandardItem* item = model->itemFromIndex(index);
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);

        // Начните отслеживать изменения данных после первого изменения
        if (firstDataChange) {
            firstDataChange = false;
        }
    }

private slots:
    void sendUpdateRequest() {
        qDebug() << "Request for update sent";
        emit requestUpdate();
    }

    void handleDataChanged(const QModelIndex& topLeft, const QModelIndex& bottomRight) {
        Q_UNUSED(topLeft);
        Q_UNUSED(bottomRight);

        // Проверьте, были ли изменения данных
        if (!firstDataChange) {
            timer->stop();
            timer->start(5000); // 5000 миллисекунд (5 секунд)
        }
    }

signals:
    void requestUpdate();
    void requestAllTasks();

private:
    void setupUI() {
        dataTable = new QTableView(this);

        QVBoxLayout* layout = new QVBoxLayout;
        layout->addWidget(dataTable);
        layout->addWidget(ui.pushButton);

        QWidget* centralWidget = new QWidget(this);
        centralWidget->setLayout(layout);
        setCentralWidget(centralWidget);
    }

    void showEvent(QShowEvent* event) {
        QMainWindow::showEvent(event);
        emit requestAllTasks();
    }

    void createModel() {
        model = new QStandardItemModel(this);
        model->setColumnCount(4);
        model->setHeaderData(0, Qt::Horizontal, "ID");
        model->setHeaderData(1, Qt::Horizontal, "Priority");
        model->setHeaderData(2, Qt::Horizontal, "Header");
        model->setHeaderData(3, Qt::Horizontal, "Description");
    }

    void connectSignalsAndSlots() {
        // Подключите сигналы и слоты при необходимости
    }

private:
    Ui::MainWindow ui;
    QTableView* dataTable;
    QStandardItemModel* model;
    QTimer* timer;
    bool firstDataChange;
};
