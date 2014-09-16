/********************************************************************************
** Form generated from reading UI file 'multi3dviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTI3DVIEWER_H
#define UI_MULTI3DVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include "glwidgetcloud.h"

QT_BEGIN_NAMESPACE

class Ui_multi3dviewer
{
public:
    glwidgetcloud *viewer;
    QCheckBox *viewCam1;
    QCheckBox *viewCam2;
    QCheckBox *doRemap;
    QPushButton *keppCloud;
    QPushButton *videoRecBut;
    QPushButton *videoPlay;
    QSlider *videoSlider;
    QPushButton *videoControl;
    QLabel *label;
    QSlider *maxDist1;
    QSlider *maxDist2;
    QLabel *label_2;
    QLineEdit *fiSize;
    QLabel *label_3;
    QSpinBox *maxSizeMB;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *colR;
    QLabel *label_8;
    QLabel *label_9;
    QDoubleSpinBox *colG;
    QLabel *label_10;
    QDoubleSpinBox *colB;
    QSpinBox *pSkip;
    QLabel *label_11;

    void setupUi(QDialog *multi3dviewer)
    {
        if (multi3dviewer->objectName().isEmpty())
            multi3dviewer->setObjectName(QStringLiteral("multi3dviewer"));
        multi3dviewer->resize(890, 750);
        viewer = new glwidgetcloud(multi3dviewer);
        viewer->setObjectName(QStringLiteral("viewer"));
        viewer->setGeometry(QRect(30, 20, 831, 581));
        viewCam1 = new QCheckBox(multi3dviewer);
        viewCam1->setObjectName(QStringLiteral("viewCam1"));
        viewCam1->setGeometry(QRect(40, 626, 71, 22));
        viewCam2 = new QCheckBox(multi3dviewer);
        viewCam2->setObjectName(QStringLiteral("viewCam2"));
        viewCam2->setGeometry(QRect(40, 654, 95, 22));
        doRemap = new QCheckBox(multi3dviewer);
        doRemap->setObjectName(QStringLiteral("doRemap"));
        doRemap->setGeometry(QRect(40, 680, 151, 22));
        keppCloud = new QPushButton(multi3dviewer);
        keppCloud->setObjectName(QStringLiteral("keppCloud"));
        keppCloud->setGeometry(QRect(434, 635, 97, 27));
        videoRecBut = new QPushButton(multi3dviewer);
        videoRecBut->setObjectName(QStringLiteral("videoRecBut"));
        videoRecBut->setGeometry(QRect(540, 636, 151, 27));
        videoPlay = new QPushButton(multi3dviewer);
        videoPlay->setObjectName(QStringLiteral("videoPlay"));
        videoPlay->setGeometry(QRect(700, 636, 161, 27));
        videoSlider = new QSlider(multi3dviewer);
        videoSlider->setObjectName(QStringLiteral("videoSlider"));
        videoSlider->setGeometry(QRect(430, 670, 361, 20));
        videoSlider->setMaximum(1);
        videoSlider->setValue(0);
        videoSlider->setOrientation(Qt::Horizontal);
        videoControl = new QPushButton(multi3dviewer);
        videoControl->setObjectName(QStringLiteral("videoControl"));
        videoControl->setEnabled(true);
        videoControl->setGeometry(QRect(800, 666, 61, 27));
        label = new QLabel(multi3dviewer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(44, 604, 67, 17));
        maxDist1 = new QSlider(multi3dviewer);
        maxDist1->setObjectName(QStringLiteral("maxDist1"));
        maxDist1->setGeometry(QRect(130, 629, 251, 19));
        maxDist1->setMaximum(7000);
        maxDist1->setSingleStep(10);
        maxDist1->setValue(7000);
        maxDist1->setOrientation(Qt::Horizontal);
        maxDist2 = new QSlider(multi3dviewer);
        maxDist2->setObjectName(QStringLiteral("maxDist2"));
        maxDist2->setGeometry(QRect(130, 654, 251, 19));
        maxDist2->setMaximum(7000);
        maxDist2->setSingleStep(10);
        maxDist2->setValue(7000);
        maxDist2->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(multi3dviewer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(216, 603, 101, 17));
        fiSize = new QLineEdit(multi3dviewer);
        fiSize->setObjectName(QStringLiteral("fiSize"));
        fiSize->setEnabled(false);
        fiSize->setGeometry(QRect(570, 694, 101, 27));
        label_3 = new QLabel(multi3dviewer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(437, 610, 121, 17));
        maxSizeMB = new QSpinBox(multi3dviewer);
        maxSizeMB->setObjectName(QStringLiteral("maxSizeMB"));
        maxSizeMB->setGeometry(QRect(563, 606, 121, 27));
        maxSizeMB->setMaximum(2000);
        maxSizeMB->setValue(200);
        label_4 = new QLabel(multi3dviewer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(690, 610, 67, 17));
        label_5 = new QLabel(multi3dviewer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(438, 698, 131, 20));
        label_6 = new QLabel(multi3dviewer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(680, 698, 67, 17));
        label_7 = new QLabel(multi3dviewer);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 720, 101, 17));
        colR = new QDoubleSpinBox(multi3dviewer);
        colR->setObjectName(QStringLiteral("colR"));
        colR->setGeometry(QRect(149, 715, 62, 27));
        colR->setMaximum(1);
        colR->setSingleStep(0.05);
        label_8 = new QLabel(multi3dviewer);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 720, 21, 17));
        label_9 = new QLabel(multi3dviewer);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(220, 720, 21, 17));
        colG = new QDoubleSpinBox(multi3dviewer);
        colG->setObjectName(QStringLiteral("colG"));
        colG->setGeometry(QRect(237, 715, 62, 27));
        colG->setMaximum(1);
        colG->setSingleStep(0.05);
        label_10 = new QLabel(multi3dviewer);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 720, 16, 17));
        colB = new QDoubleSpinBox(multi3dviewer);
        colB->setObjectName(QStringLiteral("colB"));
        colB->setGeometry(QRect(330, 715, 62, 27));
        colB->setMaximum(1);
        colB->setSingleStep(0.05);
        pSkip = new QSpinBox(multi3dviewer);
        pSkip->setObjectName(QStringLiteral("pSkip"));
        pSkip->setGeometry(QRect(336, 680, 55, 27));
        pSkip->setMaximum(100);
        label_11 = new QLabel(multi3dviewer);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(280, 683, 67, 17));

        retranslateUi(multi3dviewer);

        QMetaObject::connectSlotsByName(multi3dviewer);
    } // setupUi

    void retranslateUi(QDialog *multi3dviewer)
    {
        multi3dviewer->setWindowTitle(QApplication::translate("multi3dviewer", "Multi Cam 3D Viewer", 0));
        viewCam1->setText(QApplication::translate("multi3dviewer", "Cam 1", 0));
        viewCam2->setText(QApplication::translate("multi3dviewer", "Cam 2", 0));
        doRemap->setText(QApplication::translate("multi3dviewer", "Mix Cams With  Cal", 0));
        keppCloud->setText(QApplication::translate("multi3dviewer", "Keep Cloud", 0));
        videoRecBut->setText(QApplication::translate("multi3dviewer", "Start Video Save", 0));
        videoPlay->setText(QApplication::translate("multi3dviewer", "Play Video", 0));
        videoControl->setText(QApplication::translate("multi3dviewer", "Pause", 0));
        label->setText(QApplication::translate("multi3dviewer", "Active?", 0));
        label_2->setText(QApplication::translate("multi3dviewer", "Max Distance", 0));
        label_3->setText(QApplication::translate("multi3dviewer", "Max Video Size : ", 0));
        label_4->setText(QApplication::translate("multi3dviewer", "MB", 0));
        label_5->setText(QApplication::translate("multi3dviewer", "Actual Video Size : ", 0));
        label_6->setText(QApplication::translate("multi3dviewer", "MB", 0));
        label_7->setText(QApplication::translate("multi3dviewer", "Background :", 0));
        label_8->setText(QApplication::translate("multi3dviewer", "R", 0));
        label_9->setText(QApplication::translate("multi3dviewer", "G", 0));
        label_10->setText(QApplication::translate("multi3dviewer", "B", 0));
        label_11->setText(QApplication::translate("multi3dviewer", "Pt. Skip", 0));
    } // retranslateUi

};

namespace Ui {
    class multi3dviewer: public Ui_multi3dviewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTI3DVIEWER_H
