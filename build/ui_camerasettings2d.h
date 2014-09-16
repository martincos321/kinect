/********************************************************************************
** Form generated from reading UI file 'camerasettings2d.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERASETTINGS2D_H
#define UI_CAMERASETTINGS2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include "glwidget2d.h"

QT_BEGIN_NAMESPACE

class Ui_cameraSettings2d
{
public:
    glwidget2d *glImage;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    glwidget2d *glBlobs;
    QComboBox *methodToUse;
    QLabel *label_3;
    QGroupBox *commonSettings;
    QSpinBox *minDistance;
    QSpinBox *maxDistance;
    QSpinBox *minBlobSize;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *zoneButton;
    QLabel *label_8;
    QSpinBox *dilate0;
    QSpinBox *erode;
    QSpinBox *dilate1;
    QPushButton *refineMask;
    QProgressBar *progressBar;
    QLabel *label_7;
    QLabel *processLabel;
    QLabel *label_9;
    QFrame *line;
    QLabel *label_10;
    QGroupBox *backSettings;
    QPushButton *calBack;
    glwidget2d *imgBack;
    QLabel *label_11;
    glwidget2d *imgMaskBack;
    QLabel *label_12;
    QLabel *label_17;
    QDoubleSpinBox *variance;
    QGroupBox *planeSettings;
    QLabel *label_14;
    glwidget2d *imgMaskPlane;
    glwidget2d *imgPlane;
    QLabel *label_15;
    QPushButton *calcPlane;
    QLabel *Instructions;
    QCheckBox *matchIandD;

    void setupUi(QDialog *cameraSettings2d)
    {
        if (cameraSettings2d->objectName().isEmpty())
            cameraSettings2d->setObjectName(QStringLiteral("cameraSettings2d"));
        cameraSettings2d->resize(1024, 600);
        glImage = new glwidget2d(cameraSettings2d);
        glImage->setObjectName(QStringLiteral("glImage"));
        glImage->setGeometry(QRect(30, 100, 320, 240));
        horizontalSlider = new QSlider(cameraSettings2d);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(110, 70, 160, 19));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(cameraSettings2d);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(56, 68, 51, 20));
        label_2 = new QLabel(cameraSettings2d);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 70, 67, 17));
        glBlobs = new glwidget2d(cameraSettings2d);
        glBlobs->setObjectName(QStringLiteral("glBlobs"));
        glBlobs->setGeometry(QRect(687, 40, 320, 240));
        methodToUse = new QComboBox(cameraSettings2d);
        methodToUse->setObjectName(QStringLiteral("methodToUse"));
        methodToUse->setGeometry(QRect(110, 30, 211, 27));
        label_3 = new QLabel(cameraSettings2d);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 34, 67, 17));
        commonSettings = new QGroupBox(cameraSettings2d);
        commonSettings->setObjectName(QStringLiteral("commonSettings"));
        commonSettings->setGeometry(QRect(420, 10, 221, 321));
        minDistance = new QSpinBox(commonSettings);
        minDistance->setObjectName(QStringLiteral("minDistance"));
        minDistance->setGeometry(QRect(160, 30, 55, 27));
        minDistance->setMinimum(-6000);
        minDistance->setMaximum(6000);
        minDistance->setSingleStep(1);
        maxDistance = new QSpinBox(commonSettings);
        maxDistance->setObjectName(QStringLiteral("maxDistance"));
        maxDistance->setGeometry(QRect(160, 70, 55, 27));
        maxDistance->setMinimum(-6000);
        maxDistance->setMaximum(6000);
        maxDistance->setSingleStep(1);
        minBlobSize = new QSpinBox(commonSettings);
        minBlobSize->setObjectName(QStringLiteral("minBlobSize"));
        minBlobSize->setGeometry(QRect(160, 110, 55, 27));
        minBlobSize->setMaximum(1000);
        label_4 = new QLabel(commonSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 33, 91, 17));
        label_5 = new QLabel(commonSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 73, 101, 17));
        label_6 = new QLabel(commonSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 113, 101, 17));
        zoneButton = new QPushButton(commonSettings);
        zoneButton->setObjectName(QStringLiteral("zoneButton"));
        zoneButton->setGeometry(QRect(20, 154, 171, 27));
        zoneButton->setAutoDefault(false);
        label_8 = new QLabel(commonSettings);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(24, 200, 171, 20));
        label_8->setAutoFillBackground(false);
        label_8->setTextFormat(Qt::AutoText);
        label_8->setScaledContents(true);
        label_8->setWordWrap(false);
        dilate0 = new QSpinBox(commonSettings);
        dilate0->setObjectName(QStringLiteral("dilate0"));
        dilate0->setGeometry(QRect(13, 230, 55, 27));
        dilate0->setMaximum(10);
        erode = new QSpinBox(commonSettings);
        erode->setObjectName(QStringLiteral("erode"));
        erode->setGeometry(QRect(80, 230, 55, 27));
        erode->setMaximum(10);
        dilate1 = new QSpinBox(commonSettings);
        dilate1->setObjectName(QStringLiteral("dilate1"));
        dilate1->setGeometry(QRect(150, 230, 55, 27));
        dilate1->setMaximum(10);
        refineMask = new QPushButton(commonSettings);
        refineMask->setObjectName(QStringLiteral("refineMask"));
        refineMask->setGeometry(QRect(30, 270, 151, 27));
        progressBar = new QProgressBar(cameraSettings2d);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(120, 548, 231, 23));
        progressBar->setValue(0);
        label_7 = new QLabel(cameraSettings2d);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 500, 101, 17));
        processLabel = new QLabel(cameraSettings2d);
        processLabel->setObjectName(QStringLiteral("processLabel"));
        processLabel->setGeometry(QRect(120, 501, 231, 17));
        label_9 = new QLabel(cameraSettings2d);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 550, 91, 17));
        line = new QFrame(cameraSettings2d);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(363, 10, 31, 571));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(cameraSettings2d);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(790, 10, 111, 17));
        backSettings = new QGroupBox(cameraSettings2d);
        backSettings->setObjectName(QStringLiteral("backSettings"));
        backSettings->setEnabled(true);
        backSettings->setGeometry(QRect(420, 350, 300, 220));
        backSettings->setFlat(false);
        calBack = new QPushButton(backSettings);
        calBack->setObjectName(QStringLiteral("calBack"));
        calBack->setGeometry(QRect(0, 190, 291, 27));
        imgBack = new glwidget2d(backSettings);
        imgBack->setObjectName(QStringLiteral("imgBack"));
        imgBack->setGeometry(QRect(0, 60, 131, 91));
        label_11 = new QLabel(backSettings);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 30, 101, 17));
        imgMaskBack = new glwidget2d(backSettings);
        imgMaskBack->setObjectName(QStringLiteral("imgMaskBack"));
        imgMaskBack->setGeometry(QRect(150, 60, 141, 91));
        label_12 = new QLabel(backSettings);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(150, 30, 67, 17));
        label_17 = new QLabel(backSettings);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(0, 160, 211, 17));
        variance = new QDoubleSpinBox(backSettings);
        variance->setObjectName(QStringLiteral("variance"));
        variance->setGeometry(QRect(219, 157, 71, 27));
        variance->setDecimals(2);
        variance->setMinimum(994.1);
        variance->setMaximum(996);
        variance->setSingleStep(0.01);
        planeSettings = new QGroupBox(cameraSettings2d);
        planeSettings->setObjectName(QStringLiteral("planeSettings"));
        planeSettings->setGeometry(QRect(730, 350, 300, 220));
        label_14 = new QLabel(planeSettings);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(150, 30, 67, 17));
        imgMaskPlane = new glwidget2d(planeSettings);
        imgMaskPlane->setObjectName(QStringLiteral("imgMaskPlane"));
        imgMaskPlane->setGeometry(QRect(150, 60, 141, 91));
        imgPlane = new glwidget2d(planeSettings);
        imgPlane->setObjectName(QStringLiteral("imgPlane"));
        imgPlane->setGeometry(QRect(0, 60, 131, 91));
        label_15 = new QLabel(planeSettings);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 30, 101, 17));
        calcPlane = new QPushButton(planeSettings);
        calcPlane->setObjectName(QStringLiteral("calcPlane"));
        calcPlane->setGeometry(QRect(0, 190, 291, 27));
        Instructions = new QLabel(cameraSettings2d);
        Instructions->setObjectName(QStringLiteral("Instructions"));
        Instructions->setGeometry(QRect(20, 360, 331, 101));
        matchIandD = new QCheckBox(cameraSettings2d);
        matchIandD->setObjectName(QStringLiteral("matchIandD"));
        matchIandD->setGeometry(QRect(90, 350, 211, 22));
        matchIandD->setChecked(true);

        retranslateUi(cameraSettings2d);

        QMetaObject::connectSlotsByName(cameraSettings2d);
    } // setupUi

    void retranslateUi(QDialog *cameraSettings2d)
    {
        cameraSettings2d->setWindowTitle(QApplication::translate("cameraSettings2d", "Kinect Touch Settings", 0));
        label->setText(QApplication::translate("cameraSettings2d", "Image", 0));
        label_2->setText(QApplication::translate("cameraSettings2d", "Depth", 0));
        methodToUse->clear();
        methodToUse->insertItems(0, QStringList()
         << QApplication::translate("cameraSettings2d", "Background", 0)
         << QApplication::translate("cameraSettings2d", "Plane", 0)
        );
        label_3->setText(QApplication::translate("cameraSettings2d", "Method : ", 0));
        commonSettings->setTitle(QApplication::translate("cameraSettings2d", "Common Processing  Settings", 0));
        label_4->setText(QApplication::translate("cameraSettings2d", "Min Distance", 0));
        label_5->setText(QApplication::translate("cameraSettings2d", "Max Distance", 0));
        label_6->setText(QApplication::translate("cameraSettings2d", "Min Blob Size", 0));
        zoneButton->setText(QApplication::translate("cameraSettings2d", "Select Valid Zone", 0));
        label_8->setText(QApplication::translate("cameraSettings2d", "Dilate     ->     Erode      ->   Dilate", 0));
        refineMask->setText(QApplication::translate("cameraSettings2d", "Start Refining Mask", 0));
        label_7->setText(QApplication::translate("cameraSettings2d", "Working on :", 0));
        processLabel->setText(QApplication::translate("cameraSettings2d", "Normal processing", 0));
        label_9->setText(QApplication::translate("cameraSettings2d", "Progress :", 0));
        label_10->setText(QApplication::translate("cameraSettings2d", "Final Blob Image", 0));
        backSettings->setTitle(QApplication::translate("cameraSettings2d", "Background Method Settings", 0));
        calBack->setText(QApplication::translate("cameraSettings2d", "Set Background", 0));
        label_11->setText(QApplication::translate("cameraSettings2d", "Background : ", 0));
        label_12->setText(QApplication::translate("cameraSettings2d", "Mask :", 0));
        label_17->setText(QApplication::translate("cameraSettings2d", "Accepted Variance of Pixels : ", 0));
        planeSettings->setTitle(QApplication::translate("cameraSettings2d", "Plane Method Settings", 0));
        label_14->setText(QApplication::translate("cameraSettings2d", "Mask :", 0));
        label_15->setText(QApplication::translate("cameraSettings2d", "Plane : ", 0));
        calcPlane->setText(QApplication::translate("cameraSettings2d", "Calculate Plane", 0));
        Instructions->setText(QApplication::translate("cameraSettings2d", "This text will display instructions when needed. ", 0));
        matchIandD->setText(QApplication::translate("cameraSettings2d", "Match Image and Depth", 0));
    } // retranslateUi

};

namespace Ui {
    class cameraSettings2d: public Ui_cameraSettings2d {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERASETTINGS2D_H
