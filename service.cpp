#include "service.h"

Service::Service()
{

}

bool Service::isRexString(QString regular, QString inString)
{
    QRegularExpression rex(regular);
    return rex.match(inString).hasMatch();
}

bool Service::isLogin(QString inString)
{
    QRegularExpression nameRegexp("^[A-Za-z]{1}+([A-Za-z0-9-]{1,18})+([A-Za-z0-9]{1})$");
    return nameRegexp.match(inString).hasMatch();
}

bool Service::isPassword(QString inString)
{
    QRegularExpression passwordRegexp("[0-9a-zA-Z!@#$%^&*]{6,}");
    return passwordRegexp.match(inString).hasMatch();
}

bool Service::isMail(QString inString)
{
    QRegularExpression emailRegexp(".*@?");
    return emailRegexp.match(inString).hasMatch();
}

QJsonObject Service::addFieldJsonObj(QJsonObject inJsonObj, QJsonObject addField)
{
    for (QString i : addField.keys()) {
        inJsonObj.insert(i, addField[i]);
    }
    return inJsonObj;
}



