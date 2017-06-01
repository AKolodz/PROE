/********************************************************************************
** Form generated from reading UI file 'wyborurzadzen.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WYBORURZADZEN_H
#define UI_WYBORURZADZEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WyborUrzadzenClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *Komputer;
    QPushButton *Telefon;
    QPushButton *Smartfon;
    QPushButton *zamknij;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WyborUrzadzenClass)
    {
        if (WyborUrzadzenClass->objectName().isEmpty())
            WyborUrzadzenClass->setObjectName(QStringLiteral("WyborUrzadzenClass"));
        WyborUrzadzenClass->resize(512, 298);
        QFont font;
        font.setPointSize(10);
        WyborUrzadzenClass->setFont(font);
        centralWidget = new QWidget(WyborUrzadzenClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        Komputer = new QPushButton(centralWidget);
        Komputer->setObjectName(QStringLiteral("Komputer"));
        Komputer->setFont(font);

        verticalLayout->addWidget(Komputer);

        Telefon = new QPushButton(centralWidget);
        Telefon->setObjectName(QStringLiteral("Telefon"));
        Telefon->setFont(font);

        verticalLayout->addWidget(Telefon);

        Smartfon = new QPushButton(centralWidget);
        Smartfon->setObjectName(QStringLiteral("Smartfon"));
        Smartfon->setFont(font);

        verticalLayout->addWidget(Smartfon);

        zamknij = new QPushButton(centralWidget);
        zamknij->setObjectName(QStringLiteral("zamknij"));

        verticalLayout->addWidget(zamknij);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        WyborUrzadzenClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WyborUrzadzenClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 512, 26));
        WyborUrzadzenClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WyborUrzadzenClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WyborUrzadzenClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WyborUrzadzenClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WyborUrzadzenClass->setStatusBar(statusBar);

        retranslateUi(WyborUrzadzenClass);
        QObject::connect(zamknij, SIGNAL(clicked()), WyborUrzadzenClass, SLOT(zamknij()));

        QMetaObject::connectSlotsByName(WyborUrzadzenClass);
    } // setupUi

    void retranslateUi(QMainWindow *WyborUrzadzenClass)
    {
        WyborUrzadzenClass->setWindowTitle(QApplication::translate("WyborUrzadzenClass", "WyborUrzadzen", Q_NULLPTR));
        label->setText(QApplication::translate("WyborUrzadzenClass", "Wybierz urz\304\205dzenie do symulacji:", Q_NULLPTR));
        Komputer->setText(QApplication::translate("WyborUrzadzenClass", "Komputer", Q_NULLPTR));
        Telefon->setText(QApplication::translate("WyborUrzadzenClass", "Telefon", Q_NULLPTR));
        Smartfon->setText(QApplication::translate("WyborUrzadzenClass", "Smartfon", Q_NULLPTR));
        zamknij->setText(QApplication::translate("WyborUrzadzenClass", "Zamknij", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WyborUrzadzenClass: public Ui_WyborUrzadzenClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYBORURZADZEN_H
