#ifndef NOBILLS_H
#define NOBILLS_H

#include <QMainWindow>

namespace Ui {
class NoBills;
}

class NoBills : public QMainWindow
{
    Q_OBJECT

public:
    explicit NoBills(QWidget *parent = nullptr);
    ~NoBills();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::NoBills *ui;
};

#endif // NOBILLS_H
