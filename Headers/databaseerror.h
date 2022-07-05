#ifndef DATABASEERROR_H
#define DATABASEERROR_H

#include <QMainWindow>

namespace Ui {
class DatabaseError;
}

class DatabaseError : public QMainWindow
{
    Q_OBJECT

public:
    explicit DatabaseError(QWidget *parent = nullptr);
    ~DatabaseError();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::DatabaseError *ui;
};

#endif // DATABASEERROR_H
