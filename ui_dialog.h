/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton_hide;
    QLabel *label;
    QLabel *label_6;
    QFrame *line;
    QFrame *line_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBox_trim5;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QSpinBox *spinBox_trim3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QRadioButton *radioButton_e2e;
    QRadioButton *radioButton_local;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_veryFast;
    QRadioButton *radioButton_fast;
    QRadioButton *radioButton_sensitive;
    QRadioButton *radioButton_verySensitive;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QSlider *horizontalSlider_z;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_bt2optoth;
    QLabel *label_10;
    QLineEdit *lineEdit_bwaoptoth;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lineEdit_minInsertSize;
    QLineEdit *lineEdit_maxInsertSize;
    QLabel *label_13;
    QLabel *label_14;
    QFrame *line_3;
    QCheckBox *checkBox_nobt2;
    QCheckBox *checkBox_nobwa;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(393, 541);
        Dialog->setSizeGripEnabled(false);
        pushButton_hide = new QPushButton(Dialog);
        pushButton_hide->setObjectName(QStringLiteral("pushButton_hide"));
        pushButton_hide->setGeometry(QRect(290, 510, 80, 23));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 141, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 280, 141, 16));
        label_6->setFont(font);
        line = new QFrame(Dialog);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 265, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Dialog);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 390, 391, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 331, 175));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBox_trim5 = new QSpinBox(layoutWidget);
        spinBox_trim5->setObjectName(QStringLiteral("spinBox_trim5"));

        horizontalLayout->addWidget(spinBox_trim5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        spinBox_trim3 = new QSpinBox(layoutWidget);
        spinBox_trim3->setObjectName(QStringLiteral("spinBox_trim3"));

        horizontalLayout->addWidget(spinBox_trim3);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        radioButton_e2e = new QRadioButton(layoutWidget);
        buttonGroup = new QButtonGroup(Dialog);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_e2e);
        radioButton_e2e->setObjectName(QStringLiteral("radioButton_e2e"));
        radioButton_e2e->setChecked(true);

        horizontalLayout_2->addWidget(radioButton_e2e);

        radioButton_local = new QRadioButton(layoutWidget);
        buttonGroup->addButton(radioButton_local);
        radioButton_local->setObjectName(QStringLiteral("radioButton_local"));

        horizontalLayout_2->addWidget(radioButton_local);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_2->addWidget(label_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton_veryFast = new QRadioButton(layoutWidget);
        buttonGroup_2 = new QButtonGroup(Dialog);
        buttonGroup_2->setObjectName(QStringLiteral("buttonGroup_2"));
        buttonGroup_2->addButton(radioButton_veryFast);
        radioButton_veryFast->setObjectName(QStringLiteral("radioButton_veryFast"));

        verticalLayout->addWidget(radioButton_veryFast);

        radioButton_fast = new QRadioButton(layoutWidget);
        buttonGroup_2->addButton(radioButton_fast);
        radioButton_fast->setObjectName(QStringLiteral("radioButton_fast"));

        verticalLayout->addWidget(radioButton_fast);

        radioButton_sensitive = new QRadioButton(layoutWidget);
        buttonGroup_2->addButton(radioButton_sensitive);
        radioButton_sensitive->setObjectName(QStringLiteral("radioButton_sensitive"));
        radioButton_sensitive->setChecked(true);

        verticalLayout->addWidget(radioButton_sensitive);

        radioButton_verySensitive = new QRadioButton(layoutWidget);
        buttonGroup_2->addButton(radioButton_verySensitive);
        radioButton_verySensitive->setObjectName(QStringLiteral("radioButton_verySensitive"));

        verticalLayout->addWidget(radioButton_verySensitive);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 310, 351, 17));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_4->addWidget(label_7);

        horizontalSlider_z = new QSlider(layoutWidget1);
        horizontalSlider_z->setObjectName(QStringLiteral("horizontalSlider_z"));
        horizontalSlider_z->setMinimum(1);
        horizontalSlider_z->setMaximum(50);
        horizontalSlider_z->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_z);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_4->addWidget(label_8);

        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 220, 111, 16));
        lineEdit_bt2optoth = new QLineEdit(Dialog);
        lineEdit_bt2optoth->setObjectName(QStringLiteral("lineEdit_bt2optoth"));
        lineEdit_bt2optoth->setGeometry(QRect(20, 240, 341, 23));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 340, 111, 16));
        lineEdit_bwaoptoth = new QLineEdit(Dialog);
        lineEdit_bwaoptoth->setObjectName(QStringLiteral("lineEdit_bwaoptoth"));
        lineEdit_bwaoptoth->setGeometry(QRect(20, 360, 341, 23));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 410, 141, 16));
        label_11->setFont(font);
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 440, 77, 23));
        lineEdit_minInsertSize = new QLineEdit(Dialog);
        lineEdit_minInsertSize->setObjectName(QStringLiteral("lineEdit_minInsertSize"));
        lineEdit_minInsertSize->setGeometry(QRect(103, 440, 125, 23));
        lineEdit_maxInsertSize = new QLineEdit(Dialog);
        lineEdit_maxInsertSize->setObjectName(QStringLiteral("lineEdit_maxInsertSize"));
        lineEdit_maxInsertSize->setGeometry(QRect(251, 440, 125, 23));
        label_13 = new QLabel(Dialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(234, 440, 11, 23));
        label_14 = new QLabel(Dialog);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 470, 241, 23));
        line_3 = new QFrame(Dialog);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 490, 391, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        checkBox_nobt2 = new QCheckBox(Dialog);
        checkBox_nobt2->setObjectName(QStringLiteral("checkBox_nobt2"));
        checkBox_nobt2->setGeometry(QRect(160, 10, 151, 21));
        checkBox_nobwa = new QCheckBox(Dialog);
        checkBox_nobwa->setObjectName(QStringLiteral("checkBox_nobwa"));
        checkBox_nobwa->setGeometry(QRect(140, 280, 141, 21));
