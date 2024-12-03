#include "tabdistancedialog.h"
#include "ui_tabdistancedialog.h"
#include "mainwindow.h"
#include "utilities.h"

TabDistanceDialog::TabDistanceDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TabDistanceDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());
    ui->tabSizeLineEdit->setText(QString("%1").arg(Utilities::GetMainWindow()->GetTabDistance()));
}

TabDistanceDialog::~TabDistanceDialog()
{
    delete ui;
}

void TabDistanceDialog::on_horizontalSlider_sliderMoved(int position)
{
    int Value = (position + 1) * 2;
    ui->tabSizeLineEdit->setText(QString("%1").arg(Value));
}


void TabDistanceDialog::on_tabSizeButtonBox_accepted()
{
    Utilities::GetMainWindow()->SetTabDistance(ui->tabSizeLineEdit->text().toInt());
}

