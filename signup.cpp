#include "signup.h"
#include "ui_signup.h"

SignUp::SignUp(UserAccount *account, UserTcpConnect *server, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUp),
    account(account),
    server(server)
{
    ui->setupUi(this);
    connect(ui->backMenu, &QPushButton::clicked, [&]{
        close();
    });
    connect(ui->regB, &QPushButton::clicked, [&]{ // &Servie, sendAccountToServer()

        if(service.isLogin(ui->nameText->text()) &&
           service.isPassword(ui->passwordText->text()) &&
           service.isMail(ui->mailText->text()) &&
           ui->passwordText->text() == ui->passwordSText->text())
        {
            account = new UserAccount(ui->nameText->text(), ui->passwordText->text(), ui->mailText->text());
            QJsonObject type = {{"type", 1}};
            server->sendToServer(service.addFieldJsonObj(account->getUserAccountFromJsonObject(), type));
            QJsonObject answer = server->resiveFromServer();
            if(answer["answer"].toInt() == 1)
            {
                done(1);
                close();
            }
            else
            {
                done(0);
                close();
            }
        }
        else
            QMessageBox::warning(this, "Ошибка", "Введенены неверные данные!");
    });
}

SignUp::~SignUp()
{
    delete ui;
}
