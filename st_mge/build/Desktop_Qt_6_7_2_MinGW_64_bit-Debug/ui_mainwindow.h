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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QPushButton *smExit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLineEdit *searchEdit;
    QPushButton *search;
    QPushButton *addStudent;
    QPushButton *changeStudent;
    QPushButton *deleteStudent;
    QPushButton *flash;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 800);
        MainWindow->setMinimumSize(QSize(1000, 800));
        MainWindow->setMaximumSize(QSize(1000, 800));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget(background-color: #001871;);"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        smExit = new QPushButton(widget);
        smExit->setObjectName("smExit");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font2.setPointSize(14);
        smExit->setFont(font2);
        smExit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(79, 79, 79);"));

        gridLayout->addWidget(smExit, 0, 3, 1, 1);


        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        searchEdit = new QLineEdit(page_2);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(50, -1, 231, 41));
        searchEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(109, 109, 109);"));
        search = new QPushButton(page_2);
        search->setObjectName("search");
        search->setGeometry(QRect(300, 0, 91, 41));
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        addStudent = new QPushButton(page_2);
        addStudent->setObjectName("addStudent");
        addStudent->setGeometry(QRect(430, 0, 91, 41));
        addStudent->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        changeStudent = new QPushButton(page_2);
        changeStudent->setObjectName("changeStudent");
        changeStudent->setGeometry(QRect(560, 0, 91, 41));
        changeStudent->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        deleteStudent = new QPushButton(page_2);
        deleteStudent->setObjectName("deleteStudent");
        deleteStudent->setGeometry(QRect(690, 0, 101, 41));
        deleteStudent->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        flash = new QPushButton(page_2);
        flash->setObjectName("flash");
        flash->setGeometry(QRect(830, 0, 101, 41));
        flash->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        tableView = new QTableView(page_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 40, 930, 620));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 117, 117);"));
        tableView->horizontalHeader()->setMinimumSectionSize(20);
        tableView->horizontalHeader()->setDefaultSectionSize(152);
        stackedWidget->addWidget(page_2);

        gridLayout_2->addWidget(stackedWidget, 1, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        smExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        addStudent->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        changeStudent->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        deleteStudent->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        flash->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
