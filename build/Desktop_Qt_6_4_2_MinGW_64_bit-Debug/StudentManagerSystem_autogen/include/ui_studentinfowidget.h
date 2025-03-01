/********************************************************************************
** Form generated from reading UI file 'studentinfowidget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTINFOWIDGET_H
#define UI_STUDENTINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentInfoWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *btnAdd;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnDeleteItem;
    QPushButton *btnDeleteLine;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *StudentInfoWidget)
    {
        if (StudentInfoWidget->objectName().isEmpty())
            StudentInfoWidget->setObjectName("StudentInfoWidget");
        StudentInfoWidget->resize(1066, 542);
        horizontalLayout = new QHBoxLayout(StudentInfoWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        tableWidget = new QTableWidget(StudentInfoWidget);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setAutoScrollMargin(16);

        horizontalLayout->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnAdd = new QPushButton(StudentInfoWidget);
        btnAdd->setObjectName("btnAdd");

        verticalLayout->addWidget(btnAdd);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        btnDeleteItem = new QPushButton(StudentInfoWidget);
        btnDeleteItem->setObjectName("btnDeleteItem");

        verticalLayout->addWidget(btnDeleteItem);

        btnDeleteLine = new QPushButton(StudentInfoWidget);
        btnDeleteLine->setObjectName("btnDeleteLine");

        verticalLayout->addWidget(btnDeleteLine);

        verticalSpacer_3 = new QSpacerItem(20, 308, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(StudentInfoWidget);

        QMetaObject::connectSlotsByName(StudentInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *StudentInfoWidget)
    {
        StudentInfoWidget->setWindowTitle(QCoreApplication::translate("StudentInfoWidget", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("StudentInfoWidget", "\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("StudentInfoWidget", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("StudentInfoWidget", "\346\200\247\345\210\253", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("StudentInfoWidget", "\347\224\237\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("StudentInfoWidget", "\345\212\240\345\205\245\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("StudentInfoWidget", "\345\255\246\344\271\240\347\233\256\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("StudentInfoWidget", "\345\275\223\345\211\215\350\277\233\345\272\246", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("StudentInfoWidget", "\347\205\247\347\211\207", nullptr));
        btnAdd->setText(QCoreApplication::translate("StudentInfoWidget", "\346\267\273\345\212\240", nullptr));
        btnDeleteItem->setText(QCoreApplication::translate("StudentInfoWidget", "\345\210\240\351\231\244\351\241\271", nullptr));
        btnDeleteLine->setText(QCoreApplication::translate("StudentInfoWidget", "\345\210\240\351\231\244\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudentInfoWidget: public Ui_StudentInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTINFOWIDGET_H
