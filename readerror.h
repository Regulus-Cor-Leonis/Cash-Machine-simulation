#ifndef READERROR_H
#define READERROR_H

#include <QMainWindow>

namespace Ui {
class ReadError;
}

class ReadError : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReadError(QWidget *parent = nullptr);
    ~ReadError();

private:
    Ui::ReadError *ui;
};

#endif // READERROR_H
