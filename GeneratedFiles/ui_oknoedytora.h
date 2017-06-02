/********************************************************************************
** Form generated from reading UI file 'oknoedytora.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKNOEDYTORA_H
#define UI_OKNOEDYTORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OknoEdytora
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *producent;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *system_operacyjny;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QLabel *wlaczanie_label;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *zapisz;
    QPushButton *wczytaj;
    QPushButton *wlacz;
    QPushButton *wylacz;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *lista_app;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *nazwa_app;
    QLineEdit *dev_app;
    QLineEdit *kategoria_app;
    QLineEdit *wersja_app;
    QLineEdit *pamiec_app;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *dodaj_app;
    QPushButton *usun_app;

    void setupUi(QDialog *OknoEdytora)
    {
        if (OknoEdytora->objectName().isEmpty())
            OknoEdytora->setObjectName(QStringLiteral("OknoEdytora"));
        OknoEdytora->resize(961, 600);
        gridLayout = new QGridLayout(OknoEdytora);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(OknoEdytora);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        producent = new QLineEdit(OknoEdytora);
        producent->setObjectName(QStringLiteral("producent"));
        producent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(producent);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_6 = new QLabel(OknoEdytora);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_3->addWidget(label_6);

        system_operacyjny = new QLineEdit(OknoEdytora);
        system_operacyjny->setObjectName(QStringLiteral("system_operacyjny"));

        horizontalLayout_3->addWidget(system_operacyjny);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_10 = new QLabel(OknoEdytora);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);

        lineEdit_3 = new QLineEdit(OknoEdytora);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_8 = new QLabel(OknoEdytora);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        lineEdit_4 = new QLineEdit(OknoEdytora);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(OknoEdytora);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        lineEdit_5 = new QLineEdit(OknoEdytora);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        wlaczanie_label = new QLabel(OknoEdytora);
        wlaczanie_label->setObjectName(QStringLiteral("wlaczanie_label"));
        wlaczanie_label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(wlaczanie_label);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        zapisz = new QPushButton(OknoEdytora);
        zapisz->setObjectName(QStringLiteral("zapisz"));

        horizontalLayout_6->addWidget(zapisz);

        wczytaj = new QPushButton(OknoEdytora);
        wczytaj->setObjectName(QStringLiteral("wczytaj"));

        horizontalLayout_6->addWidget(wczytaj);

        wlacz = new QPushButton(OknoEdytora);
        wlacz->setObjectName(QStringLiteral("wlacz"));

        horizontalLayout_6->addWidget(wlacz);

        wylacz = new QPushButton(OknoEdytora);
        wylacz->setObjectName(QStringLiteral("wylacz"));

        horizontalLayout_6->addWidget(wylacz);


        verticalLayout_3->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OknoEdytora);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lista_app = new QListWidget(OknoEdytora);
        lista_app->setObjectName(QStringLiteral("lista_app"));

        verticalLayout->addWidget(lista_app);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        nazwa_app = new QLineEdit(OknoEdytora);
        nazwa_app->setObjectName(QStringLiteral("nazwa_app"));

        horizontalLayout_8->addWidget(nazwa_app);

        dev_app = new QLineEdit(OknoEdytora);
        dev_app->setObjectName(QStringLiteral("dev_app"));

        horizontalLayout_8->addWidget(dev_app);

        kategoria_app = new QLineEdit(OknoEdytora);
        kategoria_app->setObjectName(QStringLiteral("kategoria_app"));

        horizontalLayout_8->addWidget(kategoria_app);

        wersja_app = new QLineEdit(OknoEdytora);
        wersja_app->setObjectName(QStringLiteral("wersja_app"));

        horizontalLayout_8->addWidget(wersja_app);

        pamiec_app = new QLineEdit(OknoEdytora);
        pamiec_app->setObjectName(QStringLiteral("pamiec_app"));

        horizontalLayout_8->addWidget(pamiec_app);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        dodaj_app = new QPushButton(OknoEdytora);
        dodaj_app->setObjectName(QStringLiteral("dodaj_app"));

        horizontalLayout_7->addWidget(dodaj_app);

        usun_app = new QPushButton(OknoEdytora);
        usun_app->setObjectName(QStringLiteral("usun_app"));

        horizontalLayout_7->addWidget(usun_app);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_4->addLayout(verticalLayout);


        gridLayout->addLayout(verticalLayout_4, 0, 1, 1, 1);


        retranslateUi(OknoEdytora);
        QObject::connect(dodaj_app, SIGNAL(clicked()), OknoEdytora, SLOT(dodajAplikacje()));
        QObject::connect(usun_app, SIGNAL(clicked()), OknoEdytora, SLOT(usunAplikacje()));
        QObject::connect(zapisz, SIGNAL(clicked()), OknoEdytora, SLOT(zapisz()));
        QObject::connect(wczytaj, SIGNAL(clicked()), OknoEdytora, SLOT(wczytaj()));
        QObject::connect(wlacz, SIGNAL(clicked()), OknoEdytora, SLOT(wlacz()));

        QMetaObject::connectSlotsByName(OknoEdytora);
    } // setupUi

    void retranslateUi(QDialog *OknoEdytora)
    {
        OknoEdytora->setWindowTitle(QApplication::translate("OknoEdytora", "OknoEdytora", Q_NULLPTR));
        label_4->setText(QApplication::translate("OknoEdytora", "Producent", Q_NULLPTR));
        label_6->setText(QApplication::translate("OknoEdytora", "Mobilny system operacyjny", Q_NULLPTR));
        label_10->setText(QApplication::translate("OknoEdytora", "System operacyjny", Q_NULLPTR));
        label_8->setText(QApplication::translate("OknoEdytora", "Cena", Q_NULLPTR));
        label_3->setText(QApplication::translate("OknoEdytora", "Waga", Q_NULLPTR));
        wlaczanie_label->setText(QApplication::translate("OknoEdytora", "W\305\202\304\205czony?", Q_NULLPTR));
        zapisz->setText(QApplication::translate("OknoEdytora", "Zapisz", Q_NULLPTR));
        wczytaj->setText(QApplication::translate("OknoEdytora", "Wczytaj", Q_NULLPTR));
        wlacz->setText(QApplication::translate("OknoEdytora", "W\305\202\304\205cz", Q_NULLPTR));
        wylacz->setText(QApplication::translate("OknoEdytora", "Wy\305\202\304\205cz", Q_NULLPTR));
        label->setText(QApplication::translate("OknoEdytora", "Zainstalowane Aplikacje", Q_NULLPTR));
        nazwa_app->setText(QApplication::translate("OknoEdytora", "Nazwa", Q_NULLPTR));
        dev_app->setText(QApplication::translate("OknoEdytora", "Deweloper", Q_NULLPTR));
        kategoria_app->setText(QApplication::translate("OknoEdytora", "Kategoria", Q_NULLPTR));
        wersja_app->setText(QApplication::translate("OknoEdytora", "Wersja", Q_NULLPTR));
        pamiec_app->setText(QApplication::translate("OknoEdytora", "Pami\304\231\304\207 [B]", Q_NULLPTR));
        dodaj_app->setText(QApplication::translate("OknoEdytora", "Dodaj", Q_NULLPTR));
        usun_app->setText(QApplication::translate("OknoEdytora", "Usu\305\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OknoEdytora: public Ui_OknoEdytora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKNOEDYTORA_H
