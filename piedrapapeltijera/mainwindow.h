#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "juego.h"
#include <QMainWindow>

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
    void on_piedra_clicked();
    void on_papel_clicked();
    void on_tijera_clicked();

private:
    Ui::MainWindow *ui;
    Juego* juego;
    void refresh();
};
#endif // MAINWINDOW_H
