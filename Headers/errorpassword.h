#ifndef ERRORPASSWORD_H
#define ERRORPASSWORD_H

#include <QMainWindow>

namespace Ui {
class ErrorPassword;
}

class ErrorPassword : public QMainWindow
{
    Q_OBJECT

public:
    explicit ErrorPassword(QWidget *parent = nullptr);
    ~ErrorPassword();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::ErrorPassword *ui;
};

#endif // ERRORPASSWORD_H
