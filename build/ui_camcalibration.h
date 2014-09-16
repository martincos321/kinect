/********************************************************************************
** Form generated from reading UI file 'camcalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMCALIBRATION_H
#define UI_CAMCALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include "glwidget2d.h"

QT_BEGIN_NAMESPACE

class Ui_camcalibration
{
public:
    glwidget2d *glwidget1;
    glwidget2d *glwidget2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *savePoints;
    QPushButton *pushButton_2;
    QSpinBox *spinBoxNumWidth;
    QSpinBox *spinBoxNumHeight;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *labelNumPoints;
    QPushButton *getNew;
    QPushButton *clearPoints;
    QCheckBox *useAdaptive;
    QCheckBox *useFast;
    QCheckBox *useEqualization;
    QSpinBox *framesToPause;
    QLabel *label_5;

    void setupUi(QDialog *camcalibration)
    {
        if (camcalibration->objectName().isEmpty())
            camcalibration->setObjectName(QStringLiteral("camcalibration"));
        camcalibration->resize(807, 431);
        glwidget1 = new glwidget2d(camcalibration);
        glwidget1->setObjectName(QStringLiteral("glwidget1"));
        glwidget1->setGeometry(QRect(50, 50, 320, 240));
        glwidget2 = new glwidget2d(camcalibration);
        glwidget2->setObjectName(QStringLiteral("glwidget2"));
        glwidget2->setGeometry(QRect(420, 50, 320, 240));
        label = new QLabel(camcalibration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 67, 17));
        label_2 = new QLabel(camcalibration);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(540, 20, 67, 17));
        savePoints = new QPushButton(camcalibration);
        savePoints->setObjectName(QStringLiteral("savePoints"));
        savePoints->setEnabled(false);
        savePoints->setGeometry(QRect(420, 357, 101, 27));
        pushButton_2 = new QPushButton(camcalibration);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(50, 390, 691, 27));
        spinBoxNumWidth = new QSpinBox(camcalibration);
        spinBoxNumWidth->setObjectName(QStringLiteral("spinBoxNumWidth"));
        spinBoxNumWidth->setGeometry(QRect(130, 300, 55, 27));
        spinBoxNumWidth->setMinimum(3);
        spinBoxNumWidth->setMaximum(20);
        spinBoxNumWidth->setValue(8);
        spinBoxNumHeight = new QSpinBox(camcalibration);
        spinBoxNumHeight->setObjectName(QStringLiteral("spinBoxNumHeight"));
        spinBoxNumHeight->setGeometry(QRect(50, 335, 55, 27));
        spinBoxNumHeight->setMinimum(3);
        spinBoxNumHeight->setMaximum(20);
        spinBoxNumHeight->setValue(6);
        label_3 = new QLabel(camcalibration);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(125, 339, 61, 17));
        label_4 = new QLabel(camcalibration);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(483, 334, 141, 17));
        labelNumPoints = new QLabel(camcalibration);
        labelNumPoints->setObjectName(QStringLiteral("labelNumPoints"));
        labelNumPoints->setGeometry(QRect(633, 335, 67, 17));
        getNew = new QPushButton(camcalibration);
        getNew->setObjectName(QStringLiteral("getNew"));
        getNew->setEnabled(false);
        getNew->setGeometry(QRect(525, 357, 121, 27));
        clearPoints = new QPushButton(camcalibration);
        clearPoints->setObjectName(QStringLiteral("clearPoints"));
        clearPoints->setGeometry(QRect(650, 357, 91, 27));
        useAdaptive = new QCheckBox(camcalibration);
        useAdaptive->setObjectName(QStringLiteral("useAdaptive"));
        useAdaptive->setGeometry(QRect(210, 300, 191, 22));
        useAdaptive->setChecked(true);
        useFast = new QCheckBox(camcalibration);
        useFast->setObjectName(QStringLiteral("useFast"));
        useFast->setGeometry(QRect(210, 330, 161, 22));
        useFast->setChecked(true);
        useEqualization = new QCheckBox(camcalibration);
        useEqualization->setObjectName(QStringLiteral("useEqualization"));
        useEqualization->setGeometry(QRect(210, 360, 171, 22));
        useEqualization->setChecked(true);
        framesToPause = new QSpinBox(camcalibration);
        framesToPause->setObjectName(QStringLiteral("framesToPause"));
        framesToPause->setGeometry(QRect(620, 300, 55, 27));
        framesToPause->setMinimum(2);
        framesToPause->setMaximum(10);
        framesToPause->setValue(5);
        label_5 = new QLabel(camcalibration);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(490, 304, 131, 17));

        retranslateUi(camcalibration);

        QMetaObject::connectSlotsByName(camcalibration);
    } // setupUi

    void retranslateUi(QDialog *camcalibration)
    {
        camcalibration->setWindowTitle(QApplication::translate("camcalibration", "2-Cam Calibration", 0));
        label->setText(QApplication::translate("camcalibration", "Camera 1", 0));
        label_2->setText(QApplication::translate("camcalibration", "Camera 2", 0));
        savePoints->setText(QApplication::translate("camcalibration", "Save Points", 0));
        pushButton_2->setText(QApplication::translate("camcalibration", "Begin Calibration", 0));
        label_3->setText(QApplication::translate("camcalibration", "Chess Board", 0));
        label_4->setText(QApplication::translate("camcalibration", "Data Points Saved : ", 0));
        labelNumPoints->setText(QApplication::translate("camcalibration", "0", 0));
        getNew->setText(QApplication::translate("camcalibration", "Get New Points", 0));
        clearPoints->setText(QApplication::translate("camcalibration", "Clear Points", 0));
        useAdaptive->setText(QApplication::translate("camcalibration", "Use Adaptive Threshold", 0));
        useFast->setText(QApplication::translate("camcalibration", "Use Fast Check", 0));
        useEqualization->setText(QApplication::translate("camcalibration", "Use Equalization", 0));
        label_5->setText(QApplication::translate("camcalibration", "Frames to pause : ", 0));
    } // retranslateUi

};

namespace Ui {
    class camcalibration: public Ui_camcalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMCALIBRATION_H
