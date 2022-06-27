#ifndef SUCCESSFULDELETE_H
#define SUCCESSFULDELETE_H

#include <QMainWindow>

namespace Ui {
class SuccessfulDelete;
}

class SuccessfulDelete : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuccessfulDelete(QWidget *parent = nullptr);
    ~SuccessfulDelete();

private:
    Ui::SuccessfulDelete *ui;
};

#endif // SUCCESSFULDELETE_H
