#ifndef FINANCIALWIDGET_H
#define FINANCIALWIDGET_H

#include <QWidget>
class QChartView;
class QTableWidget;
class QComboBox;
class QPushButton;
class QDateEdit;
namespace Ui {
class FinancialWidget;
}

class FinancialWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FinancialWidget(QWidget *parent = nullptr);
    ~FinancialWidget();

private:
    void setupUI();
    void loadFinancialRecords();
    void populateStudentComboBox();
    void addRecord();
    void updateChart();
    void updatePieChart();
    void editRecord();
    void deleteRecord();
    QChartView* pieChartView;
    QTableWidget* tableWidget;
    QComboBox* studentComboBox;
    QPushButton* addButton;
    QPushButton* deleteButton;
    QPushButton* editButton;
    QChartView* chartView;
    QDateEdit* startDateEdit;
    QDateEdit* endDateEdit;

    Ui::FinancialWidget *ui;
};

#endif // FINANCIALWIDGET_H
