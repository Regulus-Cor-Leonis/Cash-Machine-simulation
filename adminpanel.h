#ifndef ADMINPANEL_H
#define ADMINPANEL_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include "db.h"

namespace Ui {
class AdminPanel;
}

class AdminPanel : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminPanel(QWidget *parent = nullptr);
    ~AdminPanel();

private:
    Ui::AdminPanel *ui;

private slots:
    void showTime();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_tableView_clicked(const QModelIndex &index);
};

#endif // ADMINPANEL_H
