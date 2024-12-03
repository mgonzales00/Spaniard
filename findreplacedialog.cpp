#include "findreplacedialog.h"
#include "ui_findreplacedialog.h"

FindReplaceDialog::FindReplaceDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindReplaceDialog)
{
    ui->setupUi(this);
    this->setFixedSize(this->geometry().width(), this->geometry().height());
}

FindReplaceDialog::~FindReplaceDialog()
{
    delete ui;
}

void FindReplaceDialog::on_findNextButton_clicked()
{
    FindReplace();
}

// Setter for plaintext editor
void FindReplaceDialog::SetEditor(CodeEditor *Editor)
{
    SpaniardEditor = Editor;
}

// Getter for plaintext editor
CodeEditor *FindReplaceDialog::GetEditor()
{
    return SpaniardEditor;
}

void FindReplaceDialog::on_findCancelButton_clicked()
{
    this->close();
}

void FindReplaceDialog::FindReplace(bool Replace)
{
    QString Query = {};
    QString ReplaceWith = {};

    // We are in replace mode
    if (Replace)
    {
        Query = ui->replaceSearchLineEdit->text();
        ReplaceWith = ui->replaceWithLineEdit->text();
    }

    // We are in find mode
    else
    {
        Query = ui->findSearchLineEdit->text();
    }

    CodeEditor *Editor = GetEditor();
    QTextCursor Cursor = Editor->textCursor();

    if (Query.isEmpty())
    {
        QMessageBox::information(this, "Empty Search Field", "Please enter a word before searching.");
        return;
    }

    QTextDocument::FindFlags Options;

    if (Replace)
    {
        if (!ui->replaceUpButton->isChecked() && !ui->replaceDownButton->isChecked())
        {
            QMessageBox::information(this, "No Direction Selected", "Please provide a search direction.");
            return;
        }

        if (ui->replaceMatchCaseCheckBox->isChecked())
        {
            Options |= QTextDocument::FindCaseSensitively;
        }

        if (ui->replaceWholeWordsCheckBox->isChecked())
        {
            Options |= QTextDocument::FindWholeWords;
        }

        // Determine direction
        if (ui->replaceUpButton->isChecked())
        {
            Options |= QTextDocument::FindBackward;
        }

        // Attempt to find the text
        if (!Editor->find(Query, Options))
        {
            QMessageBox::information(this, "Not Found", "The text was not found.");
        }

        // Replace text
        if (Cursor.hasSelection())
        {
            Cursor.insertText(ReplaceWith);
            Editor->setTextCursor(Cursor);
        }
    }
    else
    {
        if (!ui->findUpButton->isChecked() && !ui->findDownButton->isChecked())
        {
            QMessageBox::information(this, "No Direction Selected", "Please provide a search direction.");
            return;
        }

        if (ui->findMatchCaseCheckBox->isChecked())
        {
            Options |= QTextDocument::FindCaseSensitively;
        }

        if (ui->findWholeWordsCheckBox->isChecked())
        {
            Options |= QTextDocument::FindWholeWords;
        }

        // Determine direction
        if (ui->findUpButton->isChecked())
        {
            Options |= QTextDocument::FindBackward;
        }

        // Attempt to find the text
        if (!Editor->find(Query, Options))
        {
            QMessageBox::information(this, "Not Found", "The text was not found.");
        }
    }
}

void FindReplaceDialog::on_replaceButton_clicked()
{
    FindReplace(true);
}


void FindReplaceDialog::on_replaceAllButton_clicked()
{
    QString Query = ui->replaceSearchLineEdit->text();
    QString ReplaceWith = ui->replaceWithLineEdit->text();
    CodeEditor *Editor = GetEditor();

    Editor->moveCursor(QTextCursor::Start);

    while (Editor->find(Query))
    {
        // find() pushes the cursor to the next match and selects it
        QTextCursor Cursor = Editor->textCursor();
        // Replace selected text with new text
        Cursor.insertText(ReplaceWith);
    }
}


void FindReplaceDialog::on_replaceCancelButton_clicked()
{
    this->close();
}

