#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QButtonGroup>
#include<QToolButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QButtonGroup *btnGp=new QButtonGroup(this);
    btnGp->addButton(ui->btStudentInfo,0);
    btnGp->addButton(ui->btnSystemSetting,1);
    btnGp->addButton(ui->btnFinance,2);
    btnGp->addButton(ui->btnHonor,3);
    btnGp->addButton(ui->btnSchedule,4);
    connect(btnGp,&QButtonGroup::idClicked,ui->stackedWidget,&QStackedWidget::setCurrentIndex);
    btnGp->button(0)->setChecked(true);
    ui->stackedWidget->setCurrentIndex(0);
    connect(ui->weather_1,&QToolButton::clicked,this,[=](){
       w.setStyleSheet("background-color: rgb(0, 98, 144);"
                        "QPushButton{"
                        "background-color: rgb(0, 0, 0);"
                        "color: rgb(255, 255, 255);"
                        "border: 2px solid black; /* 设置 2 像素宽的白色实线边框 */"
                        "}");
       w.show();
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

