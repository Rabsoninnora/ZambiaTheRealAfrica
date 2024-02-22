/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#include "addpackage.h"
#include "ui_addpackage.h"

AddPackage::AddPackage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddPackage)
{
    ui->setupUi(this);
}

AddPackage::~AddPackage()
{
    delete ui;
}

void AddPackage::on_btnSave_clicked()
{
    QString packageName = ui->txtPackageName->text();
    QString packageDescription = ui->txtDescription->toPlainText();
    QString Amount = ui->txtAmount->text();

    qDebug()<<"Package Name"<<packageName<<"Package Description :"<<packageDescription<<"Amount :"<<Amount;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/home/rabson/database/ZambiaTheRealAfrica.db");

    if(QFile::exists("/home/rabson/database/ZambiaTheRealAfrica.db")){
        qDebug()<<"Databasefile exists";
    } else{
        qDebug()<<"Database File doesn't exist";
        return;
    }

    if(!database.open()){

        qDebug()<<"Error: unable to open Database";
        return;
    } else{
        qDebug() <<"Database opened successfully";
    }

    QSqlQuery query(database);

    query.prepare("insert into Package (PackageName, PackageDescription, Amount) values ('"+ packageName +"', '"+ packageDescription +"', '"+ Amount +"');");
    query.exec();
    qDebug()<<" Last error : "<< query.lastError().text();
    database.close();


}












