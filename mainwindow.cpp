#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
   ui->setupUi(this);
   connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::fileOpen);
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::string MainWindow::fileOpen(){
    std::string _UnsafeStr = QFileDialog::getOpenFileName(nullptr,"File Open","C:/",QObject::tr("Text files (*.txt);;All files (*.*)") ).toStdString();
    std:: basic_string<char> safeStr;
    /// This just formats the PATH / to //
    for(int i = 0; _UnsafeStr.length()> i; i++){
        if(_UnsafeStr[i]=='/'){
            safeStr.push_back('/');
            safeStr.push_back('/');

        }else{
            safeStr.push_back(_UnsafeStr[i]);

        }
    }
    _Scan = scan(safeStr);
    std::cout << safeStr;
    return safeStr;
}
