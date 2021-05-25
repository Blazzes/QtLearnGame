#ifndef SERVICE_H
#define SERVICE_H

#include <QObject>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QJsonObject>

class Service : public QObject
{
    Q_OBJECT
public:
    Service();
    bool isRexString(QString regular, QString inString);
    bool isLogin(QString inString);
    bool isPassword(QString inString);
    bool isMail(QString inString);
    QJsonObject addFieldJsonObj(QJsonObject inJsonObj, QJsonObject addField);
};

#endif // SERVICE_H
