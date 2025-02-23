#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"Tila nyt"<<tila;
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Miinus->setEnabled(false);
    ui->Jako->setEnabled(false);
    ui->Kerto->setEnabled(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Plus_clicked()
{
    if(tila==3){

    QString num1Str = ui->num1->text();
    int num1  = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2  = num2Str.toInt();


    int result = num1+num2;
    qDebug() <<"Plus:" << result << "=" <<num1 << "+" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Miinus->setEnabled(false);
    ui->Jako->setEnabled(false);
    ui->Kerto->setEnabled(false);
    qDebug() << "Laskun jalkeen tila"<<tila;
    }
    else{
        qDebug()<<"Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_Miinus_clicked()
{
    if(tila==3){

    QString num1Str = ui->num1->text();
    int num1  = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2  = num2Str.toInt();


    int result = num1-num2;
    qDebug() <<"Miinus:" << result << "=" <<num1 << "-" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Miinus->setEnabled(false);
    ui->Jako->setEnabled(false);
    ui->Kerto->setEnabled(false);

    qDebug() << "Laskun jalkeen tila"<<tila;
    }
    else{
        qDebug()<<"Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_Kerto_clicked()
{
    if(tila==3){

    QString num1Str = ui->num1->text();
    int num1  = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2  = num2Str.toInt();


    int result = num1*num2;
    qDebug() <<"Kerto:" << result << "=" <<num1 << "*" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Miinus->setEnabled(false);
    ui->Jako->setEnabled(false);
    ui->Kerto->setEnabled(false);
    qDebug() << "Laskun jalkeen tila"<<tila;
    }
    else{
        qDebug()<<"Virhe! Molempia numeroita ei syötetty";
    }
}


void MainWindow::on_Jako_clicked()
{
    if(tila==3){

    QString num1Str = ui->num1->text();
    int num1  = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2  = num2Str.toInt();


    int result = num1/num2;
    qDebug() <<"Jako:" << result << "=" <<num1 << "*" << num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->Plus->setEnabled(false);
    ui->Miinus->setEnabled(false);
    ui->Jako->setEnabled(false);
    ui->Kerto->setEnabled(false);
    qDebug() << "Laskun jalkeen tila"<<tila;
    }
    else{
        qDebug()<<"Virhe! Molempia numeroita ei syötetty";
    }
}
void MainWindow::on_N1_clicked()
{
    QString str = ui->N1->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N2_clicked()
{
    QString str = ui->N2->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N3_clicked()
{
    QString str = ui->N3->text();
    int n =str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str = ui->N4->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N5_clicked()
{
    QString str = ui->N5->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N6_clicked()
{
    QString str = ui->N6->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N7_clicked()
{
    QString str = ui->N7->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N8_clicked()
{
    QString str = ui->N8->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N9_clicked()
{
    QString str = ui->N9->text();
    int n =str.toInt();
    numberClickHandler(n);
}
void MainWindow::on_N0_clicked()
{
    QString str = ui->N0->text();
    int n =str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero="<<n;
    QString str = QString::number(n);
    if (tila==1){
    qDebug() << "Elementti num1=";
    ui->num1->setText(str);
    } else if (tila==2){
    qDebug() << "Elementti num2=";
    ui->num2->setText(str);
    }
}
// en saanut toimimaan
/*void MainWindow::setActiveControls()
{
    if (tila==1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
        ui->Miinus->setEnabled(false);
        ui->Jako->setEnabled(false);
        ui->Kerto->setEnabled(false);
    } else if (tila==2) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
        ui->Miinus->setEnabled(false);
        ui->Jako->setEnabled(false);
        ui->Kerto->setEnabled(false);
    }else if (tila==3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->Plus->setEnabled(true);
        ui->Miinus->setEnabled(true);
        ui->Jako->setEnabled(true);
        ui->Kerto->setEnabled(true);

}

}*/
void MainWindow::on_enter_clicked()
{
    if (tila==3){
        tila=3;
    }else{
        tila++;
    }
   qDebug() << "Siirrytty tilaan"<<tila;
    if (tila==1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
        ui->Miinus->setEnabled(false);
        ui->Jako->setEnabled(false);
        ui->Kerto->setEnabled(false);
    } else if (tila==2) {
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->Plus->setEnabled(false);
        ui->Miinus->setEnabled(false);
        ui->Jako->setEnabled(false);
        ui->Kerto->setEnabled(false);
    }else if (tila==3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->Plus->setEnabled(true);
        ui->Miinus->setEnabled(true);
        ui->Jako->setEnabled(true);
        ui->Kerto->setEnabled(true);
    }
}

