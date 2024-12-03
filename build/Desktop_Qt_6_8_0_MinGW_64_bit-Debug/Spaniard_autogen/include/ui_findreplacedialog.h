/********************************************************************************
** Form generated from reading UI file 'findreplacedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDREPLACEDIALOG_H
#define UI_FINDREPLACEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindReplaceDialog
{
public:
    QFormLayout *formLayout_2;
    QTabWidget *tabFindReplace;
    QWidget *tabFind;
    QGridLayout *gridLayout;
    QCheckBox *findMatchCaseCheckBox;
    QPushButton *findNextButton;
    QCheckBox *findWholeWordsCheckBox;
    QPushButton *findCancelButton;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *findUpButton;
    QRadioButton *findDownButton;
    QLabel *findWhatLabel;
    QLineEdit *findSearchLineEdit;
    QSpacerItem *horizontalSpacer;
    QWidget *tabReplace;
    QGridLayout *gridLayoutReplace;
    QLineEdit *replaceSearchLineEdit;
    QCheckBox *replaceMatchCaseCheckBox;
    QGroupBox *groupBoxReplace;
    QHBoxLayout *horizontalLayoutReplace;
    QRadioButton *replaceUpButton;
    QRadioButton *replaceDownButton;
    QPushButton *replaceButton;
    QSpacerItem *horizontalSpacerReplace;
    QCheckBox *replaceWholeWordsCheckBox;
    QLabel *replaceWhatLabel;
    QPushButton *replaceAllButton;
    QLineEdit *replaceWithLineEdit;
    QLabel *withLabel;
    QPushButton *replaceCancelButton;

    void setupUi(QDialog *FindReplaceDialog)
    {
        if (FindReplaceDialog->objectName().isEmpty())
            FindReplaceDialog->setObjectName("FindReplaceDialog");
        FindReplaceDialog->resize(503, 223);
        formLayout_2 = new QFormLayout(FindReplaceDialog);
        formLayout_2->setObjectName("formLayout_2");
        tabFindReplace = new QTabWidget(FindReplaceDialog);
        tabFindReplace->setObjectName("tabFindReplace");
        tabFind = new QWidget();
        tabFind->setObjectName("tabFind");
        gridLayout = new QGridLayout(tabFind);
        gridLayout->setObjectName("gridLayout");
        findMatchCaseCheckBox = new QCheckBox(tabFind);
        findMatchCaseCheckBox->setObjectName("findMatchCaseCheckBox");

        gridLayout->addWidget(findMatchCaseCheckBox, 4, 0, 1, 1);

        findNextButton = new QPushButton(tabFind);
        findNextButton->setObjectName("findNextButton");

        gridLayout->addWidget(findNextButton, 0, 2, 1, 1);

        findWholeWordsCheckBox = new QCheckBox(tabFind);
        findWholeWordsCheckBox->setObjectName("findWholeWordsCheckBox");

        gridLayout->addWidget(findWholeWordsCheckBox, 3, 0, 1, 1);

        findCancelButton = new QPushButton(tabFind);
        findCancelButton->setObjectName("findCancelButton");

        gridLayout->addWidget(findCancelButton, 4, 2, 1, 1);

        groupBox = new QGroupBox(tabFind);
        groupBox->setObjectName("groupBox");
        groupBox->setEnabled(true);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName("horizontalLayout");
        findUpButton = new QRadioButton(groupBox);
        findUpButton->setObjectName("findUpButton");

        horizontalLayout->addWidget(findUpButton);

        findDownButton = new QRadioButton(groupBox);
        findDownButton->setObjectName("findDownButton");

        horizontalLayout->addWidget(findDownButton);


        gridLayout->addWidget(groupBox, 2, 1, 3, 1);

        findWhatLabel = new QLabel(tabFind);
        findWhatLabel->setObjectName("findWhatLabel");

        gridLayout->addWidget(findWhatLabel, 0, 0, 1, 1);

        findSearchLineEdit = new QLineEdit(tabFind);
        findSearchLineEdit->setObjectName("findSearchLineEdit");

        gridLayout->addWidget(findSearchLineEdit, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        tabFindReplace->addTab(tabFind, QString());
        tabReplace = new QWidget();
        tabReplace->setObjectName("tabReplace");
        gridLayoutReplace = new QGridLayout(tabReplace);
        gridLayoutReplace->setObjectName("gridLayoutReplace");
        replaceSearchLineEdit = new QLineEdit(tabReplace);
        replaceSearchLineEdit->setObjectName("replaceSearchLineEdit");

        gridLayoutReplace->addWidget(replaceSearchLineEdit, 0, 1, 1, 1);

        replaceMatchCaseCheckBox = new QCheckBox(tabReplace);
        replaceMatchCaseCheckBox->setObjectName("replaceMatchCaseCheckBox");

        gridLayoutReplace->addWidget(replaceMatchCaseCheckBox, 5, 0, 1, 1);

        groupBoxReplace = new QGroupBox(tabReplace);
        groupBoxReplace->setObjectName("groupBoxReplace");
        horizontalLayoutReplace = new QHBoxLayout(groupBoxReplace);
        horizontalLayoutReplace->setObjectName("horizontalLayoutReplace");
        replaceUpButton = new QRadioButton(groupBoxReplace);
        replaceUpButton->setObjectName("replaceUpButton");

        horizontalLayoutReplace->addWidget(replaceUpButton);

        replaceDownButton = new QRadioButton(groupBoxReplace);
        replaceDownButton->setObjectName("replaceDownButton");

        horizontalLayoutReplace->addWidget(replaceDownButton);


        gridLayoutReplace->addWidget(groupBoxReplace, 3, 1, 3, 1);

        replaceButton = new QPushButton(tabReplace);
        replaceButton->setObjectName("replaceButton");

        gridLayoutReplace->addWidget(replaceButton, 0, 2, 1, 1);

        horizontalSpacerReplace = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutReplace->addItem(horizontalSpacerReplace, 1, 1, 1, 1);

        replaceWholeWordsCheckBox = new QCheckBox(tabReplace);
        replaceWholeWordsCheckBox->setObjectName("replaceWholeWordsCheckBox");

        gridLayoutReplace->addWidget(replaceWholeWordsCheckBox, 4, 0, 1, 1);

        replaceWhatLabel = new QLabel(tabReplace);
        replaceWhatLabel->setObjectName("replaceWhatLabel");

        gridLayoutReplace->addWidget(replaceWhatLabel, 0, 0, 1, 1);

        replaceAllButton = new QPushButton(tabReplace);
        replaceAllButton->setObjectName("replaceAllButton");

        gridLayoutReplace->addWidget(replaceAllButton, 1, 2, 1, 1);

        replaceWithLineEdit = new QLineEdit(tabReplace);
        replaceWithLineEdit->setObjectName("replaceWithLineEdit");

        gridLayoutReplace->addWidget(replaceWithLineEdit, 1, 1, 1, 1);

        withLabel = new QLabel(tabReplace);
        withLabel->setObjectName("withLabel");

        gridLayoutReplace->addWidget(withLabel, 1, 0, 1, 1);

        replaceCancelButton = new QPushButton(tabReplace);
        replaceCancelButton->setObjectName("replaceCancelButton");

        gridLayoutReplace->addWidget(replaceCancelButton, 5, 2, 1, 1);

        tabFindReplace->addTab(tabReplace, QString());

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, tabFindReplace);


        retranslateUi(FindReplaceDialog);

        tabFindReplace->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FindReplaceDialog);
    } // setupUi

    void retranslateUi(QDialog *FindReplaceDialog)
    {
        FindReplaceDialog->setWindowTitle(QCoreApplication::translate("FindReplaceDialog", "Dialog", nullptr));
        findMatchCaseCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Match case", nullptr));
        findNextButton->setText(QCoreApplication::translate("FindReplaceDialog", "Find Next", nullptr));
        findWholeWordsCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Match whole words", nullptr));
        findCancelButton->setText(QCoreApplication::translate("FindReplaceDialog", "Cancel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("FindReplaceDialog", "Direction", nullptr));
        findUpButton->setText(QCoreApplication::translate("FindReplaceDialog", "Up", nullptr));
        findDownButton->setText(QCoreApplication::translate("FindReplaceDialog", "Down", nullptr));
        findWhatLabel->setText(QCoreApplication::translate("FindReplaceDialog", "Find what:", nullptr));
        tabFindReplace->setTabText(tabFindReplace->indexOf(tabFind), QCoreApplication::translate("FindReplaceDialog", "Find", nullptr));
        replaceMatchCaseCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Match case", nullptr));
        groupBoxReplace->setTitle(QCoreApplication::translate("FindReplaceDialog", "Direction", nullptr));
        replaceUpButton->setText(QCoreApplication::translate("FindReplaceDialog", "Up", nullptr));
        replaceDownButton->setText(QCoreApplication::translate("FindReplaceDialog", "Down", nullptr));
        replaceButton->setText(QCoreApplication::translate("FindReplaceDialog", "Replace", nullptr));
        replaceWholeWordsCheckBox->setText(QCoreApplication::translate("FindReplaceDialog", "Match whole words", nullptr));
        replaceWhatLabel->setText(QCoreApplication::translate("FindReplaceDialog", "Find what:", nullptr));
        replaceAllButton->setText(QCoreApplication::translate("FindReplaceDialog", "Replace All", nullptr));
        withLabel->setText(QCoreApplication::translate("FindReplaceDialog", "Replace with:", nullptr));
        replaceCancelButton->setText(QCoreApplication::translate("FindReplaceDialog", "Cancel", nullptr));
        tabFindReplace->setTabText(tabFindReplace->indexOf(tabReplace), QCoreApplication::translate("FindReplaceDialog", "Replace", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindReplaceDialog: public Ui_FindReplaceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDREPLACEDIALOG_H
