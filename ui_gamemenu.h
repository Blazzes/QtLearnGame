/********************************************************************************
** Form generated from reading UI file 'gamemenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMENU_H
#define UI_GAMEMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameMenu
{
public:
    QPushButton *playB;
    QPushButton *exitB;

    void setupUi(QDialog *GameMenu)
    {
        if (GameMenu->objectName().isEmpty())
            GameMenu->setObjectName(QString::fromUtf8("GameMenu"));
        GameMenu->resize(799, 558);
        playB = new QPushButton(GameMenu);
        playB->setObjectName(QString::fromUtf8("playB"));
        playB->setGeometry(QRect(20, 200, 91, 41));
        exitB = new QPushButton(GameMenu);
        exitB->setObjectName(QString::fromUtf8("exitB"));
        exitB->setGeometry(QRect(20, 250, 91, 41));

        retranslateUi(GameMenu);

        QMetaObject::connectSlotsByName(GameMenu);
    } // setupUi

    void retranslateUi(QDialog *GameMenu)
    {
        GameMenu->setWindowTitle(QCoreApplication::translate("GameMenu", "Dialog", nullptr));
        playB->setText(QCoreApplication::translate("GameMenu", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        exitB->setText(QCoreApplication::translate("GameMenu", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameMenu: public Ui_GameMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMENU_H
