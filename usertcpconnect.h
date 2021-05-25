#ifndef USERTCPCONNECT_H
#define USERTCPCONNECT_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QTcpSocket>
#include <QMutexLocker>

class UserTcpConnect : public QObject
{
    Q_OBJECT
public:
    UserTcpConnect(QString Ip, int Port);
    QString getServerIp() const;
    int getServerPort() const;

    void sendToServer(QJsonDocument json);
    void sendToServer(QJsonObject json);

    QJsonObject resiveFromServer();

private slots:
    void readyRead();
    void errorSoket();

private:
    QString server_ip;
    int server_port;
    QTcpSocket *soket;
    QJsonObject answer;
    QMutex mut;
};

#endif // USERTCPCONNECT_H
