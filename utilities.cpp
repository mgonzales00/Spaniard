#include "utilities.h"
#include <QMainWindow>
#include <QApplication>

Utilities::Utilities() {}

MainWindow *Utilities::GetMainWindow()
{
    for (QWidget *w : qApp->topLevelWidgets())
    {
        MainWindow *mainWindow = qobject_cast<MainWindow *>(w);
        if (mainWindow)
            return mainWindow;
    }

    return nullptr;
}
