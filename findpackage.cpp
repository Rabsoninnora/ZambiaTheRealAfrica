/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#include "findpackage.h"
#include "ui_findpackage.h"
#include <QtSql/QSqlTableModel>

using namespace std;

FindPackage::FindPackage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindPackage)
{
    ui->setupUi(this);
}

FindPackage::~FindPackage()
{
    delete ui;
}

void FindPackage::on_btnFindPackage_clicked()
{
    QString packageName = ui->txtPackageName->text();

    qDebug()<<"Package Name"<<packageName;

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

    query.prepare("select * from Package where PackageName like ='%"+ packageName +"');");
    query.exec();
    qDebug()<<" Last error : "<< query.lastError().text();



   // if(model==NULL){
//        model= new QSqlQueryModel();

   // }

  //  model->setQuery(std::move(query));
  //  ui->tableView->setModel(model);
    ui->tableView->setColumnWidth(0,200);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,200);
     //
     database.close();


}

