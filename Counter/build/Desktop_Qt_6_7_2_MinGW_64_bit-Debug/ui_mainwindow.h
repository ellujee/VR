/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *lisaaNappi;
    QPushButton *resetNappi;
    QLineEdit *numeroNaytto;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(353, 204);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lisaaNappi = new QPushButton(centralwidget);
        lisaaNappi->setObjectName("lisaaNappi");
        lisaaNappi->setGeometry(QRect(30, 20, 93, 29));
        resetNappi = new QPushButton(centralwidget);
        resetNappi->setObjectName("resetNappi");
        resetNappi->setGeometry(QRect(30, 70, 93, 29));
        numeroNaytto = new QLineEdit(centralwidget);
        numeroNaytto->setObjectName("numeroNaytto");
        numeroNaytto->setGeometry(QRect(140, 50, 113, 26));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lisaaNappi->setText(QCoreApplication::translate("MainWindow", "Count", nullptr));
        resetNappi->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        numeroNaytto->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
