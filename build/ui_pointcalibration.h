/********************************************************************************
** Form generated from reading UI file 'pointcalibration.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POINTCALIBRATION_H
#define UI_POINTCALIBRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qtimagewidget.h>

QT_BEGIN_NAMESPACE

class Ui_pointcalibration
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *vL;
    qtimagewidget *viewer;

    void setupUi(QWidget *pointcalibration)
    {
        if (pointcalibration->objectName().isEmpty())
            pointcalibration->setObjectName(QStringLiteral("pointcalibration"));
        pointcalibration->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(pointcalibration);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        vL = new QVBoxLayout();
        vL->setSpacing(0);
        vL->setObjectName(QStringLiteral("vL"));
        viewer = new qtimagewidget(pointcalibration);
        viewer->setObjectName(QStringLiteral("viewer"));

        vL->addWidget(viewer);


        verticalLayout_2->addLayout(vL);


        retranslateUi(pointcalibration);

        QMetaObject::connectSlotsByName(pointcalibration);
    } // setupUi

    void retranslateUi(QWidget *pointcalibration)
    {
        pointcalibration->setWindowTitle(QApplication::translate("pointcalibration", "Point Calibration", 0));
    } // retranslateUi

};

namespace Ui {
    class pointcalibration: public Ui_pointcalibration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POINTCALIBRATION_H
