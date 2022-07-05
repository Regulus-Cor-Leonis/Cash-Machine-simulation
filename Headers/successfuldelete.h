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

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::SuccessfulDelete *ui;
};

#endif // SUCCESSFULDELETE_H
