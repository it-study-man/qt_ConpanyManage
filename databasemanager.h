#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>

class DataBaseManager : public QObject
{
    Q_OBJECT
public:
    static DataBaseManager& instance();
    void closeDatabase();
    bool openDatabase(const QString& path);
    QString getDatabasePath() const;
    void setDatabasePath(const QString& path);
    ~DataBaseManager();
private:
    explicit DataBaseManager(QObject *parent = nullptr);
    QSqlDatabase db;
    QString dbPath="C:/Users/lu'ju'cai/Desktop/StudentManagerSystem/sqllite/axbTechManSys.db";

signals:
};

#endif // DATABASEMANAGER_H
