/********************************************************************************
** Form generated from reading UI file 'uilogindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UILOGINDIALOG_H
#define UI_UILOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "src/fend/uicom/uicomboline.h"
#include "src/fend/uicom/uipushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_UiLoginDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelLoginName;
    UiComboLine *lineLoginName;
    QSpacerItem *verticalSpacer;
    QLabel *labelSecretId;
    QLineEdit *lineSecretId;
    QSpacerItem *verticalSpacer_3;
    QLabel *labelSecretKey;
    QLineEdit *lineSecretKey;
    QSpacerItem *verticalSpacer_4;
    QLabel *labelRemark;
    QLineEdit *lineRemark;
    QCheckBox *checkSaveSection;
    UiPushButton *btnLogin;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QWidget *UiLoginDialog)
    {
        if (UiLoginDialog->objectName().isEmpty())
            UiLoginDialog->setObjectName(QString::fromUtf8("UiLoginDialog"));
        UiLoginDialog->resize(375, 429);
        UiLoginDialog->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";\n"
"color: rgb(85, 170, 255);"));
        verticalLayout = new QVBoxLayout(UiLoginDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, -1, 30, 20);
        labelLoginName = new QLabel(UiLoginDialog);
        labelLoginName->setObjectName(QString::fromUtf8("labelLoginName"));

        verticalLayout->addWidget(labelLoginName);

        lineLoginName = new UiComboLine(UiLoginDialog);
        lineLoginName->setObjectName(QString::fromUtf8("lineLoginName"));

        verticalLayout->addWidget(lineLoginName);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        labelSecretId = new QLabel(UiLoginDialog);
        labelSecretId->setObjectName(QString::fromUtf8("labelSecretId"));

        verticalLayout->addWidget(labelSecretId);

        lineSecretId = new QLineEdit(UiLoginDialog);
        lineSecretId->setObjectName(QString::fromUtf8("lineSecretId"));
        lineSecretId->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(lineSecretId);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        labelSecretKey = new QLabel(UiLoginDialog);
        labelSecretKey->setObjectName(QString::fromUtf8("labelSecretKey"));

        verticalLayout->addWidget(labelSecretKey);

        lineSecretKey = new QLineEdit(UiLoginDialog);
        lineSecretKey->setObjectName(QString::fromUtf8("lineSecretKey"));
        lineSecretKey->setMinimumSize(QSize(0, 0));
        lineSecretKey->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineSecretKey);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        labelRemark = new QLabel(UiLoginDialog);
        labelRemark->setObjectName(QString::fromUtf8("labelRemark"));

        verticalLayout->addWidget(labelRemark);

        lineRemark = new QLineEdit(UiLoginDialog);
        lineRemark->setObjectName(QString::fromUtf8("lineRemark"));
        lineRemark->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(lineRemark);

        checkSaveSection = new QCheckBox(UiLoginDialog);
        checkSaveSection->setObjectName(QString::fromUtf8("checkSaveSection"));

        verticalLayout->addWidget(checkSaveSection);

        btnLogin = new UiPushButton(UiLoginDialog);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));
        btnLogin->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(btnLogin);

        verticalSpacer_6 = new QSpacerItem(20, 22, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

#if QT_CONFIG(shortcut)
        labelSecretId->setBuddy(lineSecretId);
        labelSecretKey->setBuddy(lineSecretKey);
#endif // QT_CONFIG(shortcut)

        retranslateUi(UiLoginDialog);

        QMetaObject::connectSlotsByName(UiLoginDialog);
    } // setupUi

    void retranslateUi(QWidget *UiLoginDialog)
    {
        UiLoginDialog->setWindowTitle(QCoreApplication::translate("UiLoginDialog", "\347\231\273\345\275\225", nullptr));
        labelLoginName->setText(QCoreApplication::translate("UiLoginDialog", "\347\231\273\345\275\225\345\220\215", nullptr));
        labelSecretId->setText(QCoreApplication::translate("UiLoginDialog", "Sectet&Id", nullptr));
        labelSecretKey->setText(QCoreApplication::translate("UiLoginDialog", "Sectet&Key", nullptr));
        labelRemark->setText(QCoreApplication::translate("UiLoginDialog", "\345\244\207\346\263\250", nullptr));
        checkSaveSection->setText(QCoreApplication::translate("UiLoginDialog", "\350\256\260\344\275\217\344\274\232\350\257\235", nullptr));
        btnLogin->setText(QCoreApplication::translate("UiLoginDialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UiLoginDialog: public Ui_UiLoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UILOGINDIALOG_H
