#include <iostream>
#include <QPushButton>

#include "MainWindow.h"

#include <QApplication>
int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    MainWindow window;
    window.show();

    std::cout << "Hello 2 !" << std::endl;
    return app.exec();
}