#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "signin.h"
#include "signup.h"
#include "useraccount.h"
#include "gamemenu.h"
#include "usertcpconnect.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    UserAccount *account = nullptr;
    GameMenu menu;
    UserTcpConnect *server = nullptr;
};
#endif // MAINWINDOW_H
