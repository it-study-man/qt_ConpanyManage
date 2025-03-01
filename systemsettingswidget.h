#ifndef SYSTEMSETTINGSWIDGET_H
#define SYSTEMSETTINGSWIDGET_H

#include <QWidget>
class QLineEdit;
class QPushButton;
class QCheckBox;
class QTextEdit;
class QGridLayout;
namespace Ui {
class SystemSettingsWidget;
}

class SystemSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SystemSettingsWidget(QWidget *parent = nullptr);
    ~SystemSettingsWidget();

private:
    void createUI();
    void browseDatabasePath();
    void loadSettings();
    bool validatePasswordChange();
    void updatePassword();
     void saveSettings();
    QLineEdit* dbPathEdit;
    QPushButton* browseBtn;
    QLineEdit* oldPwdEdit;
    QLineEdit* newPwdEdit;
    QLineEdit* confirmPwdEdit;
    QCheckBox* cacheCheckBox;
    QPushButton* saveBtn;
    QTextEdit* versionInfoEdit;
    QGridLayout* mainLayout;

    Ui::SystemSettingsWidget *ui;
};

#endif // SYSTEMSETTINGSWIDGET_H
