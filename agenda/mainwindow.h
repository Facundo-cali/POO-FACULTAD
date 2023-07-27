#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "contacto.h"
#include <QMainWindow>
#include <QVector>
#include <QListView>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_boton_clicked();
private:
    Ui::MainWindow *ui;
    QVector<Contacto*> contactos; // Vector para almacenar los contactos
    QStandardItemModel* modeloContactos;
    int i = 0;
};
#endif // MAINWINDOW_H
