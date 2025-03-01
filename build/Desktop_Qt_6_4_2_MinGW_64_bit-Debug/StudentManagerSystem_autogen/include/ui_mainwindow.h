/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <financialwidget.h>
#include <honorwallwidget.h>
#include <schedulewidget.h>
#include <studentinfowidget.h>
#include <systemsettingswidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *btStudentInfo;
    QToolButton *btnSchedule;
    QToolButton *btnFinance;
    QToolButton *btnHonor;
    QToolButton *btnSystemSetting;
    QToolButton *weather_1;
    QSpacerItem *verticalSpacer;
    QStackedWidget *stackedWidget;
    StudentInfoWidget *pageStudentInfo;
    SystemSettingsWidget *pageSystemSetting;
    FinancialWidget *pageFinance;
    HonorWallWidget *pageHonor;
    ScheduleWidget *pageSchedule;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1033, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ico/le.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 2, 0, 2);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(100, 0));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 2, 0, 2);
        btStudentInfo = new QToolButton(widget);
        btStudentInfo->setObjectName("btStudentInfo");
        btStudentInfo->setMinimumSize(QSize(80, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ico/ICON-8.png"), QSize(), QIcon::Normal, QIcon::Off);
        btStudentInfo->setIcon(icon1);
        btStudentInfo->setIconSize(QSize(60, 60));
        btStudentInfo->setCheckable(true);
        btStudentInfo->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(btStudentInfo);

        btnSchedule = new QToolButton(widget);
        btnSchedule->setObjectName("btnSchedule");
        btnSchedule->setMinimumSize(QSize(80, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ico/WATCH01.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        btnSchedule->setIcon(icon2);
        btnSchedule->setIconSize(QSize(60, 60));
        btnSchedule->setCheckable(true);
        btnSchedule->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(btnSchedule);

        btnFinance = new QToolButton(widget);
        btnFinance->setObjectName("btnFinance");
        btnFinance->setMinimumSize(QSize(80, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ico/moneybox-32.ico"), QSize(), QIcon::Normal, QIcon::Off);
        btnFinance->setIcon(icon3);
        btnFinance->setIconSize(QSize(60, 60));
        btnFinance->setCheckable(true);
        btnFinance->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(btnFinance);

        btnHonor = new QToolButton(widget);
        btnHonor->setObjectName("btnHonor");
        btnHonor->setMinimumSize(QSize(80, 0));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ico/SUN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        btnHonor->setIcon(icon4);
        btnHonor->setIconSize(QSize(60, 60));
        btnHonor->setCheckable(true);
        btnHonor->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(btnHonor);

        btnSystemSetting = new QToolButton(widget);
        btnSystemSetting->setObjectName("btnSystemSetting");
        btnSystemSetting->setMinimumSize(QSize(80, 0));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ico/ICON-2.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSystemSetting->setIcon(icon5);
        btnSystemSetting->setIconSize(QSize(60, 60));
        btnSystemSetting->setCheckable(true);
        btnSystemSetting->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(btnSystemSetting);

        weather_1 = new QToolButton(widget);
        weather_1->setObjectName("weather_1");
        weather_1->setMinimumSize(QSize(80, 0));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/res/type/BaoXue.png"), QSize(), QIcon::Normal, QIcon::Off);
        weather_1->setIcon(icon6);
        weather_1->setIconSize(QSize(60, 60));
        weather_1->setCheckable(false);
        weather_1->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextUnderIcon);

        verticalLayout->addWidget(weather_1);

        verticalSpacer = new QSpacerItem(20, 49, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(widget);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        pageStudentInfo = new StudentInfoWidget();
        pageStudentInfo->setObjectName("pageStudentInfo");
        stackedWidget->addWidget(pageStudentInfo);
        pageSystemSetting = new SystemSettingsWidget();
        pageSystemSetting->setObjectName("pageSystemSetting");
        stackedWidget->addWidget(pageSystemSetting);
        pageFinance = new FinancialWidget();
        pageFinance->setObjectName("pageFinance");
        stackedWidget->addWidget(pageFinance);
        pageHonor = new HonorWallWidget();
        pageHonor->setObjectName("pageHonor");
        stackedWidget->addWidget(pageHonor);
        pageSchedule = new ScheduleWidget();
        pageSchedule->setObjectName("pageSchedule");
        stackedWidget->addWidget(pageSchedule);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\230\277\350\245\277\346\213\234\346\225\231\345\255\246\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btStudentInfo->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\221\230\344\277\241\346\201\257", nullptr));
        btnSchedule->setText(QCoreApplication::translate("MainWindow", "\350\257\276\347\250\213\345\256\211\346\216\222", nullptr));
        btnFinance->setText(QCoreApplication::translate("MainWindow", "\350\264\242\345\212\241", nullptr));
        btnHonor->setText(QCoreApplication::translate("MainWindow", "\350\215\243\350\252\211\345\242\231", nullptr));
        btnSystemSetting->setText(QCoreApplication::translate("MainWindow", "\347\263\273\347\273\237\350\256\276\347\275\256", nullptr));
        weather_1->setText(QCoreApplication::translate("MainWindow", "\345\244\251\346\260\224\351\242\204\346\212\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
