/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

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

class Ui_SignIn
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *pasEdit;
    QPushButton *Ent;
    QPushButton *pushButton_2;
    QPushButton *backMenuLog;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *logEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(768, 517);
        verticalLayout_2 = new QVBoxLayout(SignIn);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        groupBox = new QGroupBox(SignIn);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMinimumSize(QSize(370, 140));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 70, 361, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pasEdit = new QLineEdit(layoutWidget);
        pasEdit->setObjectName(QString::fromUtf8("pasEdit"));

        horizontalLayout_2->addWidget(pasEdit);

        Ent = new QPushButton(groupBox);
        Ent->setObjectName(QString::fromUtf8("Ent"));
        Ent->setGeometry(QRect(250, 110, 111, 21));
        QFont font1;
        font1.setPointSize(11);
        Ent->setFont(font1);
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 110, 111, 21));
        pushButton_2->setFont(font1);
        backMenuLog = new QPushButton(groupBox);
        backMenuLog->setObjectName(QString::fromUtf8("backMenuLog"));
        backMenuLog->setGeometry(QRect(130, 110, 111, 21));
        backMenuLog->setFont(font1);
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 30, 361, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        logEdit = new QLineEdit(layoutWidget_2);
        logEdit->setObjectName(QString::fromUtf8("logEdit"));

        horizontalLayout->addWidget(logEdit);


        horizontalLayout_3->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignIn", "\320\222\321\205\320\276\320\264 \320\262 \320\260\320\272\320\272\320\260\321\203\320\275\321\202", nullptr));
        label_2->setText(QCoreApplication::translate("SignIn", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        Ent->setText(QCoreApplication::translate("SignIn", "\320\222\321\205\320\276\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SignIn", "\320\227\320\260\320\261\321\213\320\273 \320\277\320\260\321\200\320\276\320\273\321\214?", nullptr));
        backMenuLog->setText(QCoreApplication::translate("SignIn", "\320\235\320\260\320\267\320\260\320\264 \320\262 \320\274\320\265\320\275\321\216", nullptr));
        label->setText(QCoreApplication::translate("SignIn", "\320\233\320\276\320\263\320\270\320\275  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
