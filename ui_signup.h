/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGroupBox *login_3;
    QPushButton *regB;
    QPushButton *backMenu;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *mail;
    QLineEdit *mailText;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *nameLabel;
    QLineEdit *nameText;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *password;
    QLineEdit *passwordText;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *paswordS;
    QLineEdit *passwordSText;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->resize(823, 568);
        verticalLayout_2 = new QVBoxLayout(SignUp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        login_3 = new QGroupBox(SignUp);
        login_3->setObjectName(QString::fromUtf8("login_3"));
        login_3->setMinimumSize(QSize(380, 240));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font.setPointSize(16);
        login_3->setFont(font);
        regB = new QPushButton(login_3);
        regB->setObjectName(QString::fromUtf8("regB"));
        regB->setGeometry(QRect(190, 210, 181, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font1.setPointSize(11);
        regB->setFont(font1);
        backMenu = new QPushButton(login_3);
        backMenu->setObjectName(QString::fromUtf8("backMenu"));
        backMenu->setGeometry(QRect(10, 210, 171, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font2.setPointSize(12);
        backMenu->setFont(font2);
        layoutWidget_4 = new QWidget(login_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 80, 361, 36));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        mail = new QLabel(layoutWidget_4);
        mail->setObjectName(QString::fromUtf8("mail"));

        horizontalLayout_7->addWidget(mail);

        mailText = new QLineEdit(layoutWidget_4);
        mailText->setObjectName(QString::fromUtf8("mailText"));

        horizontalLayout_7->addWidget(mailText);

        layoutWidget = new QWidget(login_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 361, 36));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        horizontalLayout_5->addWidget(nameLabel);

        nameText = new QLineEdit(layoutWidget);
        nameText->setObjectName(QString::fromUtf8("nameText"));

        horizontalLayout_5->addWidget(nameText);

        layoutWidget_3 = new QWidget(login_3);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 120, 361, 36));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        password = new QLabel(layoutWidget_3);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout_6->addWidget(password);

        passwordText = new QLineEdit(layoutWidget_3);
        passwordText->setObjectName(QString::fromUtf8("passwordText"));

        horizontalLayout_6->addWidget(passwordText);

        layoutWidget_5 = new QWidget(login_3);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 160, 361, 36));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        paswordS = new QLabel(layoutWidget_5);
        paswordS->setObjectName(QString::fromUtf8("paswordS"));

        horizontalLayout_8->addWidget(paswordS);

        passwordSText = new QLineEdit(layoutWidget_5);
        passwordSText->setObjectName(QString::fromUtf8("passwordSText"));

        horizontalLayout_8->addWidget(passwordSText);


        horizontalLayout->addWidget(login_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        login_3->setTitle(QCoreApplication::translate("SignUp", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        regB->setText(QCoreApplication::translate("SignUp", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
        backMenu->setText(QCoreApplication::translate("SignUp", "\320\235\320\260\320\267\320\260\320\264 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        mail->setText(QCoreApplication::translate("SignUp", "mail adress ", nullptr));
        mailText->setText(QString());
        nameLabel->setText(QCoreApplication::translate("SignUp", "Login          ", nullptr));
        nameText->setText(QString());
        password->setText(QCoreApplication::translate("SignUp", "Password    ", nullptr));
        passwordText->setText(QString());
        paswordS->setText(QCoreApplication::translate("SignUp", "Password x2", nullptr));
        passwordSText->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
