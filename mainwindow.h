#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFontMetricsF>
#include "codeeditor.h"
#include "qsourcehighliter.h"

constexpr static int MaxTabDistance = 32;

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    CodeEditor *CurrentEditor = nullptr;
    QSourceHighlite::QSourceHighliter *highlighter;

    // Getters and setters for tab distance
    void SetTabDistance(int Distance)
    {
        // Set max tab distance to something reasonable
        if (Distance > MaxTabDistance)
            Distance = MaxTabDistance;

        TabDistance = Distance;
        CurrentEditor->setTabStopDistance(QFontMetricsF(CurrentEditor->font()).horizontalAdvance(' ') * Distance);
    }

    int GetTabDistance()
    {
        return TabDistance;
    }


private slots:
    void on_actionOpen_triggered();

    void on_actionPrint_triggered();

    void on_actionFindReplace_triggered();

    void on_actionCreateNew_triggered();

    void on_actionUndo_triggered();

    void on_actionRedo_triggered();

    void on_actionChangeFont_triggered();

    void on_tabWidget_currentChanged(int index);

    void on_tabWidget_tabCloseRequested(int index);

    void on_actionChangeTabDistance_triggered();

private:
    Ui::MainWindow *ui;
    int TabDistance = 4;
    void AddTab();
};
#endif // MAINWINDOW_H
