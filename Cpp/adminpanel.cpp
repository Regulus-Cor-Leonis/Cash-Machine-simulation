#include "Headers\adminpanel.h"
#include "ui_adminpanel.h"
#include "Headers\mainwindow.h"
#include <QFileDialog>
#include "Headers\successfuladd.h"
#include "Headers\successfuldelete.h"
#include "Headers\successfulupdate.h"
#include "Headers\readerror.h"

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


//pushbutton Add
void AdminPanel::on_pushButton_3_clicked()
{
    if (ui->lineEdit->text() != "" && ui->lineEdit_2->text() != ""){
        DB* db = DB::getInstance();
        Cash cash;
        bool ok1,ok2;
        int den=ui->lineEdit->text().toInt(&ok1,10);
        int cnt=ui->lineEdit_2->text().toInt(&ok2,10);
        if ((ok1) && (ok2) && (den>0) && (cnt>0)){
            cash.setDenomination(den);
            cash.setCount(cnt);
            db->insertBillsIntoDB(cash);
            ui->tableView->setModel(db->getBillsModelFromDB());
            SuccessfulAdd *w = new SuccessfulAdd;
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
        } else{
            ReadError *w=new ReadError;
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
        }
    }
}

//pushbutton Edit
void AdminPanel::on_pushButton_4_clicked()
{
    if (ui->lineEdit->text() != "" && ui->lineEdit_2->text() != ""){
        bool ok1,ok2;
        int den=ui->lineEdit->text().toInt(&ok1,10);
        int cnt=ui->lineEdit_2->text().toInt(&ok2,10);
        DB* db = DB::getInstance();
        Cash cash;
        if ((ok1) && (ok2) && (den>0) && (cnt>0)){
            cash.setDenomination(den);
            cash.setCount(cnt);
            db->updateBillsInDB(cash);
            ui->tableView->setModel(db->getBillsModelFromDB());
            SuccessfulUpdate *w = new SuccessfulUpdate;
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
        } else {
            ReadError *w=new ReadError;
            w->setAttribute(Qt::WA_DeleteOnClose);
            w->show();
            ui->lineEdit->setText("");
            ui->lineEdit_2->setText("");
        }
    }
}

//pushbutton Delete
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
        w->setAttribute(Qt::WA_DeleteOnClose);
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

//pushbutton exit
void AdminPanel::on_pushButton_10_clicked()
{
    MainWindow *w=new MainWindow;
    w->setAttribute(Qt::WA_DeleteOnClose);
    w->setATM(ATM);
    w->show();
    this->close();
}

//pushbutton Database
void AdminPanel::on_pushButton_7_clicked()
{//база даних
    DB* db = DB::getInstance();
    ui->pushButton_3->setEnabled(true);
    ui->pushButton_4->setEnabled(true);
    ui->pushButton_5->setEnabled(true);
    ATM=db->getBillsFromDB();
    ui->tableView->setModel(db->getBillsModelFromDB());
    ui->tableView->horizontalHeader()->show();
    for (int i = 0; i < ui->tableView->model()->rowCount(); ++i){
        ui->tableView->showRow(i);
    }
}

QList<Cash> readJson(QString fileName){
    QFile file;
    file.setFileName(fileName);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QByteArray bytes = file.readAll();
        file.close();
        QJsonParseError jsonError;
        QJsonDocument document = QJsonDocument::fromJson( bytes, &jsonError );
        if( jsonError.error != QJsonParseError::NoError )
        {
            qDebug() << "Can't open";
            return QList<Cash>();
        }
        if( document.isObject() )
        {
            QJsonObject jsonObj = document.object();
            QVariantMap cashMap = jsonObj.toVariantMap();
            QList<Cash> atm;

            QMapIterator<QString, QVariant> i(cashMap);
            Cash bill;
            while (i.hasNext()){
                i.next();
                bill.setDenomination(i.key().toUInt());
                bill.setCount(i.value().toUInt());
                atm.append(bill);
            }
            return atm;
        }

    }
    else {
        qDebug() << "Can't open";
    }
    return QList<Cash>();
}

//pushbutton Configuration file
void AdminPanel::on_pushButton_9_clicked()
{//файл
    ui->lineEdit->setText("");
    ui->lineEdit_2->setText("");
    for (int i = 0; i < ui->tableView->model()->rowCount(); ++i){
        ui->tableView->hideRow(i);
    }
    ui->tableView->horizontalHeader()->hide();
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"data",tr("Configuration (*.json)"));
    qDebug()<<fileName;
    ui->pushButton_3->setEnabled(false);
    ui->pushButton_4->setEnabled(false);
    ui->pushButton_5->setEnabled(false);
    ATM=readJson(fileName);
}
