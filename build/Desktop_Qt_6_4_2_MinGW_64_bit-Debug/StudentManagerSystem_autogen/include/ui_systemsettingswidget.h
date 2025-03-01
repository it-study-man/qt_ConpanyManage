/********************************************************************************
** Form generated from reading UI file 'systemsettingswidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSETTINGSWIDGET_H
#define UI_SYSTEMSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemSettingsWidget
{
public:

    void setupUi(QWidget *SystemSettingsWidget)
    {
        if (SystemSettingsWidget->objectName().isEmpty())
            SystemSettingsWidget->setObjectName("SystemSettingsWidget");
        SystemSettingsWidget->resize(400, 300);

        retranslateUi(SystemSettingsWidget);

        QMetaObject::connectSlotsByName(SystemSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *SystemSettingsWidget)
    {
        SystemSettingsWidget->setWindowTitle(QCoreApplication::translate("SystemSettingsWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SystemSettingsWidget: public Ui_SystemSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSETTINGSWIDGET_H
