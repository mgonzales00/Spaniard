#ifndef FINDREPLACEDIALOG_H
#define FINDREPLACEDIALOG_H

#include "codeeditor.h"

#include <QDialog>
#include <QPlainTextEdit>
#include <QRegularExpression>
#include <QMessageBox>

namespace Ui {
class FindReplaceDialog;
}

class FindReplaceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FindReplaceDialog(QWidget *parent = nullptr);
    ~FindReplaceDialog();

    void SetEditor(CodeEditor *Editor);
    CodeEditor *GetEditor();

    void FindReplace(bool Replace=false);

private slots:
    void on_findNextButton_clicked();
    void on_findCancelButton_clicked();
    void on_replaceButton_clicked();
    void on_replaceAllButton_clicked();
    void on_replaceCancelButton_clicked();

private:
    Ui::FindReplaceDialog *ui;
    //QPlainTextEdit *PlainTextEditor;
    CodeEditor *SpaniardEditor;
};

#endif // FINDREPLACEDIALOG_H
