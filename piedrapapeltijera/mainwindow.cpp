#include "mainwindow.h"
#include "juego.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();//crear una instancia del juego
    this->refresh();
    this->ui->label->setText("Preparando");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refresh()
{
    if (juego->getContri() == 0) {
        this->ui->label->setText("Piedra");
    }else if(juego->getContri() == 1){
        this->ui->label->setText("Papel");
    }else{
        this->ui->label->setText("Tijera");
    }
    this->ui->puntos_contri->setText(QString::number(juego->getPuntosContri()));
    this->ui->puntos_jug->setText(QString::number(juego->getPuntosJug()));
    this->juego->generar();
}

void MainWindow::on_piedra_clicked()
{
    if (this->juego->resultado(0) == 1) {
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::information(this,"Empate!!", "Tu puntaje es " + QString::number(juego->getPuntosJug()));
    } else if(this->juego->resultado(0) == 2){
        this->juego->setPuntosContri();
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::warning(this,"Perdiste !!","Tu puntaje es " + QString::number(juego->getPuntosJug()));
    }else{
        this->juego->setPuntosJug();
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::warning(this,"Ganaste !!","Tu puntaje es " + QString::number(juego->getPuntosJug()));
    }
    this->ui->label->setText("Preparando");
}

void MainWindow::on_papel_clicked()
{
    if (this->juego->resultado(1) == 1) {//verificar si el número ingresado es correcto.
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::information(this,"Empate!!", "Tu puntaje es " + QString::number(juego->getPuntosJug()));
    } else if(this->juego->resultado(1) == 2){
        this->juego->setPuntosContri();
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::warning(this,"Perdiste !!","Tu puntaje es " + QString::number(juego->getPuntosJug()));
    }else{
        this->juego->setPuntosJug();
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::warning(this,"Ganaste !!","Tu puntaje es " + QString::number(juego->getPuntosJug()));
    }
    this->ui->label->setText("Preparando");
}

void MainWindow::on_tijera_clicked()
{
    if (this->juego->resultado(2) == 1) {//verificar si el número ingresado es correcto.
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::information(this,"Empate!!", "Tu puntaje es " + QString::number(juego->getPuntosJug()));
    } else if(this->juego->resultado(2) == 2){
        this->juego->setPuntosContri();
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::warning(this,"Perdiste !!","Tu puntaje es " + QString::number(juego->getPuntosJug()));
    }else{
        this->juego->setPuntosJug();
        this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
        QMessageBox::warning(this,"Ganaste !!","Tu puntaje es " + QString::number(juego->getPuntosJug()));
    }
    this->ui->label->setText("Preparando");
}




