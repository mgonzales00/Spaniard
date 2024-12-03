#ifndef LINENUMBERAREA_H
#define LINENUMBERAREA_H

#include "codeeditor.h"

class LineNumberArea : public QWidget
{
public:
    LineNumberArea(CodeEditor *Editor) : QWidget(Editor), codeEditor(Editor)
    {}

    QSize sizeHint() const override
    {
        return QSize(codeEditor->LineNumberAreaWidth(), 0);
    }

protected:
    void paintEvent(QPaintEvent *Event) override
    {
        codeEditor->LineNumberAreaPaintEvent(Event);
    }

private:
    CodeEditor *codeEditor;

};

#endif // LINENUMBERAREA_H
