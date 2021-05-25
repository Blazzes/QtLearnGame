#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    server = new UserTcpConnect("127.0.0.1", 5555);

    connect(ui->LogIn, &QPushButton::clicked, [&]{
        SignIn signInWindow;
        signInWindow.exec();
    });
    connect(ui->SignUp, &QPushButton::clicked, [&]{
        SignUp signUpWindow(account, server);
        if(signUpWindow.exec()){
            menu.show();
            close();
        }
        else
        {
            QMessageBox::warning(this, "Ошибка", "Ошибка регистрации попробуйте позже");
        }
    });
    connect(ui->exitButton, &QPushButton::clicked, [&]{
        close();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

