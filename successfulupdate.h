#ifndef SUCCESSFULUPDATE_H
#define SUCCESSFULUPDATE_H

#include <QMainWindow>

namespace Ui {
class SuccessfulUpdate;
}

class SuccessfulUpdate : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuccessfulUpdate(QWidget *parent = nullptr);
    ~SuccessfulUpdate();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::SuccessfulUpdate *ui;
};

#endif // SUCCESSFULUPDATE_H
