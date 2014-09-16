/********************************************************************************
** Form generated from reading UI file 'instructions.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTRUCTIONS_H
#define UI_INSTRUCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_instructions
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTextEdit *instructionsText;

    void setupUi(QWidget *instructions)
    {
        if (instructions->objectName().isEmpty())
            instructions->setObjectName(QStringLiteral("instructions"));
        instructions->resize(628, 438);
        gridLayoutWidget = new QWidget(instructions);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 631, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        instructionsText = new QTextEdit(gridLayoutWidget);
        instructionsText->setObjectName(QStringLiteral("instructionsText"));
        instructionsText->setEnabled(false);

        gridLayout->addWidget(instructionsText, 0, 0, 1, 1);


        retranslateUi(instructions);

        QMetaObject::connectSlotsByName(instructions);
    } // setupUi

    void retranslateUi(QWidget *instructions)
    {
        instructions->setWindowTitle(QApplication::translate("instructions", "Instructions", 0));
    } // retranslateUi

};

namespace Ui {
    class instructions: public Ui_instructions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTRUCTIONS_H
