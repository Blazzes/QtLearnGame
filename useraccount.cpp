#include "useraccount.h"

UserAccount::UserAccount(QString login, QString password, QString email)
{
    userAccountData.login = login;
    userAccountData.password = password;
    userAccountData.email = email;
}

UserAccount::UserAccount(UserData UserAccountData) : userAccountData(UserAccountData) {}

QString UserAccount::getLogin() const
{
    return userAccountData.login;
}

QString UserAccount::getPassword() const
{
    return userAccountData.password;
}

QString UserAccount::getEmail() const
{
    return userAccountData.email;
}

UserData UserAccount::getUsxerData() const
{
    return userAccountData;
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

