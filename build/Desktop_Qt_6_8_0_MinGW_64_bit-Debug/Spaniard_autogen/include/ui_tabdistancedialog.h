/********************************************************************************
** Form generated from reading UI file 'tabdistancedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABDISTANCEDIALOG_H
#define UI_TABDISTANCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_TabDistanceDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *tabSizeLineEdit;
    QSlider *horizontalSlider;
    QDialogButtonBox *tabSizeButtonBox;

    void setupUi(QDialog *TabDistanceDialog)
    {
        if (TabDistanceDialog->objectName().isEmpty())
            TabDistanceDialog->setObjectName("TabDistanceDialog");
        TabDistanceDialog->resize(234, 98);
        gridLayout = new QGridLayout(TabDistanceDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(TabDistanceDialog);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tabSizeLineEdit = new QLineEdit(TabDistanceDialog);
        tabSizeLineEdit->setObjectName("tabSizeLineEdit");

        gridLayout->addWidget(tabSizeLineEdit, 0, 1, 1, 1);

        horizontalSlider = new QSlider(TabDistanceDialog);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        horizontalSlider->setMaximum(15);
        horizontalSlider->setSingleStep(4);
        horizontalSlider->setValue(0);
        horizontalSlider->setSliderPosition(0);
        horizontalSlider->setTracking(true);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(1);

        gridLayout->addWidget(horizontalSlider, 1, 0, 1, 2);

        tabSizeButtonBox = new QDialogButtonBox(TabDistanceDialog);
        tabSizeButtonBox->setObjectName("tabSizeButtonBox");
        tabSizeButtonBox->setOrientation(Qt::Orientation::Horizontal);
        tabSizeButtonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        gridLayout->addWidget(tabSizeButtonBox, 3, 0, 1, 2);


        retranslateUi(TabDistanceDialog);
        QObject::connect(tabSizeButtonBox, &QDialogButtonBox::accepted, TabDistanceDialog, qOverload<>(&QDialog::accept));
        QObject::connect(tabSizeButtonBox, &QDialogButtonBox::rejected, TabDistanceDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TabDistanceDialog);
    } // setupUi

    void retranslateUi(QDialog *TabDistanceDialog)
    {
        TabDistanceDialog->setWindowTitle(QString());
        label->setText(QCoreApplication::translate("TabDistanceDialog", "Tab Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TabDistanceDialog: public Ui_TabDistanceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABDISTANCEDIALOG_H
