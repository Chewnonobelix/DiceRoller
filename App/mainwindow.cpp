#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString athena = QApplication::applicationDirPath();
    m_lecteur.setMedia(QUrl::fromLocalFile(athena+"/Sound/des.wma"));
    m_lecteur.setVolume(100);
    ui->volume->setAttribute(Qt::WA_AlwaysShowToolTips, true);
    connect(ui->reset, SIGNAL(clicked()), this, SLOT(reset()));
    connect(ui->roll, SIGNAL(clicked()), this, SLOT(roll()));
    connect(ui->volume, SIGNAL(sliderMoved(int)), this, SLOT(volume(int)));
    connect(ui->comboBox, SIGNAL(currentIndexChanged(int)), this,
            SLOT(changeState(int)));

    ui->retranslateUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::reset()
{
    ui->number->setValue(1);
    ui->type->setValue(Dice::dix);
}

void MainWindow::roll()
{
    if(m_dice.isEnum(ui->type->value()))
    {
        ui->resultat->clear();
        if(!ui->mute->isChecked())
        {
            m_lecteur.play();
        }
        switch(ui->comboBox->currentIndex())
        {
        case 0:
            ui->resultat->addItem(QString::number(
                                      m_dice.roll((Dice::dice)ui->type->value(),
                                                  ui->number->value())));
            break;
        case 1:
            QVector<int> janus = m_dice.roll((Dice::dice)ui->type->value(),
                                             ui->number->value(),
                                             ui->par->value());

            foreach(int mercure, janus)
            {
                ui->resultat->addItem(QString::number(mercure));
            }

            break;
        }
    }
    else
    {
        QMessageBox::warning(0, tr("Type incorrect"),
                             QString()+tr("Type de dès non reconnue \n") +
                             tr("Type reconnue: 2,4,6,8,10,12,20,100"));
    }
}

void MainWindow::volume(int v)
{
    m_lecteur.setVolume(v);
    ui->volume->setToolTip(QString::number((v)));
    ui->volume->setWhatsThis(QString::number((v)));
}

void MainWindow::changeState(int i)
{
    if(i == 1)
    {
        ui->par->setEnabled(true);
    }
    else
    {
        ui->par->setEnabled(false);
    }
}
