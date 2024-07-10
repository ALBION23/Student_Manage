/********************************************************************************
** Form generated from reading UI file 'change_stu.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_STU_H
#define UI_CHANGE_STU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_stu
{
public:
    QWidget *widget_2;
    QLineEdit *id;
    QLabel *label;
    QWidget *widget;
    QGridLayout *gridLayout;
    QRadioButton *boy;
    QLineEdit *class_2;
    QPushButton *pushButton;
    QLabel *label_6;
    QLabel *label_4;
    QLineEdit *name;
    QRadioButton *gril;
    QLabel *label_5;
    QPushButton *cancel;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *age;
    QLineEdit *pro;
    QLabel *label_8;
    QComboBox *comboBox;
    QLabel *label_7;

    void setupUi(QDialog *change_stu)
    {
        if (change_stu->objectName().isEmpty())
            change_stu->setObjectName("change_stu");
        change_stu->resize(692, 546);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/picture/114287760_p0.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        change_stu->setWindowIcon(icon);
        widget_2 = new QWidget(change_stu);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(190, 10, 361, 71));
        id = new QLineEdit(widget_2);
        id->setObjectName("id");
        id->setGeometry(QRect(160, 20, 191, 31));
        id->setMaxLength(10);
        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 81, 71));
        QFont font;
        font.setPointSize(24);
        font.setBold(false);
        label->setFont(font);
        widget = new QWidget(change_stu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 130, 411, 391));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        boy = new QRadioButton(widget);
        boy->setObjectName("boy");
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        boy->setFont(font1);
        boy->setChecked(true);

        gridLayout->addWidget(boy, 1, 2, 1, 1);

        class_2 = new QLineEdit(widget);
        class_2->setObjectName("class_2");
        class_2->setMaxLength(32767);

        gridLayout->addWidget(class_2, 4, 2, 1, 2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        gridLayout->addWidget(pushButton, 6, 0, 1, 2);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        name = new QLineEdit(widget);
        name->setObjectName("name");
        name->setMaxLength(12);

        gridLayout->addWidget(name, 0, 2, 1, 2);

        gril = new QRadioButton(widget);
        gril->setObjectName("gril");
        gril->setFont(font1);

        gridLayout->addWidget(gril, 1, 3, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        cancel = new QPushButton(widget);
        cancel->setObjectName("cancel");

        gridLayout->addWidget(cancel, 6, 2, 1, 2);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        age = new QLineEdit(widget);
        age->setObjectName("age");
        age->setMaxLength(5);

        gridLayout->addWidget(age, 2, 2, 1, 2);

        pro = new QLineEdit(widget);
        pro->setObjectName("pro");
        pro->setMaxLength(15);

        gridLayout->addWidget(pro, 3, 2, 1, 2);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        QFont font2;
        font2.setPointSize(11);
        label_8->setFont(font2);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setFont(font2);

        gridLayout->addWidget(comboBox, 5, 2, 1, 2);

        label_7 = new QLabel(change_stu);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 70, 271, 71));
        QFont font3;
        font3.setPointSize(26);
        label_7->setFont(font3);

        retranslateUi(change_stu);

        QMetaObject::connectSlotsByName(change_stu);
    } // setupUi

    void retranslateUi(QDialog *change_stu)
    {
        change_stu->setWindowTitle(QCoreApplication::translate("change_stu", "\344\277\256\346\224\271\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        id->setInputMask(QString());
        id->setText(QString());
        id->setPlaceholderText(QString());
        label->setText(QCoreApplication::translate("change_stu", "\345\255\246\345\217\267", nullptr));
        boy->setText(QCoreApplication::translate("change_stu", "\347\224\267", nullptr));
        class_2->setInputMask(QString());
        class_2->setPlaceholderText(QString());
        pushButton->setText(QCoreApplication::translate("change_stu", "\344\277\256\346\224\271", nullptr));
        label_6->setText(QCoreApplication::translate("change_stu", "\347\217\255\347\272\247", nullptr));
        label_4->setText(QCoreApplication::translate("change_stu", "\345\271\264\351\276\204", nullptr));
        name->setInputMask(QString());
        name->setText(QString());
        name->setPlaceholderText(QString());
        gril->setText(QCoreApplication::translate("change_stu", "\345\245\263", nullptr));
        label_5->setText(QCoreApplication::translate("change_stu", "\344\270\223\344\270\232", nullptr));
        cancel->setText(QCoreApplication::translate("change_stu", "\345\217\226\346\266\210", nullptr));
        label_3->setText(QCoreApplication::translate("change_stu", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("change_stu", "\346\200\247\345\210\253", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QString());
        pro->setText(QString());
        pro->setPlaceholderText(QString());
        label_8->setText(QCoreApplication::translate("change_stu", "\347\255\211\347\272\247", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("change_stu", "\346\231\256\351\200\232\345\255\246\347\224\237", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("change_stu", "\347\217\255\351\225\277", nullptr));

        label_7->setText(QCoreApplication::translate("change_stu", "\351\234\200\350\246\201\344\277\256\346\224\271\347\232\204\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_stu: public Ui_change_stu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_STU_H
