/********************************************************************************
** Form generated from reading UI file 'ransacdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANSACDIALOG_H
#define UI_RANSACDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ransacDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *maxNum;
    QDoubleSpinBox *thresholdId;
    QDoubleSpinBox *randomPercent;
    QSpinBox *Iterations;
    QDoubleSpinBox *finalPercent;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *error;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;

    void setupUi(QDialog *ransacDialog)
    {
        if (ransacDialog->objectName().isEmpty())
            ransacDialog->setObjectName(QStringLiteral("ransacDialog"));
        ransacDialog->resize(383, 364);
        buttonBox = new QDialogButtonBox(ransacDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 310, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);
        label = new QLabel(ransacDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 181, 41));
        maxNum = new QSpinBox(ransacDialog);
        maxNum->setObjectName(QStringLiteral("maxNum"));
        maxNum->setGeometry(QRect(264, 120, 81, 27));
        maxNum->setMaximum(5000);
        maxNum->setSingleStep(20);
        maxNum->setValue(100);
        thresholdId = new QDoubleSpinBox(ransacDialog);
        thresholdId->setObjectName(QStringLiteral("thresholdId"));
        thresholdId->setGeometry(QRect(265, 160, 81, 27));
        thresholdId->setDecimals(5);
        thresholdId->setSingleStep(1e-05);
        thresholdId->setValue(0.0001);
        randomPercent = new QDoubleSpinBox(ransacDialog);
        randomPercent->setObjectName(QStringLiteral("randomPercent"));
        randomPercent->setGeometry(QRect(266, 200, 81, 27));
        randomPercent->setDecimals(1);
        randomPercent->setValue(15);
        Iterations = new QSpinBox(ransacDialog);
        Iterations->setObjectName(QStringLiteral("Iterations"));
        Iterations->setGeometry(QRect(264, 80, 81, 27));
        Iterations->setMinimum(1);
        Iterations->setMaximum(100000);
        Iterations->setSingleStep(20);
        Iterations->setValue(100);
        finalPercent = new QDoubleSpinBox(ransacDialog);
        finalPercent->setObjectName(QStringLiteral("finalPercent"));
        finalPercent->setGeometry(QRect(267, 240, 81, 27));
        finalPercent->setDecimals(1);
        finalPercent->setValue(40);
        label_2 = new QLabel(ransacDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 85, 141, 17));
        label_3 = new QLabel(ransacDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(19, 124, 271, 20));
        label_4 = new QLabel(ransacDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(95, 44, 81, 17));
        error = new QLabel(ransacDialog);
        error->setObjectName(QStringLiteral("error"));
        error->setGeometry(QRect(205, 44, 67, 17));
        label_5 = new QLabel(ransacDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 166, 151, 17));
        label_6 = new QLabel(ransacDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(21, 205, 201, 17));
        label_7 = new QLabel(ransacDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(23, 246, 221, 17));
        label_8 = new QLabel(ransacDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(140, 280, 261, 17));

        retranslateUi(ransacDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ransacDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ransacDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ransacDialog);
    } // setupUi

    void retranslateUi(QDialog *ransacDialog)
    {
        ransacDialog->setWindowTitle(QApplication::translate("ransacDialog", "RANSAC Settings", 0));
        label->setText(QApplication::translate("ransacDialog", "RANSAC FIT", 0));
        label_2->setText(QApplication::translate("ransacDialog", "Max Iterations", 0));
        label_3->setText(QApplication::translate("ransacDialog", "Max number of random sample", 0));
        label_4->setText(QApplication::translate("ransacDialog", "Best error : ", 0));
        error->setText(QApplication::translate("ransacDialog", "Error", 0));
        label_5->setText(QApplication::translate("ransacDialog", "Ideal Threshold", 0));
        label_6->setText(QApplication::translate("ransacDialog", "Random data percentage", 0));
        label_7->setText(QApplication::translate("ransacDialog", "Min \"nice\" data percentage", 0));
        label_8->setText(QApplication::translate("ransacDialog", "Retry using the parameters above?", 0));
    } // retranslateUi

};

namespace Ui {
    class ransacDialog: public Ui_ransacDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANSACDIALOG_H
