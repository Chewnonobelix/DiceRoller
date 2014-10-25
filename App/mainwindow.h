#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QMediaPlayer>
#include "../Dice/dice.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QMediaPlayer m_lecteur;
    Ui::MainWindow *ui;
    Dice m_dice;

public slots:
    void reset();
    void roll();
    void volume(int);
    void changeState(int);
};

#endif // MAINWINDOW_H
