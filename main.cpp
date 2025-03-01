#include "mainwindow.h"
#include "databasemanager.h"
#include "logindialog.h"
#include <QApplication>
#include <QFile>
#include "weather.h"
int main(int argc, char *argv[])
{
    DataBaseManager::instance();
    QApplication a(argc, argv);
    QFile styleFile(":/style/style.qss");
    if (styleFile.open(QFile::ReadOnly)) {
        QString styleSheet = QString(styleFile.readAll());
        a.setStyleSheet(styleSheet);// 应用样式表
        styleFile.close();
    }else {
        qWarning() << "Failed to load stylesheet:" << styleFile.errorString();
    }

    LoginDialog loginDlg;
    if(loginDlg.exec()==QDialog::Accepted){
        MainWindow w;
        w.show();
        return a.exec();
    }
    return 0;
}
