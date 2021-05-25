#include "useraccount.h"

UserAccount::UserAccount(QString login, QString password, QString email)
{
    this->login = login;
    this->password = password;
    this->email = email;
}



QString UserAccount::getLogin() const
{
    return login;
}

QString UserAccount::getPassword() const
{
    return password;
}

QString UserAccount::getEmail() const
{
    return email;
}


QJsonDocument UserAccount::getUserAccountFromJsonDocument() const
{
    return QJsonDocument(getUserAccountFromJsonObject());
}

QJsonObject UserAccount::getUserAccountFromJsonObject() const
{
    QJsonObject obj{{"login", userAccountData.login}, {"password", userAccountData.password}, {"mail", userAccountData.email}};
    return obj;
}

