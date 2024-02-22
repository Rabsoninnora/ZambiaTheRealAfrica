/*
Zambia The Real Africa ::: Is A Tourist Management System
Developed By ::: Rabson Innocent Phiri
As A School Desktop Application Practice Project
In Preparation For The Final Year School Project Development
  */
#ifndef ZAMBIATHEREALAFRICA_H
#define ZAMBIATHEREALAFRICA_H
#include <QMainWindow>
#include"addpackage.h"
#include "findpackage.h"
#include "findtourist.h"
#include "registertourist.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class ZambiaTheRealAfrica;
}
QT_END_NAMESPACE

class ZambiaTheRealAfrica : public QMainWindow
{
    Q_OBJECT

public:
    ZambiaTheRealAfrica(QWidget *parent = nullptr);
    ~ZambiaTheRealAfrica();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::ZambiaTheRealAfrica *ui;
    AddPackage *ptrAddPackage;
    FindPackage *ptrFindPackage;
    FindTourist *ptrFindTourist;
    RegisterTourist *ptrRegisterTourist;

};
#endif // ZAMBIATHEREALAFRICA_H
