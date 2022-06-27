#ifndef SUCCESSFULADD_H
#define SUCCESSFULADD_H

#include <QMainWindow>

namespace Ui {
class SuccessfulAdd;
}

class SuccessfulAdd : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuccessfulAdd(QWidget *parent = nullptr);
    ~SuccessfulAdd();

private:
    Ui::SuccessfulAdd *ui;
};

#endif // SUCCESSFULADD_H
