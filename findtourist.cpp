/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#include "findtourist.h"
#include "ui_findtourist.h"

FindTourist::FindTourist(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindTourist)
{
    ui->setupUi(this);
}

FindTourist::~FindTourist()
{
    delete ui;
}
