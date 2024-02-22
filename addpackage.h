/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
*/
#ifndef ADDPACKAGE_H
#define ADDPACKAGE_H

#include <QDialog>
#include "databaseheader.h"


namespace Ui {
class AddPackage;
}

class AddPackage : public QDialog
{
    Q_OBJECT

public:
    explicit AddPackage(QWidget *parent = nullptr);
    ~AddPackage();

private slots:
    void on_btnSave_clicked();

private:
    Ui::AddPackage *ui;
};

#endif // ADDPACKAGE_H
