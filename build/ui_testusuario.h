/********************************************************************************
** Form generated from reading UI file 'testusuario.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTUSUARIO_H
#define UI_TESTUSUARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include "glwidget2d.h"

QT_BEGIN_NAMESPACE

class Ui_testusuario
{
public:
    glwidget2d *visor;
    QCheckBox *updateImageBox;
    QCheckBox *enableRGB;
    QGroupBox *groupBox;
    QLineEdit *tuioHost;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *tuioPort;
    QCheckBox *sendTuioCheck;
    QCheckBox *checkBox;
    QCheckBox *fromCOM;
    QGroupBox *groupBox_2;
    QCheckBox *useOnlyHands;
    QCheckBox *usePush;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QDoubleSpinBox *minArea;
    QDoubleSpinBox *minDeriv;
    QDoubleSpinBox *maxArea;
    QDoubleSpinBox *maxDeriv;
    QFrame *line;
    QFrame *line_2;
    QDoubleSpinBox *dist2d;
    QDoubleSpinBox *distZ;
    QDoubleSpinBox *pointDist;
    QLabel *label_10;
    QDoubleSpinBox *jointConfidence;
    QFrame *line_3;

    void setupUi(QDialog *testusuario)
    {
        if (testusuario->objectName().isEmpty())
            testusuario->setObjectName(QStringLiteral("testusuario"));
        testusuario->resize(1017, 524);
        visor = new glwidget2d(testusuario);
        visor->setObjectName(QStringLiteral("visor"));
        visor->setGeometry(QRect(50, 60, 621, 411));
        updateImageBox = new QCheckBox(testusuario);
        updateImageBox->setObjectName(QStringLiteral("updateImageBox"));
        updateImageBox->setGeometry(QRect(110, 20, 131, 22));
        updateImageBox->setChecked(true);
        enableRGB = new QCheckBox(testusuario);
        enableRGB->setObjectName(QStringLiteral("enableRGB"));
        enableRGB->setGeometry(QRect(380, 20, 211, 22));
        groupBox = new QGroupBox(testusuario);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(730, 325, 241, 191));
        tuioHost = new QLineEdit(groupBox);
        tuioHost->setObjectName(QStringLiteral("tuioHost"));
        tuioHost->setGeometry(QRect(81, 58, 113, 27));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(28, 62, 51, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 51, 17));
        tuioPort = new QSpinBox(groupBox);
        tuioPort->setObjectName(QStringLiteral("tuioPort"));
        tuioPort->setGeometry(QRect(82, 95, 111, 27));
        tuioPort->setMaximum(100000);
        tuioPort->setValue(3333);
        sendTuioCheck = new QCheckBox(groupBox);
        sendTuioCheck->setObjectName(QStringLiteral("sendTuioCheck"));
        sendTuioCheck->setGeometry(QRect(30, 130, 141, 22));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 160, 161, 22));
        fromCOM = new QCheckBox(groupBox);
        fromCOM->setObjectName(QStringLiteral("fromCOM"));
        fromCOM->setEnabled(true);
        fromCOM->setGeometry(QRect(31, 27, 171, 22));
        groupBox_2 = new QGroupBox(testusuario);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(730, 10, 241, 301));
        useOnlyHands = new QCheckBox(groupBox_2);
        useOnlyHands->setObjectName(QStringLiteral("useOnlyHands"));
        useOnlyHands->setGeometry(QRect(20, 30, 131, 22));
        usePush = new QCheckBox(groupBox_2);
        usePush->setObjectName(QStringLiteral("usePush"));
        usePush->setGeometry(QRect(20, 60, 221, 22));
        label = new QLabel(groupBox_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(105, 120, 41, 17));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(93, 155, 71, 17));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(26, 202, 81, 17));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(29, 234, 81, 17));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 266, 111, 17));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(11, 93, 67, 17));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(172, 93, 67, 17));
        minArea = new QDoubleSpinBox(groupBox_2);
        minArea->setObjectName(QStringLiteral("minArea"));
        minArea->setGeometry(QRect(9, 114, 71, 27));
        minArea->setDecimals(1);
        minArea->setMaximum(2000);
        minArea->setSingleStep(1);
        minArea->setValue(200);
        minDeriv = new QDoubleSpinBox(groupBox_2);
        minDeriv->setObjectName(QStringLiteral("minDeriv"));
        minDeriv->setGeometry(QRect(10, 148, 71, 27));
        minDeriv->setDecimals(3);
        minDeriv->setMinimum(-1);
        minDeriv->setMaximum(0);
        minDeriv->setSingleStep(0.0005);
        minDeriv->setValue(-0.5);
        maxArea = new QDoubleSpinBox(groupBox_2);
        maxArea->setObjectName(QStringLiteral("maxArea"));
        maxArea->setGeometry(QRect(160, 115, 71, 27));
        maxArea->setDecimals(1);
        maxArea->setMaximum(2000);
        maxArea->setSingleStep(1);
        maxArea->setValue(1000);
        maxDeriv = new QDoubleSpinBox(groupBox_2);
        maxDeriv->setObjectName(QStringLiteral("maxDeriv"));
        maxDeriv->setGeometry(QRect(160, 148, 71, 27));
        maxDeriv->setDecimals(3);
        maxDeriv->setMaximum(1);
        maxDeriv->setSingleStep(0.0005);
        maxDeriv->setValue(0.5);
        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(12, 78, 221, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(10, 183, 221, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        dist2d = new QDoubleSpinBox(groupBox_2);
        dist2d->setObjectName(QStringLiteral("dist2d"));
        dist2d->setGeometry(QRect(160, 197, 71, 27));
        dist2d->setDecimals(1);
        dist2d->setMaximum(400);
        dist2d->setSingleStep(1);
        dist2d->setValue(30);
        distZ = new QDoubleSpinBox(groupBox_2);
        distZ->setObjectName(QStringLiteral("distZ"));
        distZ->setGeometry(QRect(160, 229, 71, 27));
        distZ->setDecimals(1);
        distZ->setMaximum(5000);
        distZ->setSingleStep(1);
        distZ->setValue(20);
        pointDist = new QDoubleSpinBox(groupBox_2);
        pointDist->setObjectName(QStringLiteral("pointDist"));
        pointDist->setGeometry(QRect(160, 260, 71, 27));
        pointDist->setDecimals(3);
        pointDist->setMaximum(1);
        pointDist->setSingleStep(0.0005);
        pointDist->setValue(0.02);
        label_10 = new QLabel(testusuario);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(230, 490, 231, 17));
        jointConfidence = new QDoubleSpinBox(testusuario);
        jointConfidence->setObjectName(QStringLiteral("jointConfidence"));
        jointConfidence->setGeometry(QRect(360, 486, 62, 27));
        jointConfidence->setMaximum(1);
        jointConfidence->setSingleStep(0.01);
        jointConfidence->setValue(0.5);
        line_3 = new QFrame(testusuario);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(725, 312, 251, 16));
        line_3->setLineWidth(2);
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        retranslateUi(testusuario);

        QMetaObject::connectSlotsByName(testusuario);
    } // setupUi

    void retranslateUi(QDialog *testusuario)
    {
        testusuario->setWindowTitle(QApplication::translate("testusuario", "Skeleton Methods", 0));
        updateImageBox->setText(QApplication::translate("testusuario", "Update Image", 0));
        enableRGB->setText(QApplication::translate("testusuario", "Show RGB instead of Depth", 0));
        groupBox->setTitle(QApplication::translate("testusuario", "Tuio Server", 0));
        tuioHost->setText(QApplication::translate("testusuario", "localhost", 0));
        label_2->setText(QApplication::translate("testusuario", "Host : ", 0));
        label_3->setText(QApplication::translate("testusuario", "Port : ", 0));
        sendTuioCheck->setText(QApplication::translate("testusuario", "Send Tuio Data", 0));
        checkBox->setText(QApplication::translate("testusuario", "Verbose (Console)", 0));
        fromCOM->setText(QApplication::translate("testusuario", "From center of mass coords", 0));
        groupBox_2->setTitle(QApplication::translate("testusuario", "Hand method", 0));
        useOnlyHands->setText(QApplication::translate("testusuario", "Use only Hands", 0));
        usePush->setText(QApplication::translate("testusuario", "Use Hands with push method", 0));
        label->setText(QApplication::translate("testusuario", "Area", 0));
        label_4->setText(QApplication::translate("testusuario", "Differential", 0));
        label_5->setText(QApplication::translate("testusuario", "2D Distance", 0));
        label_6->setText(QApplication::translate("testusuario", "Z Distance", 0));
        label_7->setText(QApplication::translate("testusuario", "Point Distance", 0));
        label_8->setText(QApplication::translate("testusuario", "Push", 0));
        label_9->setText(QApplication::translate("testusuario", "Not Push", 0));
        label_10->setText(QApplication::translate("testusuario", "Joint Confidence : ", 0));
    } // retranslateUi

};

namespace Ui {
    class testusuario: public Ui_testusuario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTUSUARIO_H
