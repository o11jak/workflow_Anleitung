/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leditName;
    QPushButton *buttonAdd;
    QListWidget *listNames;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *buttonOpen;
    QPushButton *buttonSave;
    QPushButton *buttonSort;
    QPushButton *buttonClear;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(337, 376);
        verticalLayout = new QVBoxLayout(MainWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leditName = new QLineEdit(MainWindow);
        leditName->setObjectName(QString::fromUtf8("leditName"));

        horizontalLayout->addWidget(leditName);

        buttonAdd = new QPushButton(MainWindow);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));

        horizontalLayout->addWidget(buttonAdd);


        verticalLayout->addLayout(horizontalLayout);

        listNames = new QListWidget(MainWindow);
        new QListWidgetItem(listNames);
        new QListWidgetItem(listNames);
        listNames->setObjectName(QString::fromUtf8("listNames"));

        verticalLayout->addWidget(listNames);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonOpen = new QPushButton(MainWindow);
        buttonOpen->setObjectName(QString::fromUtf8("buttonOpen"));

        horizontalLayout_2->addWidget(buttonOpen);

        buttonSave = new QPushButton(MainWindow);
        buttonSave->setObjectName(QString::fromUtf8("buttonSave"));

        horizontalLayout_2->addWidget(buttonSave);

        buttonSort = new QPushButton(MainWindow);
        buttonSort->setObjectName(QString::fromUtf8("buttonSort"));

        horizontalLayout_2->addWidget(buttonSort);

        buttonClear = new QPushButton(MainWindow);
        buttonClear->setObjectName(QString::fromUtf8("buttonClear"));

        horizontalLayout_2->addWidget(buttonClear);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        leditName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        buttonAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));

        const bool __sortingEnabled = listNames->isSortingEnabled();
        listNames->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listNames->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Anton", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listNames->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Lisa", nullptr));
        listNames->setSortingEnabled(__sortingEnabled);

        buttonOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        buttonSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        buttonSort->setText(QCoreApplication::translate("MainWindow", "Sort", nullptr));
        buttonClear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
