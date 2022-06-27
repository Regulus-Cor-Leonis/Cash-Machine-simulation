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

private:
    Ui::NoBills *ui;
};

#endif // NOBILLS_H
