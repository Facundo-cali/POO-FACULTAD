#include "mainwindow.h"
#include "contacto.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Crear el modelo de datos
    modeloContactos = new QStandardItemModel(this);
    // Asignar el modelo al QListView
    ui->listView->setModel(modeloContactos);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_boton_clicked()
{
    QString nom = ui->nombre->text();
    QString telefono = ui->telefono->text();
    QString email = ui->email->text();

    // Convertir los QString a cadenas de caracteres char*
    QByteArray nombreBytes = nom.toUtf8();
    char* nombreChar = nombreBytes.data();

    QByteArray telefonoBytes = telefono.toUtf8();
    char* telefonoChar = telefonoBytes.data();

    QByteArray emailBytes = email.toUtf8();
    char* emailChar = emailBytes.data();

    //Creo el nuevo contacto
    Contacto* nuevoContacto = new Contacto(nombreChar, telefonoChar, emailChar);

    // Agregar el contacto al vector de contactos
    contactos.append(nuevoContacto);

    while (i < contactos.length()) {
        Contacto* contactoActual = contactos[i];

        // También puedes mostrar los detalles completos en otra parte de la interfaz
        QString detalleContacto = QString("Nombre: %1\nTeléfono: %2\nEmail: %3")
                .arg(QString::fromUtf8(contactoActual->getNombre()))
                .arg(QString::fromUtf8(contactoActual->getTel()))
                .arg(QString::fromUtf8(contactoActual->getEmail()));


        QStandardItem* itemContacto = new QStandardItem(detalleContacto);

        modeloContactos->appendRow(itemContacto);

        // Línea de separación entre cada contacto
        QStandardItem* itemSeparador = new QStandardItem("------------------------------------");
        modeloContactos->appendRow(itemSeparador);

        // Limpia los QLineEdit después de agregar el contacto
        ui->nombre->clear();
        ui->telefono->clear();
        ui->email->clear();

        i++;
    }
}




