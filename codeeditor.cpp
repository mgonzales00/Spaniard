#include "codeeditor.h"
#include "linenumberarea.h"

CodeEditor::CodeEditor(QWidget *parent) : QPlainTextEdit(parent)
{
    lineNumberArea = new LineNumberArea(this);

    connect(this, &CodeEditor::blockCountChanged, this, &CodeEditor::UpdateLineNumberAreaWidth);
    // QEvent::UpdateRequest - Event signaling widget should be repainted
    connect(this, &CodeEditor::updateRequest, this, &CodeEditor::UpdateLineNumberArea);
    connect(this, &CodeEditor::cursorPositionChanged, this, &CodeEditor::HighlightCurrentLine);

    UpdateLineNumberAreaWidth(0);
    HighlightCurrentLine();
}

// Calculates the width of the line number widget
int CodeEditor::LineNumberAreaWidth()
{
    int Digits = 1;
    int Max = qMax(1, blockCount());

    // Find out how many digits we need
    while (Max >= 10)
    {
        Max /= 10;
        ++Digits;
    }

    // Calculates pixel width of largest line number multiplied by the number of digits
    int Space = fontMetrics().horizontalAdvance(QLatin1Char('9')) * Digits;

    return Space;
}

void CodeEditor::UpdateLineNumberAreaWidth(int newBlockCount)
{
    setViewportMargins(LineNumberAreaWidth(), 0, 0, 0);
}

// Update line number area if size of editor changes
void CodeEditor::resizeEvent(QResizeEvent *e)
{
    QPlainTextEdit::resizeEvent(e);

    QRect cr = contentsRect();
    lineNumberArea->setGeometry(QRect(cr.left(), cr.top(), LineNumberAreaWidth(), cr.height()));
}

void CodeEditor::UpdateLineNumberArea(const QRect &Rect, int dy)
{
    // Scroll down if downward pixels are passed
    if (dy)
        lineNumberArea->scroll(0, dy);
    // Draw line number rectangle
    else
        lineNumberArea->update(0, Rect.y(), lineNumberArea->width(), Rect.height());

    if (Rect.contains(viewport()->rect()))
        UpdateLineNumberAreaWidth(0);
}

// Highlight current line text cursor is on
void CodeEditor::HighlightCurrentLine()
{
    QList<QTextEdit::ExtraSelection> ExtraSelections;

    if (!isReadOnly())
    {
        QTextEdit::ExtraSelection Selection;

        Selection.format.setBackground(LineColor);
        Selection.format.setProperty(QTextFormat::FullWidthSelection, true);
        Selection.cursor = textCursor();
        // Clear cursor to prevent multiple lines from being highlighted
        Selection.cursor.clearSelection();
        ExtraSelections.append(Selection);
    }

    setExtraSelections(ExtraSelections);
}

void CodeEditor::LineNumberAreaPaintEvent(QPaintEvent *Event)
{
    // Paint line number widget
    QPainter Painter(lineNumberArea);
    Painter.fillRect(Event->rect(), Qt::lightGray);

    QTextBlock Block = firstVisibleBlock();
    int BlockNumber = Block.blockNumber();
    int Top = qRound(blockBoundingGeometry(Block).translated(contentOffset()).top());
    int Bottom = Top + qRound(blockBoundingRect(Block).height());

    while (Block.isValid() && Top <= Event->rect().bottom())
    {
        if (Block.isVisible() && Bottom >= Event->rect().top())
        {
            QString Number = QString::number(BlockNumber + 1);
            Painter.setPen(Qt::black);
            Painter.drawText(0, Top, lineNumberArea->width(), fontMetrics().height(), Qt::AlignCenter, Number);
        }

        Block = Block.next();
        Top = Bottom;
        Bottom = Top + qRound(blockBoundingRect(Block).height());
        ++BlockNumber;
    }
}
