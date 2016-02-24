/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionReverse_complement;
    QAction *actionHow_To_Use;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *widget;
    QPushButton *pushButton_browse;
    QLabel *label;
    QPushButton *pushButton_index;
    QProgressBar *progressBar_indexing;
    QLineEdit *lineEdit_refrence;
    QPushButton *pushButton_stop1;
    QWidget *widget_2;
    QProgressBar *progressBar_mapping;
    QCheckBox *checkBox_man;
    QCheckBox *checkBox_fasta;
    QCheckBox *checkBox_pe;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_reads1;
    QLineEdit *lineEdit_reads2;
    QPushButton *pushButton_browse1;
    QPushButton *pushButton_browse2;
    QLabel *label_4;
    QLineEdit *lineEdit_readsSeq;
    QPushButton *pushButton_mapping;
    QPushButton *pushButton_openOutputFile;
    QPushButton *pushButton_option;
    QPushButton *pushButton_stop2;
    QPushButton *pushButton_browse3;
    QLabel *label_5;
    QLineEdit *lineEdit_snp;
    QWidget *tab_3;
    QRadioButton *radioButton_readName;
    QRadioButton *radioButton_ReadSeq;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_observe;
    QTextEdit *textEdit_observe;
    QTextEdit *textEdit_detail;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_hide;
    QMenuBar *menuBar;
    QMenu *menuUtinity;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(927, 590);
        actionReverse_complement = new QAction(MainWindow);
        actionReverse_complement->setObjectName(QStringLiteral("actionReverse_complement"));
        actionReverse_complement->setCheckable(false);
        actionHow_To_Use = new QAction(MainWindow);
        actionHow_To_Use->setObjectName(QStringLiteral("actionHow_To_Use"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 911, 311));
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        pushButton_browse = new QPushButton(widget);
        pushButton_browse->setObjectName(QStringLiteral("pushButton_browse"));
        pushButton_browse->setGeometry(QRect(819, 90, 80, 23));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 81, 23));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        pushButton_index = new QPushButton(widget);
        pushButton_index->setObjectName(QStringLiteral("pushButton_index"));
        pushButton_index->setGeometry(QRect(780, 160, 91, 23));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_index->setFont(font1);
        progressBar_indexing = new QProgressBar(widget);
        progressBar_indexing->setObjectName(QStringLiteral("progressBar_indexing"));
        progressBar_indexing->setGeometry(QRect(10, 200, 791, 23));
        progressBar_indexing->setValue(0);
        progressBar_indexing->setTextVisible(true);
        lineEdit_refrence = new QLineEdit(widget);
        lineEdit_refrence->setObjectName(QStringLiteral("lineEdit_refrence"));
        lineEdit_refrence->setEnabled(false);
        lineEdit_refrence->setGeometry(QRect(107, 90, 706, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Monospace"));
        lineEdit_refrence->setFont(font2);
        pushButton_stop1 = new QPushButton(widget);
        pushButton_stop1->setObjectName(QStringLiteral("pushButton_stop1"));
        pushButton_stop1->setGeometry(QRect(810, 200, 80, 23));
        tabWidget->addTab(widget, QString());
        pushButton_index->raise();
        progressBar_indexing->raise();
        pushButton_browse->raise();
        label->raise();
        lineEdit_refrence->raise();
        pushButton_stop1->raise();
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        progressBar_mapping = new QProgressBar(widget_2);
        progressBar_mapping->setObjectName(QStringLiteral("progressBar_mapping"));
        progressBar_mapping->setGeometry(QRect(20, 240, 791, 23));
        progressBar_mapping->setValue(0);
        progressBar_mapping->setTextVisible(true);
        checkBox_man = new QCheckBox(widget_2);
        checkBox_man->setObjectName(QStringLiteral("checkBox_man"));
        checkBox_man->setGeometry(QRect(26, 151, 104, 21));
        QFont font3;
        font3.setPointSize(9);
        checkBox_man->setFont(font3);
        checkBox_man->setChecked(false);
        checkBox_fasta = new QCheckBox(widget_2);
        checkBox_fasta->setObjectName(QStringLiteral("checkBox_fasta"));
        checkBox_fasta->setEnabled(true);
        checkBox_fasta->setGeometry(QRect(180, 10, 101, 21));
        checkBox_pe = new QCheckBox(widget_2);
        checkBox_pe->setObjectName(QStringLiteral("checkBox_pe"));
        checkBox_pe->setEnabled(true);
        checkBox_pe->setGeometry(QRect(10, 10, 161, 21));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 41, 77, 23));
        QFont font4;
        font4.setPointSize(10);
        label_2->setFont(font4);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 77, 23));
        label_3->setFont(font4);
        lineEdit_reads1 = new QLineEdit(widget_2);
        lineEdit_reads1->setObjectName(QStringLiteral("lineEdit_reads1"));
        lineEdit_reads1->setEnabled(false);
        lineEdit_reads1->setGeometry(QRect(93, 41, 720, 23));
        lineEdit_reads1->setFont(font2);
        lineEdit_reads2 = new QLineEdit(widget_2);
        lineEdit_reads2->setObjectName(QStringLiteral("lineEdit_reads2"));
        lineEdit_reads2->setEnabled(false);
        lineEdit_reads2->setGeometry(QRect(93, 70, 720, 23));
        lineEdit_reads2->setFont(font2);
        pushButton_browse1 = new QPushButton(widget_2);
        pushButton_browse1->setObjectName(QStringLiteral("pushButton_browse1"));
        pushButton_browse1->setEnabled(true);
        pushButton_browse1->setGeometry(QRect(819, 41, 80, 23));
        pushButton_browse2 = new QPushButton(widget_2);
        pushButton_browse2->setObjectName(QStringLiteral("pushButton_browse2"));
        pushButton_browse2->setEnabled(false);
        pushButton_browse2->setGeometry(QRect(819, 70, 80, 23));
        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(136, 150, 108, 23));
        label_4->setFont(font4);
        lineEdit_readsSeq = new QLineEdit(widget_2);
        lineEdit_readsSeq->setObjectName(QStringLiteral("lineEdit_readsSeq"));
        lineEdit_readsSeq->setEnabled(true);
        lineEdit_readsSeq->setGeometry(QRect(260, 150, 641, 23));
        lineEdit_readsSeq->setFont(font2);
        pushButton_mapping = new QPushButton(widget_2);
        pushButton_mapping->setObjectName(QStringLiteral("pushButton_mapping"));
        pushButton_mapping->setGeometry(QRect(790, 200, 91, 23));
        pushButton_mapping->setFont(font1);
        pushButton_openOutputFile = new QPushButton(widget_2);
        pushButton_openOutputFile->setObjectName(QStringLiteral("pushButton_openOutputFile"));
        pushButton_openOutputFile->setGeometry(QRect(20, 200, 151, 23));
        pushButton_option = new QPushButton(widget_2);
        pushButton_option->setObjectName(QStringLiteral("pushButton_option"));
        pushButton_option->setGeometry(QRect(680, 200, 91, 23));
        QFont font5;
        font5.setBold(false);
        font5.setWeight(50);
        pushButton_option->setFont(font5);
        pushButton_stop2 = new QPushButton(widget_2);
        pushButton_stop2->setObjectName(QStringLiteral("pushButton_stop2"));
        pushButton_stop2->setGeometry(QRect(820, 240, 80, 23));
        pushButton_browse3 = new QPushButton(widget_2);
        pushButton_browse3->setObjectName(QStringLiteral("pushButton_browse3"));
        pushButton_browse3->setEnabled(true);
        pushButton_browse3->setGeometry(QRect(820, 100, 80, 23));
        pushButton_browse3->setCheckable(true);
        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(11, 100, 77, 23));
        label_5->setFont(font4);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_snp = new QLineEdit(widget_2);
        lineEdit_snp->setObjectName(QStringLiteral("lineEdit_snp"));
        lineEdit_snp->setEnabled(false);
        lineEdit_snp->setGeometry(QRect(94, 100, 720, 23));
        lineEdit_snp->setFont(font2);
        tabWidget->addTab(widget_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        radioButton_readName = new QRadioButton(tab_3);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(radioButton_readName);
        radioButton_readName->setObjectName(QStringLiteral("radioButton_readName"));
        radioButton_readName->setGeometry(QRect(20, 10, 111, 21));
        radioButton_readName->setChecked(false);
        radioButton_ReadSeq = new QRadioButton(tab_3);
        buttonGroup->addButton(radioButton_ReadSeq);
        radioButton_ReadSeq->setObjectName(QStringLiteral("radioButton_ReadSeq"));
        radioButton_ReadSeq->setGeometry(QRect(130, 10, 151, 21));
        radioButton_ReadSeq->setChecked(true);
        lineEdit_search = new QLineEdit(tab_3);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(20, 40, 771, 23));
        lineEdit_search->setFont(font2);
        pushButton_observe = new QPushButton(tab_3);
        pushButton_observe->setObjectName(QStringLiteral("pushButton_observe"));
        pushButton_observe->setGeometry(QRect(810, 40, 80, 23));
        textEdit_observe = new QTextEdit(tab_3);
        textEdit_observe->setObjectName(QStringLiteral("textEdit_observe"));
        textEdit_observe->setGeometry(QRect(20, 69, 871, 211));
        QFont font6;
        font6.setFamily(QStringLiteral("Monospace"));
        font6.setPointSize(9);
        font6.setStyleStrategy(QFont::PreferDefault);
        textEdit_observe->setFont(font6);
        textEdit_observe->setAutoFillBackground(true);
        textEdit_observe->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit_observe->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit_observe->setLineWrapMode(QTextEdit::NoWrap);
        tabWidget->addTab(tab_3, QString());
        textEdit_detail = new QTextEdit(centralWidget);
        textEdit_detail->setObjectName(QStringLiteral("textEdit_detail"));
        textEdit_detail->setGeometry(QRect(20, 370, 891, 151));
        textEdit_detail->setLineWrapMode(QTextEdit::NoWrap);
        textEdit_detail->setReadOnly(true);
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(690, 330, 80, 23));
        pushButton_hide = new QPushButton(centralWidget);
        pushButton_hide->setObjectName(QStringLiteral("pushButton_hide"));
        pushButton_hide->setGeometry(QRect(779, 330, 131, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 927, 21));
        menuUtinity = new QMenu(menuBar);
        menuUtinity->setObjectName(QStringLiteral("menuUtinity"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuUtinity->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuUtinity->addAction(actionReverse_complement);
        menuHelp->addAction(actionHow_To_Use);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Visual Aligner for Bisulfite Sequence", 0));
        actionReverse_complement->setText(QApplication::translate("MainWindow", "reverse complement", 0));
        actionHow_To_Use->setText(QApplication::translate("MainWindow", "How-To-Use", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        pushButton_browse->setText(QApplication::translate("MainWindow", "Browse", 0));
        label->setText(QApplication::translate("MainWindow", "Reference:", 0));
        pushButton_index->setText(QApplication::translate("MainWindow", "Build Index", 0));
        pushButton_stop1->setText(QApplication::translate("MainWindow", "stop", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "Step 1", 0));
        checkBox_man->setText(QApplication::translate("MainWindow", "Manual Mode", 0));
        checkBox_fasta->setText(QApplication::translate("MainWindow", "  fasta reads", 0));
        checkBox_pe->setText(QApplication::translate("MainWindow", "paired-end reads", 0));
        label_2->setText(QApplication::translate("MainWindow", "reads file 1:", 0));
        label_3->setText(QApplication::translate("MainWindow", "reads file 2:", 0));
        pushButton_browse1->setText(QApplication::translate("MainWindow", "browse", 0));
        pushButton_browse2->setText(QApplication::translate("MainWindow", "browse", 0));
        label_4->setText(QApplication::translate("MainWindow", "reads sequence:", 0));
        pushButton_mapping->setText(QApplication::translate("MainWindow", "Mapping", 0));
        pushButton_openOutputFile->setText(QApplication::translate("MainWindow", "open output file", 0));
        pushButton_option->setText(QApplication::translate("MainWindow", "Option", 0));
        pushButton_stop2->setText(QApplication::translate("MainWindow", "stop", 0));
        pushButton_browse3->setText(QApplication::translate("MainWindow", "browse", 0));
        label_5->setText(QApplication::translate("MainWindow", "SNP file:", 0));
        tabWidget->setTabText(tabWidget->indexOf(widget_2), QApplication::translate("MainWindow", "Step 2", 0));
#ifndef QT_NO_TOOLTIP
        radioButton_readName->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        radioButton_readName->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        radioButton_readName->setText(QApplication::translate("MainWindow", "Read Name", 0));
        radioButton_ReadSeq->setText(QApplication::translate("MainWindow", "Read Sequence", 0));
        pushButton_observe->setText(QApplication::translate("MainWindow", "Observe", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Step 3", 0));
        pushButton_clear->setText(QApplication::translate("MainWindow", "clear", 0));
        pushButton_hide->setText(QApplication::translate("MainWindow", "hide detail", 0));
        menuUtinity->setTitle(QApplication::translate("MainWindow", "Utinity", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
