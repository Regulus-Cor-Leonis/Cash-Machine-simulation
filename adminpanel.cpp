#include "adminpanel.h"
#include "ui_adminpanel.h"

AdminPanel::AdminPanel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AdminPanel)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("Enter value");
    ui->lineEdit_2->setPlaceholderText("Enter number");

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    QDateTime dateTime = QDateTime::currentDateTime();
    QString dateTimeText = dateTime.toString();
    ui->label_4->setText(dateTimeText);

    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

AdminPanel::~AdminPanel()
{
    delete ui;
}

void AdminPanel::showTime()
{
    QTime time = QTime::currentTime();
    QString timeText = time.toString("hh : mm : ss");
    ui->label_3->setText(timeText);
}

void AdminPanel::on_pushButton_3_clicked()
{
    DB* db = DB::getInstance();
    if (ui->lineEdit->text() != "" && ui->lineEdit_2->text() != ""){
        Cash cash;
        cash.set_denomination(ui->lineEdit->text().toInt());
        cash.set_count(ui->lineEdit_2->text().toInt());
        db->insertBillsIntoDB(cash);
    }
}


void AdminPanel::on_pushButton_4_clicked()
{
    DB* db = DB::getInstance();
    ui->tableView->setModel(db->getBillsModelFromDB());
}

