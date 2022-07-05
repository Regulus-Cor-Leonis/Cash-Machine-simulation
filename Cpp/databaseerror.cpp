#include "Headers/databaseerror.h"
#include "ui_databaseerror.h"

DatabaseError::DatabaseError(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DatabaseError)
{
    ui->setupUi(this);
    this->setFixedSize(430, 190);
}

DatabaseError::~DatabaseError()
{
    delete ui;
}

void DatabaseError::on_pushButton_2_clicked()
{
    this->close();
}