#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Option", 0));
        pushButton_hide->setText(QApplication::translate("Dialog", "Hide", 0));
        label->setText(QApplication::translate("Dialog", "Bowtie2 options", 0));
        label_6->setText(QApplication::translate("Dialog", "BWA options", 0));
        label_2->setText(QApplication::translate("Dialog", "5' end trim:", 0));
#ifndef QT_NO_WHATSTHIS
        spinBox_trim5->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        label_3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_3->setText(QApplication::translate("Dialog", "3' end trim:", 0));
#ifndef QT_NO_WHATSTHIS
        spinBox_trim3->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label_4->setText(QApplication::translate("Dialog", "clip strategy:", 0));
        radioButton_e2e->setText(QApplication::translate("Dialog", "end to end", 0));
        radioButton_local->setText(QApplication::translate("Dialog", "local", 0));
        label_5->setText(QApplication::translate("Dialog", "inclination:   ", 0));
        radioButton_veryFast->setText(QApplication::translate("Dialog", "--very-fast", 0));
        radioButton_fast->setText(QApplication::translate("Dialog", "--fast", 0));
        radioButton_sensitive->setText(QApplication::translate("Dialog", "--sensitive", 0));
        radioButton_verySensitive->setText(QApplication::translate("Dialog", "--very-sensitive", 0));
        label_7->setText(QApplication::translate("Dialog", "speed", 0));
        label_8->setText(QApplication::translate("Dialog", "sensitivity", 0));
        label_9->setText(QApplication::translate("Dialog", "other options:   ", 0));
        label_10->setText(QApplication::translate("Dialog", "other options:   ", 0));
        label_11->setText(QApplication::translate("Dialog", "Pair-end options", 0));
        label_12->setText(QApplication::translate("Dialog", "insert size:   ", 0));
        label_13->setText(QApplication::translate("Dialog", "~", 0));
        label_14->setText(QApplication::translate("Dialog", "* Will be ignore in single end data.", 0));
        checkBox_nobt2->setText(QApplication::translate("Dialog", "do no use bowtie2", 0));
        checkBox_nobwa->setText(QApplication::translate("Dialog", "do no use bwa", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
