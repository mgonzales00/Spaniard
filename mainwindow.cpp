#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "findreplacedialog.h"
#include "tabdistancedialog.h"
#include "codeeditor.h"

#include <QFile>
#include <QDebug>
#include <QFileDialog>
#include <QFontDialog>
#include <QToolButton>
#include <QTabBar>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QDir>
#include <qpushbutton.h>

void MainWindow::AddTab()
{
    QWidget *NewTab = new QWidget;
    QGridLayout *GridLayout = new QGridLayout(NewTab);
    CodeEditor *NewEditor = new CodeEditor;

    highlighter = new QSourceHighlite::QSourceHighliter(NewEditor->document());
    highlighter->setCurrentLanguage(QSourceHighlite::QSourceHighliter::CodeCpp);

    // Set a monospace font by default
    QFont Font("Courier", 12);
    NewEditor->setFont(Font);
    NewEditor->setTabStopDistance(QFontMetricsF(NewEditor->font()).horizontalAdvance(' ') * TabDistance);

    GridLayout->addWidget(NewEditor);
    ui->tabWidget->addTab(NewTab, "New Tab");

    // Set focus on latest tab
    ui->tabWidget->setCurrentIndex(ui->tabWidget->count() - 1);
    CurrentEditor = NewEditor;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->setTabsClosable(true);

    // Create a button to add a new tab
    QToolButton *NewTabButton = new QToolButton();
    NewTabButton->setIcon(QIcon(":/icons/plus.png"));

    // Put new tab button on the corner
    ui->tabWidget->setCornerWidget(NewTabButton, Qt::TopRightCorner);

    // Connect our new tab button to AddTab()
    connect(NewTabButton, &QToolButton::clicked, this, &MainWindow::AddTab);

    // Add first tab
    AddTab();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionOpen_triggered()
{
    // Create file dialog box
    QString FileName = QFileDialog::getOpenFileName(this, "Open a file", QDir::currentPath());
    this->setWindowTitle(FileName);

    QFile File(FileName);

    // Clear existing text box
    CurrentEditor->clear();

    if (!File.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::information(this, "File Open Error", "Could not open file.");
        return;
    }

    QTextStream Stream(&File);
    QString Line;

    while (!Stream.atEnd())
    {
        Line = Stream.readLine();
        CurrentEditor->appendPlainText(Line);
    }

    File.close();

    CurrentEditor->moveCursor(QTextCursor::Start);
    CurrentEditor->ensureCursorVisible();
}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter Printer;

    QPrintDialog PrintDialog(&Printer, this);
    PrintDialog.setWindowTitle("Print Document");
    if (PrintDialog.exec() == QDialog::Accepted)
    {
        CurrentEditor->print(&Printer);
    }
}

void MainWindow::on_actionFindReplace_triggered()
{
    FindReplaceDialog Form(this);

    // Give our find/replace class access to the content of document
    Form.SetEditor(CurrentEditor);
    Form.exec();
}

void MainWindow::on_actionCreateNew_triggered()
{
    QString NewFile = QFileDialog::getSaveFileName(this, "Create New File", "", "Text Files (*.txt);;All Files (*)");
    if (NewFile.isEmpty())
    {
        return;
    }

    QFile File(NewFile);

    // open() will create the file if it does not exist
    if (File.open(QIODevice::WriteOnly))
    {
        File.close();
    }

    else
    {
        QMessageBox::information(this, "File Error", "Could not create file.");
    }
}

void MainWindow::on_actionUndo_triggered()
{
    CurrentEditor->undo();
}

void MainWindow::on_actionRedo_triggered()
{
    CurrentEditor->redo();
}

void MainWindow::on_actionChangeFont_triggered()
{
    CurrentEditor->setFont(QFontDialog::getFont(0, CurrentEditor->font()));
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    QWidget *CurrentTab = ui->tabWidget->widget(index);
    if (CurrentTab) {
        // Find our CodeEditor object
        CurrentEditor = CurrentTab->findChild<CodeEditor *>();
    }
}

void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    if (index == 0)
        return;

    ui->tabWidget->removeTab(index);
}

void MainWindow::on_actionChangeTabDistance_triggered()
{
    TabDistanceDialog Dialog(this);

    Dialog.exec();
}

