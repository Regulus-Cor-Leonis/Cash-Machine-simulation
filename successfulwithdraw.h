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

private:
    Ui::SuccessfulWithdraw *ui;
};

#endif // SUCCESSFULWITHDRAW_H
