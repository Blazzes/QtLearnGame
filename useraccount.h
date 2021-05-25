#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>



class UserAccount : public QObject
{
    Q_OBJECT
public:
    UserAccount(QString login, QString password, QString email);

    QString getLogin() const;
    QString getPassword() const;
    QString getEmail() const;
    QJsonDocument getUserAccountFromJsonDocument() const;
    QJsonObject getUserAccountFromJsonObject() const;
private:
    QString login;
    QString password;
    QString email;
};

#endif // USERACCOUNT_H
