/********************************************************************************
** Form generated from reading UI file 'QTTEST.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTEST_H
#define UI_QTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTTESTClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTTESTClass)
    {
        if (QTTESTClass->objectName().isEmpty())
            QTTESTClass->setObjectName(QString::fromUtf8("QTTESTClass"));
        QTTESTClass->resize(600, 472);
        centralWidget = new QWidget(QTTESTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        horizontalLayout->addWidget(listWidget);

        QTTESTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTTESTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        QTTESTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTTESTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QTTESTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTTESTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QTTESTClass->setStatusBar(statusBar);

        retranslateUi(QTTESTClass);

        QMetaObject::connectSlotsByName(QTTESTClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTTESTClass)
    {
        QTTESTClass->setWindowTitle(QCoreApplication::translate("QTTESTClass", "QTTEST", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QTTESTClass: public Ui_QTTESTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTEST_H
