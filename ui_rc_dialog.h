/********************************************************************************
** Form generated from reading UI file 'rc_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RC_DIALOG_H
#define UI_RC_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RC_Dialog
{
public:
    QPushButton *pushButton_convert;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_raw;
    QLabel *label_2;
    QLineEdit *lineEdit_rc;

    void setupUi(QDialog *RC_Dialog)
    {
        if (RC_Dialog->objectName().isEmpty())
            RC_Dialog->setObjectName(QStringLiteral("RC_Dialog"));
        RC_Dialog->resize(921, 204);
        pushButton_convert = new QPushButton(RC_Dialog);
        pushButton_convert->setObjectName(QStringLiteral("pushButton_convert"));
        pushButton_convert->setGeometry(QRect(810, 140, 80, 23));
        widget = new QWidget(RC_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 50, 851, 57));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_raw = new QLineEdit(widget);
        lineEdit_raw->setObjectName(QStringLiteral("lineEdit_raw"));
        QFont font;
        font.setFamily(QStringLiteral("Monospace"));
        lineEdit_raw->setFont(font);

        gridLayout->addWidget(lineEdit_raw, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_rc = new QLineEdit(widget);
        lineEdit_rc->setObjectName(QStringLiteral("lineEdit_rc"));
        lineEdit_rc->setFont(font);

        gridLayout->addWidget(lineEdit_rc, 1, 1, 1, 1);


        retranslateUi(RC_Dialog);

        QMetaObject::connectSlotsByName(RC_Dialog);
    } // setupUi

    void retranslateUi(QDialog *RC_Dialog)
    {
        RC_Dialog->setWindowTitle(QApplication::translate("RC_Dialog", "Reverse Complement Conversion", 0));
        pushButton_convert->setText(QApplication::translate("RC_Dialog", "convert", 0));
        label->setText(QApplication::translate("RC_Dialog", "row sequence:", 0));
        label_2->setText(QApplication::translate("RC_Dialog", "reverse complement:", 0));
    } // retranslateUi

};

namespace Ui {
    class RC_Dialog: public Ui_RC_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RC_DIALOG_H
