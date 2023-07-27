#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtGui>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->juego = new Juego();//crear una instancia del juego
    this->refresh();
    this->timer = new QTimer(this);
    QObject::connect(this->timer, SIGNAL(timeout()),this, SLOT(on_timer()));
    this->timer->start(1000);//para que se active cada 1000 milisegundos (1 segundo).
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->timer->stop(); // Detener el temporizador
    int valor = this->ui->spinBox->value();//Obtiene el valor ingresado por el jugador en el spinBox.
    if (this->juego->estaBien(valor)) {//verificar si el número ingresado es correcto.
        QMessageBox::information(this,"Ganaste!!", "Tu puntaje es " + QString::number(juego->getPuntos()));
    } else {
        QMessageBox::warning(this,"Perdiste !!","Tu puntaje es " + QString::number(juego->getPuntos()));
    }
}

void MainWindow::on_timer()
{
    int time = this->ui->lcdNumber->intValue();
    this->ui->lcdNumber->display(time + 1);
    if (time >= 10) {
        auto palette = this->ui->lcdNumber->palette();
        palette.setColor(palette.WindowText, QColor(255, 0, 0));
        this->ui->lcdNumber->setPalette(palette);
    }
    if (time >= 20) {
        this->on_pushButton_clicked();
    }
}

void MainWindow::refresh()
{
    this->ui->label->setText(QString::number(juego->getNro1()));
    this->ui->label_2->setText(QString::number(juego->getNro2()));
    this->ui->label_3->setText(QString::number(juego->getNro4()));
    this->ui->puntaje->setText(QString::number(juego->getPuntos()));
    this->ui->spinBox->setValue(0);

    auto palette = this->ui->lcdNumber->palette();
    palette.setColor(palette.WindowText, QColor(0, 0, 0));
    this->ui->lcdNumber->setPalette(palette);
    this->ui->lcdNumber->display(0);
}


void MainWindow::on_pushButton_2_clicked()
{
    this->refresh();//Llama al método refresh() para actualizar la interfaz después de cada intento.
    this->timer->start(1000);
}

