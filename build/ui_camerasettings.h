/********************************************************************************
** Form generated from reading UI file 'camerasettings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTINGS_H
#define UI_CAMERASETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_cameraSettings
{
public:
    glwidget *widget;

    void setupUi(QDialog *cameraSettings)
    {
        if (cameraSettings->objectName().isEmpty())
            cameraSettings->setObjectName(QStringLiteral("cameraSettings"));
        cameraSettings->resize(640, 480);
        widget = new glwidget(cameraSettings);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 640, 480));

        retranslateUi(cameraSettings);

        QMetaObject::connectSlotsByName(cameraSettings);
    } // setupUi

    void retranslateUi(QDialog *cameraSettings)
    {
        cameraSettings->setWindowTitle(QApplication::translate("cameraSettings", "3D Kinect Viewer", 0));
    } // retranslateUi

};

namespace Ui {
    class cameraSettings: public Ui_cameraSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTINGS_H
