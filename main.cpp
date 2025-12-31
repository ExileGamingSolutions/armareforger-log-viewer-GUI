#include "mainwindow.h"


#include <QApplication>

int main(int a, char *b[]){
    QApplication app(a,b);
    MainWindow window;
    window.show();
    return app.exec();

}
