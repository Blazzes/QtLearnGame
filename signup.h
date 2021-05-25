#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "useraccount.h"
#include "service.h"
#include "usertcpconnect.h"
#include <QMessageBox>

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(UserAccount *account, UserTcpConnect *server, QWidget *parent = nullptr);
    ~SignUp();

private:
    Ui::SignUp *ui;
    UserAccount *account;
    Service service;
    UserTcpConnect *server;
};

#endif // SIGNUP_H
