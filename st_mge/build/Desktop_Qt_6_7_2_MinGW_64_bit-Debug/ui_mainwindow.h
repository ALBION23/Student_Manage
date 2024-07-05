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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *smExit;
    QWidget *widget_2;
    QLineEdit *searchEdit;
    QPushButton *addStudent;
    QPushButton *search;
    QPushButton *deleteStudent;
    QPushButton *returnsituation;
    QPushButton *flash;
    QPushButton *changemessage;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1100, 720);
        MainWindow->setMinimumSize(QSize(1100, 720));
        MainWindow->setMaximumSize(QSize(1100, 720));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/build/Desktop_Qt_6_7_2_MinGW_64_bit-Debug/picture/114287760_p0.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget(background-color: #001871;);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(6, 6, 1091, 81));
        widget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267")});
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 2);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 4, 1, 1);

        smExit = new QPushButton(widget);
        smExit->setObjectName("smExit");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223")});
        font2.setPointSize(14);
        smExit->setFont(font2);
        smExit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"background-color: rgb(79, 79, 79);"));

        gridLayout->addWidget(smExit, 0, 5, 1, 1);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(10, 70, 1081, 611));
        widget_2->setStyleSheet(QString::fromUtf8(""));
        searchEdit = new QLineEdit(widget_2);
        searchEdit->setObjectName("searchEdit");
        searchEdit->setGeometry(QRect(50, 10, 251, 41));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchEdit->sizePolicy().hasHeightForWidth());
        searchEdit->setSizePolicy(sizePolicy);
        searchEdit->setStyleSheet(QString::fromUtf8("background-color:rgb(109, 109, 109);"));
        addStudent = new QPushButton(widget_2);
        addStudent->setObjectName("addStudent");
        addStudent->setGeometry(QRect(450, 10, 91, 41));
        sizePolicy.setHeightForWidth(addStudent->sizePolicy().hasHeightForWidth());
        addStudent->setSizePolicy(sizePolicy);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font3.setPointSize(16);
        addStudent->setFont(font3);
        addStudent->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        search = new QPushButton(widget_2);
        search->setObjectName("search");
        search->setGeometry(QRect(320, 10, 91, 41));
        sizePolicy.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy);
        search->setFont(font3);
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        deleteStudent = new QPushButton(widget_2);
        deleteStudent->setObjectName("deleteStudent");
        deleteStudent->setGeometry(QRect(580, 10, 91, 41));
        sizePolicy.setHeightForWidth(deleteStudent->sizePolicy().hasHeightForWidth());
        deleteStudent->setSizePolicy(sizePolicy);
        deleteStudent->setFont(font3);
        deleteStudent->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        returnsituation = new QPushButton(widget_2);
        returnsituation->setObjectName("returnsituation");
        returnsituation->setGeometry(QRect(840, 10, 91, 41));
        sizePolicy.setHeightForWidth(returnsituation->sizePolicy().hasHeightForWidth());
        returnsituation->setSizePolicy(sizePolicy);
        returnsituation->setFont(font3);
        returnsituation->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        flash = new QPushButton(widget_2);
        flash->setObjectName("flash");
        flash->setGeometry(QRect(970, 10, 91, 41));
        sizePolicy.setHeightForWidth(flash->sizePolicy().hasHeightForWidth());
        flash->setSizePolicy(sizePolicy);
        flash->setFont(font3);
        flash->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        changemessage = new QPushButton(widget_2);
        changemessage->setObjectName("changemessage");
        changemessage->setGeometry(QRect(710, 10, 91, 41));
        changemessage->setFont(font3);
        changemessage->setStyleSheet(QString::fromUtf8("background-color: rgb(79, 79, 79);"));
        tableView = new QTableView(widget_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(10, 60, 1061, 551));
        tableView->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"background-color: rgb(117, 117, 117);"));
        tableView->horizontalHeader()->setMinimumSectionSize(20);
        tableView->horizontalHeader()->setDefaultSectionSize(152);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1100, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " \345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        smExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        addStudent->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        search->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        deleteStudent->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        returnsituation->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        flash->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        changemessage->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
