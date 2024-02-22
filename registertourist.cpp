/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#include "registertourist.h"
#include "ui_registertourist.h"

RegisterTourist::RegisterTourist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::RegisterTourist)
{
    ui->setupUi(this);
}

RegisterTourist::~RegisterTourist()
{
    delete ui;
}


