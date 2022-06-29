#ifndef PASSWORD_H
#define PASSWORD_H

#include <QMainWindow>

namespace Ui {
class Password;
}

class Password : public QMainWindow
{
    Q_OBJECT

public:
    explicit Password(QWidget *parent = nullptr);
    ~Password();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Password *ui;
};

#endif // PASSWORD_H
