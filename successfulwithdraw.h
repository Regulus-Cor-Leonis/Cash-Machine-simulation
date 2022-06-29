#ifndef SUCCESSFULWITHDRAW_H
#define SUCCESSFULWITHDRAW_H

#include <QMainWindow>

namespace Ui {
class SuccessfulWithdraw;
}

class SuccessfulWithdraw : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuccessfulWithdraw(QWidget *parent = nullptr);
    ~SuccessfulWithdraw();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::SuccessfulWithdraw *ui;
};

#endif // SUCCESSFULWITHDRAW_H
