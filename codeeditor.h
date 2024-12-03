#ifndef CODEEDITOR_H
#define CODEEDITOR_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QTextBlock>
#include <QPlainTextEdit>

class CodeEditor : public QPlainTextEdit
{
    Q_OBJECT
public:
    CodeEditor(QWidget *parent = nullptr);

    void LineNumberAreaPaintEvent(QPaintEvent *Event);
    int LineNumberAreaWidth();
    QColor LineColor = QColor(Qt::darkYellow);

protected:
    void resizeEvent(QResizeEvent *Event) override;

private slots:
    void UpdateLineNumberAreaWidth(int NewBlockCount);
    void HighlightCurrentLine();
    void UpdateLineNumberArea(const QRect &Rectangle, int dy);

private:
    QWidget *lineNumberArea;
};



#endif // CODEEDITOR_H
