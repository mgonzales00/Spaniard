/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPrint;
    QAction *actionCreateNew;
    QAction *actionOpen;
    QAction *actionFindReplace;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionChangeFont;
    QAction *actionChangeTabDistance;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_View;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(false);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName("actionPrint");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Yusuke-Kamiyamane-Fugue-Printer.16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionPrint->setIcon(icon);
        actionCreateNew = new QAction(MainWindow);
        actionCreateNew->setObjectName("actionCreateNew");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Yusuke-Kamiyamane-Fugue-Blue-document-plus.16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionCreateNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Yusuke-Kamiyamane-Fugue-Blue-folder-open-document.16.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionOpen->setIcon(icon2);
        actionFindReplace = new QAction(MainWindow);
        actionFindReplace->setObjectName("actionFindReplace");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/magnifier.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionFindReplace->setIcon(icon3);
        actionFindReplace->setMenuRole(QAction::MenuRole::NoRole);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName("actionUndo");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/undo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionUndo->setIcon(icon4);
        actionUndo->setMenuRole(QAction::MenuRole::NoRole);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName("actionRedo");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/redo.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionRedo->setIcon(icon5);
        actionRedo->setMenuRole(QAction::MenuRole::NoRole);
        actionChangeFont = new QAction(MainWindow);
        actionChangeFont->setObjectName("actionChangeFont");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/edit-family.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionChangeFont->setIcon(icon6);
        actionChangeFont->setMenuRole(QAction::MenuRole::NoRole);
        actionChangeTabDistance = new QAction(MainWindow);
        actionChangeTabDistance->setObjectName("actionChangeTabDistance");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/change-tab-dist.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        actionChangeTabDistance->setIcon(icon7);
        actionChangeTabDistance->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName("menu_File");
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName("menu_Edit");
        menu_View = new QMenu(menubar);
        menu_View->setObjectName("menu_View");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menu_File->addAction(actionCreateNew);
        menu_File->addAction(actionOpen);
        menu_File->addAction(actionPrint);
        menu_Edit->addAction(actionUndo);
        menu_Edit->addAction(actionRedo);
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar->addSeparator();
        toolBar->addAction(actionCreateNew);
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionFindReplace);
        toolBar->addAction(actionChangeFont);
        toolBar->addAction(actionChangeTabDistance);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        actionCreateNew->setText(QCoreApplication::translate("MainWindow", "Create New", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionFindReplace->setText(QCoreApplication::translate("MainWindow", "Find", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionChangeFont->setText(QCoreApplication::translate("MainWindow", "Change Font", nullptr));
        actionChangeTabDistance->setText(QCoreApplication::translate("MainWindow", "ChangeTabDistance", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Edit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
