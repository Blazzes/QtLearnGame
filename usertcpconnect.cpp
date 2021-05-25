#include "usertcpconnect.h"

UserTcpConnect::UserTcpConnect(QString Ip, int Port) : server_ip(Ip), server_port(Port)
{
    soket = new QTcpSocket(this);
    soket->connectToHost(Ip, Port);

    connect(soket, &QTcpSocket::readyRead, this, &UserTcpConnect::readyRead, Qt::DirectConnection);
    if(soket->isOpen())
        qDebug() << "Connecting...";
}

QString UserTcpConnect::getServerIp() const
{
    return server_ip;
}

int UserTcpConnect::getServerPort() const
{
    return server_port;
}

void UserTcpConnect::readyRead()
{
    QMutexLocker ml(&mut); //lock
    QByteArray data = soket->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    answer = doc.object();
    qDebug() <<"invoke slot UserTcpConnect::readyRead: "<< answer;
}

void UserTcpConnect::sendToServer(QJsonDocument json)
{
    QByteArray data = json.toJson();
    soket->write(data);
    soket->waitForBytesWritten();
}

void UserTcpConnect::sendToServer(QJsonObject json)
{
    QByteArray data = QJsonDocument(json).toJson();
    soket->write(data);
    soket->waitForBytesWritten();
}

QJsonObject UserTcpConnect::resiveFromServer()
{
    if(soket->waitForReadyRead(5000))
    {
        QMutexLocker ml(&mut);// убрать мьютексы, перед уборкой продебажить
        qDebug() <<"invoke method UserTcpConnect::resiveFromServer: "<< answer;
        return answer;
    }
    else
    {
        return QJsonObject({{"error", "1"}});
    }
}

void UserTcpConnect::errorSoket()
{

}
