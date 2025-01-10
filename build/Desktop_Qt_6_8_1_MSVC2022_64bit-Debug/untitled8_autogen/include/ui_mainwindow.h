/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actthemewhite;
    QAction *action1_0;
    QAction *action1_5;
    QAction *action0_5;
    QAction *action2_0;
    QAction *addfile;
    QAction *addfolder;
    QAction *actshun;
    QAction *actxun;
    QAction *actrandom;
    QAction *actthemeblack;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QToolButton *menuwidget;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QWidget *progressbar;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QToolButton *speedbutton;
    QToolButton *toolButton_2;
    QPushButton *showfull;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_9;
    QSlider *horizontalSlider_2;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_V;
    QMenu *menu_S;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actthemewhite = new QAction(MainWindow);
        actthemewhite->setObjectName("actthemewhite");
        actthemewhite->setCheckable(true);
        actthemewhite->setMenuRole(QAction::MenuRole::NoRole);
        action1_0 = new QAction(MainWindow);
        action1_0->setObjectName("action1_0");
        action1_0->setCheckable(true);
        action1_0->setChecked(true);
        action1_0->setMenuRole(QAction::MenuRole::NoRole);
        action1_5 = new QAction(MainWindow);
        action1_5->setObjectName("action1_5");
        action1_5->setCheckable(true);
        action1_5->setMenuRole(QAction::MenuRole::NoRole);
        action0_5 = new QAction(MainWindow);
        action0_5->setObjectName("action0_5");
        action0_5->setCheckable(true);
        action0_5->setMenuRole(QAction::MenuRole::NoRole);
        action2_0 = new QAction(MainWindow);
        action2_0->setObjectName("action2_0");
        action2_0->setCheckable(true);
        action2_0->setMenuRole(QAction::MenuRole::NoRole);
        addfile = new QAction(MainWindow);
        addfile->setObjectName("addfile");
        addfile->setMenuRole(QAction::MenuRole::NoRole);
        addfolder = new QAction(MainWindow);
        addfolder->setObjectName("addfolder");
        addfolder->setMenuRole(QAction::MenuRole::NoRole);
        actshun = new QAction(MainWindow);
        actshun->setObjectName("actshun");
        actshun->setCheckable(true);
        actshun->setChecked(true);
        actshun->setMenuRole(QAction::MenuRole::NoRole);
        actxun = new QAction(MainWindow);
        actxun->setObjectName("actxun");
        actxun->setCheckable(true);
        actxun->setMenuRole(QAction::MenuRole::NoRole);
        actrandom = new QAction(MainWindow);
        actrandom->setObjectName("actrandom");
        actrandom->setCheckable(true);
        actrandom->setMenuRole(QAction::MenuRole::NoRole);
        actthemeblack = new QAction(MainWindow);
        actthemeblack->setObjectName("actthemeblack");
        actthemeblack->setCheckable(true);
        actthemeblack->setChecked(true);
        actthemeblack->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Orientation::Vertical);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        widget_2 = new QWidget(splitter);
        widget_2->setObjectName("widget_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName("gridLayout");
        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 0, 1, 3);

        menuwidget = new QToolButton(widget_2);
        menuwidget->setObjectName("menuwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(menuwidget->sizePolicy().hasHeightForWidth());
        menuwidget->setSizePolicy(sizePolicy1);
        menuwidget->setMaximumSize(QSize(60, 30));
        menuwidget->setPopupMode(QToolButton::ToolButtonPopupMode::MenuButtonPopup);
        menuwidget->setAutoRaise(false);

        gridLayout->addWidget(menuwidget, 2, 0, 1, 1);

        treeWidget = new QTreeWidget(widget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        gridLayout->addWidget(treeWidget, 1, 0, 1, 3);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(pushButton, 2, 2, 1, 1);

        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName("pushButton_6");
        sizePolicy1.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy1);
        pushButton_6->setCheckable(false);

        gridLayout->addWidget(pushButton_6, 2, 1, 1, 1);

        splitter->addWidget(widget_2);
        widget = new QWidget(splitter);
        widget->setObjectName("widget");
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        splitter->addWidget(widget);
        splitter_2->addWidget(splitter);
        splitter_3->addWidget(splitter_2);
        progressbar = new QWidget(splitter_3);
        progressbar->setObjectName("progressbar");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressbar->sizePolicy().hasHeightForWidth());
        progressbar->setSizePolicy(sizePolicy3);
        progressbar->setMaximumSize(QSize(16777215, 60));
        gridLayout_2 = new QGridLayout(progressbar);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(progressbar);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        horizontalSlider = new QSlider(progressbar);
        horizontalSlider->setObjectName("horizontalSlider");
        sizePolicy3.setHeightForWidth(horizontalSlider->sizePolicy().hasHeightForWidth());
        horizontalSlider->setSizePolicy(sizePolicy3);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider, 0, 1, 1, 11);

        label_3 = new QLabel(progressbar);
        label_3->setObjectName("label_3");
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(label_3, 0, 12, 1, 1);

        pushButton_2 = new QPushButton(progressbar);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy5);
        pushButton_2->setMaximumSize(QSize(60, 16777215));
        pushButton_2->setCheckable(true);
        pushButton_2->setChecked(true);

        gridLayout_2->addWidget(pushButton_2, 1, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(260, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(progressbar);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy1.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy1);
        pushButton_5->setMaximumSize(QSize(25, 16777215));

        gridLayout_2->addWidget(pushButton_5, 1, 3, 1, 1);

        pushButton_3 = new QPushButton(progressbar);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Maximum);
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy6);
        pushButton_3->setMaximumSize(QSize(25, 16777215));

        gridLayout_2->addWidget(pushButton_3, 1, 4, 1, 1);

        pushButton_4 = new QPushButton(progressbar);
        pushButton_4->setObjectName("pushButton_4");
        QSizePolicy sizePolicy7(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy7.setHorizontalStretch(1);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy7);
        pushButton_4->setMaximumSize(QSize(25, 16777215));

        gridLayout_2->addWidget(pushButton_4, 1, 5, 1, 1);

        speedbutton = new QToolButton(progressbar);
        speedbutton->setObjectName("speedbutton");
        sizePolicy7.setHeightForWidth(speedbutton->sizePolicy().hasHeightForWidth());
        speedbutton->setSizePolicy(sizePolicy7);
        speedbutton->setPopupMode(QToolButton::ToolButtonPopupMode::MenuButtonPopup);

        gridLayout_2->addWidget(speedbutton, 1, 6, 1, 1);

        toolButton_2 = new QToolButton(progressbar);
        toolButton_2->setObjectName("toolButton_2");
        toolButton_2->setPopupMode(QToolButton::ToolButtonPopupMode::MenuButtonPopup);

        gridLayout_2->addWidget(toolButton_2, 1, 7, 1, 1);

        showfull = new QPushButton(progressbar);
        showfull->setObjectName("showfull");
        sizePolicy7.setHeightForWidth(showfull->sizePolicy().hasHeightForWidth());
        showfull->setSizePolicy(sizePolicy7);
        showfull->setMaximumSize(QSize(30, 16777215));
        showfull->setCheckable(true);

        gridLayout_2->addWidget(showfull, 1, 8, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 9, 1, 1);

        pushButton_9 = new QPushButton(progressbar);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy7.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy7);
        pushButton_9->setMaximumSize(QSize(30, 16777215));
        pushButton_9->setCheckable(true);

        gridLayout_2->addWidget(pushButton_9, 1, 10, 1, 1);

        horizontalSlider_2 = new QSlider(progressbar);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        QSizePolicy sizePolicy8(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Expanding);
        sizePolicy8.setHorizontalStretch(3);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(horizontalSlider_2->sizePolicy().hasHeightForWidth());
        horizontalSlider_2->setSizePolicy(sizePolicy8);
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);

        gridLayout_2->addWidget(horizontalSlider_2, 1, 11, 1, 2);

        splitter_3->addWidget(progressbar);

        verticalLayout->addWidget(splitter_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        menu_S = new QMenu(menubar);
        menu_S->setObjectName("menu_S");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_S->menuAction());
        menu_F->addAction(addfile);
        menu_F->addAction(addfolder);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actthemewhite->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\242\230\357\274\210\347\231\275\357\274\211", nullptr));
        action1_0->setText(QCoreApplication::translate("MainWindow", "X1.0", nullptr));
        action1_5->setText(QCoreApplication::translate("MainWindow", "X1.5", nullptr));
        action0_5->setText(QCoreApplication::translate("MainWindow", "X0.5", nullptr));
        action2_0->setText(QCoreApplication::translate("MainWindow", "X2.0", nullptr));
        addfile->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266", nullptr));
        addfolder->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240\346\226\207\344\273\266\345\244\271", nullptr));
        actshun->setText(QCoreApplication::translate("MainWindow", "\351\241\272\345\272\217\346\222\255\346\224\276", nullptr));
        actxun->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));
        actrandom->setText(QCoreApplication::translate("MainWindow", "\351\232\217\346\234\272\346\222\255\346\224\276", nullptr));
        actthemeblack->setText(QCoreApplication::translate("MainWindow", "\344\270\273\351\242\230(\351\273\221)", nullptr));
#if QT_CONFIG(tooltip)
        actthemeblack->setToolTip(QCoreApplication::translate("MainWindow", "\346\233\264\346\215\242\344\270\273\351\242\230", nullptr));
#endif // QT_CONFIG(tooltip)
        menuwidget->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "AI", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\346\224\266\350\227\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "0.00", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "11.00", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\345\210\227\350\241\250", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\343\200\212", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "|>", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\343\200\213", nullptr));
        speedbutton->setText(QCoreApplication::translate("MainWindow", "X1,0", nullptr));
        toolButton_2->setText(QCoreApplication::translate("MainWindow", "\351\241\272\345\272\217\346\222\255\346\224\276", nullptr));
        showfull->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\345\243\260\351\237\263", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210&F\357\274\211", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\357\274\210&V)", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\345\243\260\351\237\263\357\274\210&S)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
