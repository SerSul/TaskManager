#include "AuthenticationView.h"
#include <QtWidgets/QApplication>

#include <iostream>
#include "MainController.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    MainController mainController;

    mainController.startApplication();

    return a.exec();
}
