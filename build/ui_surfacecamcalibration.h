/********************************************************************************
** Form generated from reading UI file 'surfacecamcalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SURFACECAMCALIBRATION_H
#define UI_SURFACECAMCALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_surfacecamcalibration
{
public:

    void setupUi(QWidget *surfacecamcalibration)
    {
        if (surfacecamcalibration->objectName().isEmpty())
            surfacecamcalibration->setObjectName(QStringLiteral("surfacecamcalibration"));
        surfacecamcalibration->resize(359, 223);

        retranslateUi(surfacecamcalibration);

        QMetaObject::connectSlotsByName(surfacecamcalibration);
    } // setupUi

    void retranslateUi(QWidget *surfacecamcalibration)
    {
        surfacecamcalibration->setWindowTitle(QApplication::translate("surfacecamcalibration", "Touch 2-Cam calibration", 0));
    } // retranslateUi

};

namespace Ui {
    class surfacecamcalibration: public Ui_surfacecamcalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SURFACECAMCALIBRATION_H
