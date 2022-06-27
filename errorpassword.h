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

private:
    Ui::ErrorPassword *ui;
};

#endif // ERRORPASSWORD_H
