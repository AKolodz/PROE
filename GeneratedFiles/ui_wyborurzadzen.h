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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QVBoxLayout *verticalLayout_2;
    QListWidget *lista_urzadzen;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *Komputer;
    QPushButton *Telefon;
    QPushButton *Smartfon;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *edytuj;
    QPushButton *usun;
    QPushButton *zamknij;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *WyborUrzadzenClass)
    {
        if (WyborUrzadzenClass->objectName().isEmpty())
            WyborUrzadzenClass->setObjectName(QStringLiteral("WyborUrzadzenClass"));
        WyborUrzadzenClass->resize(518, 559);
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
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lista_urzadzen = new QListWidget(centralWidget);
        lista_urzadzen->setObjectName(QStringLiteral("lista_urzadzen"));

        verticalLayout_2->addWidget(lista_urzadzen);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Komputer = new QPushButton(centralWidget);
        Komputer->setObjectName(QStringLiteral("Komputer"));
        Komputer->setFont(font);

        horizontalLayout->addWidget(Komputer);

        Telefon = new QPushButton(centralWidget);
        Telefon->setObjectName(QStringLiteral("Telefon"));
        Telefon->setFont(font);

        horizontalLayout->addWidget(Telefon);

        Smartfon = new QPushButton(centralWidget);
        Smartfon->setObjectName(QStringLiteral("Smartfon"));
        Smartfon->setFont(font);

        horizontalLayout->addWidget(Smartfon);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        edytuj = new QPushButton(centralWidget);
        edytuj->setObjectName(QStringLiteral("edytuj"));

        horizontalLayout_2->addWidget(edytuj);

        usun = new QPushButton(centralWidget);
        usun->setObjectName(QStringLiteral("usun"));

        horizontalLayout_2->addWidget(usun);


        verticalLayout_2->addLayout(horizontalLayout_2);

        zamknij = new QPushButton(centralWidget);
        zamknij->setObjectName(QStringLiteral("zamknij"));

        verticalLayout_2->addWidget(zamknij);


        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        WyborUrzadzenClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(WyborUrzadzenClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 26));
        WyborUrzadzenClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(WyborUrzadzenClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        WyborUrzadzenClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(WyborUrzadzenClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        WyborUrzadzenClass->setStatusBar(statusBar);

        retranslateUi(WyborUrzadzenClass);
        QObject::connect(zamknij, SIGNAL(clicked()), WyborUrzadzenClass, SLOT(zamknij()));
        QObject::connect(edytuj, SIGNAL(clicked()), WyborUrzadzenClass, SLOT(otworzEdytor()));
        QObject::connect(usun, SIGNAL(clicked()), WyborUrzadzenClass, SLOT(usunUrzadzenie()));

        QMetaObject::connectSlotsByName(WyborUrzadzenClass);
    } // setupUi

    void retranslateUi(QMainWindow *WyborUrzadzenClass)
    {
        WyborUrzadzenClass->setWindowTitle(QApplication::translate("WyborUrzadzenClass", "WyborUrzadzen", Q_NULLPTR));
        label->setText(QApplication::translate("WyborUrzadzenClass", "Dodaj nowy:", Q_NULLPTR));
        Komputer->setText(QApplication::translate("WyborUrzadzenClass", "Komputer", Q_NULLPTR));
        Telefon->setText(QApplication::translate("WyborUrzadzenClass", "Telefon", Q_NULLPTR));
        Smartfon->setText(QApplication::translate("WyborUrzadzenClass", "Smartfon", Q_NULLPTR));
        edytuj->setText(QApplication::translate("WyborUrzadzenClass", "Edytuj", Q_NULLPTR));
        usun->setText(QApplication::translate("WyborUrzadzenClass", "Usu\305\204", Q_NULLPTR));
        zamknij->setText(QApplication::translate("WyborUrzadzenClass", "Zamknij", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WyborUrzadzenClass: public Ui_WyborUrzadzenClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WYBORURZADZEN_H
