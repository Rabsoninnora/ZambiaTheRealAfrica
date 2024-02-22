/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#include "zambiatherealafrica.h"
#include "ui_zambiatherealafrica.h"

ZambiaTheRealAfrica::ZambiaTheRealAfrica(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ZambiaTheRealAfrica)
{
    ui->setupUi(this);
    ptrAddPackage = new AddPackage();
    ptrFindPackage = new FindPackage();
    ptrFindTourist = new FindTourist();
    ptrRegisterTourist = new RegisterTourist();
}

ZambiaTheRealAfrica::~ZambiaTheRealAfrica()
{    delete ptrAddPackage;
     delete ptrFindPackage;
    delete  ptrFindTourist;
    delete ptrRegisterTourist;
    delete ui;
}

void ZambiaTheRealAfrica::on_pushButton_clicked()
{
    ptrAddPackage->show();
}


void ZambiaTheRealAfrica::on_pushButton_2_clicked()
{
    ptrFindPackage->show();
}


void ZambiaTheRealAfrica::on_pushButton_3_clicked()
{
    ptrFindTourist->show();
}


void ZambiaTheRealAfrica::on_pushButton_4_clicked()
{
   ptrRegisterTourist->show();

}

