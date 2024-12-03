#ifndef TABDISTANCEDIALOG_H
#define TABDISTANCEDIALOG_H

#include <QDialog>
#include <QMainWindow>
#include "mainwindow.h"

namespace Ui {
class TabDistanceDialog;
}

class TabDistanceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TabDistanceDialog(QWidget *parent = nullptr);
    ~TabDistanceDialog();

private slots:
    void on_horizontalSlider_sliderMoved(int position);

    void on_tabSizeButtonBox_accepted();

private:
    Ui::TabDistanceDialog *ui;

};

#endif // TABDISTANCEDIALOG_H
