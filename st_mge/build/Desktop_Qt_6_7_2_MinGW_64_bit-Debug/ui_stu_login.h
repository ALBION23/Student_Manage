/********************************************************************************
** Form generated from reading UI file 'stu_login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STU_LOGIN_H
#define UI_STU_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stu_login
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *passwd;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *btexit;
    QPushButton *btlogin;
    QLabel *label_3;

    void setupUi(QWidget *stu_login)
    {
        if (stu_login->objectName().isEmpty())
            stu_login->setObjectName("stu_login");
        stu_login->resize(432, 240);
        stu_login->setMinimumSize(QSize(432, 240));
        stu_login->setMaximumSize(QSize(432, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picture/icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        stu_login->setWindowIcon(icon);
        gridLayout = new QGridLayout(stu_login);
        gridLayout->setObjectName("gridLayout");
        widget_2 = new QWidget(stu_login);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(420, 100));
        widget_2->setMaximumSize(QSize(420, 100));
        widget_2->setTabletTracking(false);
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 81, 22));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(14);
        label->setFont(font);
        username = new QLineEdit(widget_2);
        username->setObjectName("username");
        username->setGeometry(QRect(91, 10, 291, 22));
        QFont font1;
        font1.setPointSize(12);
        username->setFont(font1);
        username->setMaxLength(8);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 81, 22));
        label_2->setFont(font);
        passwd = new QLineEdit(widget_2);
        passwd->setObjectName("passwd");
        passwd->setGeometry(QRect(90, 40, 291, 21));
        passwd->setFont(font1);
        passwd->setMaxLength(8);
        passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(widget_2, 4, 0, 1, 2);

        widget = new QWidget(stu_login);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        btexit = new QPushButton(widget);
        btexit->setObjectName("btexit");

        gridLayout_2->addWidget(btexit, 0, 1, 1, 1);

        btlogin = new QPushButton(widget);
        btlogin->setObjectName("btlogin");

        gridLayout_2->addWidget(btlogin, 0, 0, 1, 1);


        gridLayout->addWidget(widget, 6, 0, 1, 2);

        label_3 = new QLabel(stu_login);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(432, 50));
        label_3->setMaximumSize(QSize(432, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font2.setPointSize(20);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setMargin(0);

        gridLayout->addWidget(label_3, 3, 0, 1, 2);


        retranslateUi(stu_login);

        QMetaObject::connectSlotsByName(stu_login);
    } // setupUi

    void retranslateUi(QWidget *stu_login)
    {
        stu_login->setWindowTitle(QCoreApplication::translate("stu_login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("stu_login", "\347\224\250\346\210\267\345\220\215", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("stu_login", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("stu_login", "\345\257\206  \347\240\201", nullptr));
        passwd->setPlaceholderText(QCoreApplication::translate("stu_login", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        btexit->setText(QCoreApplication::translate("stu_login", "\351\200\200\345\207\272", nullptr));
        btlogin->setText(QCoreApplication::translate("stu_login", "\347\231\273\345\275\225", nullptr));
        label_3->setText(QCoreApplication::translate("stu_login", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stu_login: public Ui_stu_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_LOGIN_H
