/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *number;
    QRadioButton *boy;
    QLineEdit *name;
    QLineEdit *pro;
    QLabel *label_6;
    QLineEdit *age;
    QLineEdit *class_2;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QRadioButton *gril;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_7;

    void setupUi(QWidget *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName("add");
        add->resize(590, 463);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picture/114287760_p0.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        add->setWindowIcon(icon);
        add->setWindowOpacity(1.000000000000000);
        widget = new QWidget(add);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 30, 371, 371));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        number = new QLineEdit(widget);
        number->setObjectName("number");
        number->setMaxLength(10);

        gridLayout->addWidget(number, 1, 2, 1, 3);

        boy = new QRadioButton(widget);
        boy->setObjectName("boy");
        boy->setFont(font);
        boy->setChecked(true);

        gridLayout->addWidget(boy, 2, 2, 1, 1);

        name = new QLineEdit(widget);
        name->setObjectName("name");
        name->setMaxLength(12);

        gridLayout->addWidget(name, 0, 2, 1, 3);

        pro = new QLineEdit(widget);
        pro->setObjectName("pro");
        pro->setMaxLength(15);

        gridLayout->addWidget(pro, 4, 2, 1, 3);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 5, 0, 1, 2);

        age = new QLineEdit(widget);
        age->setObjectName("age");
        age->setMaxLength(5);

        gridLayout->addWidget(age, 3, 2, 1, 3);

        class_2 = new QLineEdit(widget);
        class_2->setObjectName("class_2");
        class_2->setMaxLength(32767);

        gridLayout->addWidget(class_2, 5, 2, 1, 3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 2, 0, 1, 2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 7, 3, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        gril = new QRadioButton(widget);
        gril->setObjectName("gril");
        gril->setFont(font);

        gridLayout->addWidget(gril, 2, 4, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 7, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setFont(font);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 4, 0, 1, 2);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        gridLayout->addWidget(comboBox, 6, 2, 1, 3);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 6, 0, 1, 1);


        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QWidget *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "\345\242\236\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        label_4->setText(QCoreApplication::translate("add", "\345\271\264\351\276\204", nullptr));
        number->setText(QString());
        number->setPlaceholderText(QCoreApplication::translate("add", "(\345\277\205\345\241\253\357\274\211", nullptr));
        boy->setText(QCoreApplication::translate("add", "\347\224\267", nullptr));
        name->setInputMask(QString());
        name->setText(QString());
        name->setPlaceholderText(QCoreApplication::translate("add", "(\345\277\205\345\241\253)", nullptr));
        pro->setText(QString());
        pro->setPlaceholderText(QCoreApplication::translate("add", "(\351\235\236\345\277\205\345\241\253\357\274\211", nullptr));
        label_6->setText(QCoreApplication::translate("add", "\347\217\255\347\272\247", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QCoreApplication::translate("add", "(\351\235\236\345\277\205\345\241\253\357\274\211", nullptr));
        class_2->setInputMask(QString());
        class_2->setPlaceholderText(QCoreApplication::translate("add", "(\351\235\236\345\277\205\345\241\253\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("add", "\346\200\247\345\210\253", nullptr));
        pushButton->setText(QCoreApplication::translate("add", "\346\267\273\345\212\240", nullptr));
        label_3->setText(QCoreApplication::translate("add", "\345\247\223\345\220\215", nullptr));
        gril->setText(QCoreApplication::translate("add", "\345\245\263", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add", "\351\232\217\346\234\272\347\224\237\346\210\220100\344\270\252", nullptr));
        label->setText(QCoreApplication::translate("add", "\345\255\246\345\217\267", nullptr));
        label_5->setText(QCoreApplication::translate("add", "\344\270\223\344\270\232", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("add", "\346\231\256\351\200\232\345\255\246\347\224\237", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("add", "\347\217\255\351\225\277", nullptr));

        label_7->setText(QCoreApplication::translate("add", "\347\255\211\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H
