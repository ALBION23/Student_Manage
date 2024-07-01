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
#include <QtWidgets/QCheckBox>
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
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QTableWidget *tableWidget;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QPushButton *smExit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(660, 500);
        MainWindow->setMinimumSize(QSize(660, 500));
        MainWindow->setMaximumSize(QSize(660, 500));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget(background-color: #001871;);"));
        treeWidget = new QTreeWidget(centralwidget);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(0, 70, 201, 391));
        treeWidget->setStyleSheet(QString::fromUtf8("font: 14pt \"Microsoft YaHei UI\";\n"
"background-color: rgb(0, 255, 255);"));
        treeWidget->header()->setVisible(false);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(200, 70, 461, 391));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        tableWidget = new QTableWidget(page_2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(10, 40, 441, 341));
        tableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 117, 117);"));
        checkBox = new QCheckBox(page_2);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 10, 61, 21));
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 10, 151, 20));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(109, 109, 109);"));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 0, 51, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(280, 0, 51, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        pushButton_3 = new QPushButton(page_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(340, 0, 51, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        pushButton_4 = new QPushButton(page_2);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(400, 0, 51, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        stackedWidget->addWidget(page_2);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(6, 13, 551, 51));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

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

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 660, 17));
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
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\345\210\227", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        smExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
