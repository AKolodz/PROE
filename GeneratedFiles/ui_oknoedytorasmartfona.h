/********************************************************************************
** Form generated from reading UI file 'oknoedytorasmartfona.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOEDYTORASMARTFONA_H
#define UI_OKNOEDYTORASMARTFONA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_OknoEdytoraSmartfona
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *OknoEdytoraSmartfona)
    {
        if (OknoEdytoraSmartfona->objectName().isEmpty())
            OknoEdytoraSmartfona->setObjectName(QStringLiteral("OknoEdytoraSmartfona"));
        OknoEdytoraSmartfona->resize(400, 300);
        pushButton = new QPushButton(OknoEdytoraSmartfona);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 120, 93, 28));

        retranslateUi(OknoEdytoraSmartfona);

        QMetaObject::connectSlotsByName(OknoEdytoraSmartfona);
    } // setupUi

    void retranslateUi(QDialog *OknoEdytoraSmartfona)
    {
        OknoEdytoraSmartfona->setWindowTitle(QApplication::translate("OknoEdytoraSmartfona", "OknoEdytoraSmartfona", Q_NULLPTR));
        pushButton->setText(QApplication::translate("OknoEdytoraSmartfona", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OknoEdytoraSmartfona: public Ui_OknoEdytoraSmartfona {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOEDYTORASMARTFONA_H
