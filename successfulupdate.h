#ifndef SUCCESSFULUPDATE_H
#define SUCCESSFULUPDATE_H

#include <QMainWindow>

namespace Ui {
class SuccessfulUpdate;
}

class SuccessfulUpdate : public QMainWindow
{
    Q_OBJECT

public:
    explicit SuccessfulUpdate(QWidget *parent = nullptr);
    ~SuccessfulUpdate();

private:
    Ui::SuccessfulUpdate *ui;
};

#endif // SUCCESSFULUPDATE_H
