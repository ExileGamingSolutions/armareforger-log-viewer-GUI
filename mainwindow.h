#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QFileDialog>
#include <string>

#include "scan.hpp"
#include "parseSort.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::string fileOpen();
    //null init
    scan _Scan = scan("");
    parseSort _parseSort;

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
