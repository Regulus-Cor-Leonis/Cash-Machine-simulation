#ifndef EXITMESSAGE_H
#define EXITMESSAGE_H

#include <QMainWindow>

namespace Ui {
class ExitMessage;
}

class ExitMessage : public QMainWindow
{
    Q_OBJECT

public:
    explicit ExitMessage(QWidget *parent = nullptr);
    ~ExitMessage();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ExitMessage *ui;
};

#endif // EXITMESSAGE_H
