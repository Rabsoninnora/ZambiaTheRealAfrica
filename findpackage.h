/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#ifndef FINDPACKAGE_H
#define FINDPACKAGE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class FindPackage;
}

class FindPackage : public QDialog
{
    Q_OBJECT

public:
    explicit FindPackage(QWidget *parent = nullptr);
    ~FindPackage();

private slots:
    void on_btnFindPackage_clicked();

private:
    Ui::FindPackage *ui;
};

#endif // FINDPACKAGE_H
