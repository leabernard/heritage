/********************************************************************************
** Form generated from reading UI file 'de.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DE_H
#define UI_DE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deClass
{
public:
    QWidget *centralWidget;
    QLabel *totaldestour;
    QPushButton *remiszero;
    QPushButton *scoretotal;
    QLabel *score;
    QPushButton *tirageDe;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *deClass)
    {
        if (deClass->objectName().isEmpty())
            deClass->setObjectName(QString::fromUtf8("deClass"));
        deClass->resize(600, 400);
        centralWidget = new QWidget(deClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        totaldestour = new QLabel(centralWidget);
        totaldestour->setObjectName(QString::fromUtf8("totaldestour"));
        totaldestour->setGeometry(QRect(200, 290, 91, 41));
        remiszero = new QPushButton(centralWidget);
        remiszero->setObjectName(QString::fromUtf8("remiszero"));
        remiszero->setGeometry(QRect(300, 220, 131, 31));
        scoretotal = new QPushButton(centralWidget);
        scoretotal->setObjectName(QString::fromUtf8("scoretotal"));
        scoretotal->setGeometry(QRect(70, 220, 75, 23));
        score = new QLabel(centralWidget);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(180, 70, 141, 101));
        tirageDe = new QPushButton(centralWidget);
        tirageDe->setObjectName(QString::fromUtf8("tirageDe"));
        tirageDe->setGeometry(QRect(350, 50, 81, 31));
        deClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(deClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        deClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(deClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        deClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(deClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        deClass->setStatusBar(statusBar);

        retranslateUi(deClass);
        QObject::connect(tirageDe, SIGNAL(clicked()), deClass, SLOT(tirage()));
        QObject::connect(tirageDe, SIGNAL(clicked()), deClass, SLOT(score()));
        QObject::connect(remiszero, SIGNAL(clicked()), deClass, SLOT(zero()));
        QObject::connect(scoretotal, SIGNAL(clicked()), deClass, SLOT(total()));

        QMetaObject::connectSlotsByName(deClass);
    } // setupUi

    void retranslateUi(QMainWindow *deClass)
    {
        deClass->setWindowTitle(QCoreApplication::translate("deClass", "de", nullptr));
        totaldestour->setText(QString());
        remiszero->setText(QCoreApplication::translate("deClass", "remise \303\240 z\303\251ro du score", nullptr));
        scoretotal->setText(QCoreApplication::translate("deClass", "score total", nullptr));
        score->setText(QString());
        tirageDe->setText(QCoreApplication::translate("deClass", "tirer le d\303\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deClass: public Ui_deClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DE_H
