#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "mainwindow.h"
#include "successfuladd.h"
#include "successfuldelete.h"
#include "successfulupdate.h"


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

    DB* db = DB::getInstance();
    ui->tableView->setModel(db->getBillsModelFromDB());

    this->setFixedSize(1280, 780);

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
    if (ui->lineEdit->text() != "" && ui->lineEdit_2->text() != ""){
        DB* db = DB::getInstance();
        Cash cash;
        cash.setDenomination(ui->lineEdit->text().toInt());
        cash.setCount(ui->lineEdit_2->text().toInt());
        db->insertBillsIntoDB(cash);
        ui->tableView->setModel(db->getBillsModelFromDB());
        SuccessfulAdd *w = new SuccessfulAdd;
        w->show();
    }
}


void AdminPanel::on_pushButton_4_clicked()
{
    if (ui->lineEdit->text() != "" && ui->lineEdit_2->text() != ""){
        DB* db = DB::getInstance();
        Cash cash;
        cash.setDenomination(ui->lineEdit->text().toInt());
        cash.setCount(ui->lineEdit_2->text().toInt());
        db->updateBillsInDB(cash);
        ui->tableView->setModel(db->getBillsModelFromDB());
        SuccessfulUpdate *w = new SuccessfulUpdate;
        w->show();
    }
}


void AdminPanel::on_pushButton_5_clicked()
{
    QItemSelectionModel *select = ui->tableView->selectionModel();
    if (select->hasSelection()){
        DB* db = DB::getInstance();
        int rowIndex = select->selectedIndexes().begin()->row();
        const uint bill = ui->tableView->model()->index(rowIndex, 0).data().toUInt();
        db->deleteBillsFromDB(bill);
        ui->tableView->setModel(db->getBillsModelFromDB());
        SuccessfulDelete *w = new SuccessfulDelete;
        w->show();
    }
}


void AdminPanel::on_tableView_clicked(const QModelIndex &index)
{
    if (index.column() == 0){
    ui->lineEdit->setText(ui->tableView->model()->data(index).toString());
    ui->lineEdit_2->setText(ui->tableView->model()->data(index.siblingAtColumn(1)).toString());
    }
    else if (index.column() == 1){
        ui->lineEdit->setText(ui->tableView->model()->data(index.siblingAtColumn(0)).toString());
        ui->lineEdit_2->setText(ui->tableView->model()->data(index).toString());
    }
}


void AdminPanel::on_pushButton_10_clicked()
{
    MainWindow *w = new MainWindow;
    w->show();
    this->close();
}

