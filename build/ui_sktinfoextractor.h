/********************************************************************************
** Form generated from reading UI file 'sktinfoextractor.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SKTINFOEXTRACTOR_H
#define UI_SKTINFOEXTRACTOR_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_sktinfoextractor
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLineEdit *tuioHost;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *tuioPort;
    QCheckBox *sendTuioCheck;
    QCheckBox *checkBox;
    QLineEdit *framesPerSec;
    QLabel *label_4;
    QCheckBox *tuioMouse;
    QGroupBox *groupBox_2;
    QGroupBox *twoCamsMenu;
    QLabel *label;
    QDoubleSpinBox *doubleSpinBox;
    QCheckBox *mixActive;
    QFrame *line;
    QGroupBox *groupBox_4;
    QPushButton *pointCalStart;
    QCheckBox *checkBox_3;
    QLabel *label_7;
    QLabel *label_8;
    QSpinBox *numPointsSpin;
    QDoubleSpinBox *distanceFromBorder;
    QLabel *label_9;
    QSpinBox *framesPointBox;
    QCheckBox *checkBox_2;
    QFrame *line_2;
    QGroupBox *groupBox_5;
    QDoubleSpinBox *minDistanceToUpdateBox;
    QLabel *label_5;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_6;
    QFrame *line_6;
    QLineEdit *numThreadsText;
    QLabel *label_10;

    void setupUi(QDialog *sktinfoextractor)
    {
        if (sktinfoextractor->objectName().isEmpty())
            sktinfoextractor->setObjectName(QStringLiteral("sktinfoextractor"));
        sktinfoextractor->resize(510, 581);
        sktinfoextractor->setSizeGripEnabled(false);
        pushButton = new QPushButton(sktinfoextractor);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 501, 171, 27));
        groupBox = new QGroupBox(sktinfoextractor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 390, 471, 91));
        tuioHost = new QLineEdit(groupBox);
        tuioHost->setObjectName(QStringLiteral("tuioHost"));
        tuioHost->setGeometry(QRect(80, 22, 113, 27));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(27, 26, 51, 17));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 28, 51, 17));
        tuioPort = new QSpinBox(groupBox);
        tuioPort->setObjectName(QStringLiteral("tuioPort"));
        tuioPort->setGeometry(QRect(292, 23, 111, 27));
        tuioPort->setMaximum(100000);
        tuioPort->setValue(3333);
        sendTuioCheck = new QCheckBox(groupBox);
        sendTuioCheck->setObjectName(QStringLiteral("sendTuioCheck"));
        sendTuioCheck->setGeometry(QRect(80, 60, 141, 22));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(230, 60, 261, 22));
        framesPerSec = new QLineEdit(sktinfoextractor);
        framesPerSec->setObjectName(QStringLiteral("framesPerSec"));
        framesPerSec->setEnabled(false);
        framesPerSec->setGeometry(QRect(330, 543, 71, 27));
        label_4 = new QLabel(sktinfoextractor);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(410, 547, 91, 17));
        tuioMouse = new QCheckBox(sktinfoextractor);
        tuioMouse->setObjectName(QStringLiteral("tuioMouse"));
        tuioMouse->setEnabled(false);
        tuioMouse->setGeometry(QRect(30, 500, 95, 22));
        groupBox_2 = new QGroupBox(sktinfoextractor);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 40, 471, 331));
        twoCamsMenu = new QGroupBox(groupBox_2);
        twoCamsMenu->setObjectName(QStringLiteral("twoCamsMenu"));
        twoCamsMenu->setGeometry(QRect(20, 60, 441, 61));
        label = new QLabel(twoCamsMenu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 26, 101, 17));
        doubleSpinBox = new QDoubleSpinBox(twoCamsMenu);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(370, 23, 62, 27));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setValue(50);
        mixActive = new QCheckBox(twoCamsMenu);
        mixActive->setObjectName(QStringLiteral("mixActive"));
        mixActive->setGeometry(QRect(70, 24, 201, 22));
        mixActive->setChecked(true);
        line = new QFrame(groupBox_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(20, 117, 431, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 129, 441, 121));
        pointCalStart = new QPushButton(groupBox_4);
        pointCalStart->setObjectName(QStringLiteral("pointCalStart"));
        pointCalStart->setGeometry(QRect(260, 60, 171, 27));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(150, 90, 191, 22));
        checkBox_3->setChecked(true);
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 26, 111, 17));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(200, 28, 161, 17));
        numPointsSpin = new QSpinBox(groupBox_4);
        numPointsSpin->setObjectName(QStringLiteral("numPointsSpin"));
        numPointsSpin->setGeometry(QRect(130, 24, 55, 27));
        numPointsSpin->setMinimum(2);
        numPointsSpin->setValue(4);
        distanceFromBorder = new QDoubleSpinBox(groupBox_4);
        distanceFromBorder->setObjectName(QStringLiteral("distanceFromBorder"));
        distanceFromBorder->setGeometry(QRect(370, 23, 62, 27));
        distanceFromBorder->setMaximum(0.3);
        distanceFromBorder->setSingleStep(0.005);
        distanceFromBorder->setValue(0.05);
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 64, 131, 17));
        framesPointBox = new QSpinBox(groupBox_4);
        framesPointBox->setObjectName(QStringLiteral("framesPointBox"));
        framesPointBox->setGeometry(QRect(170, 60, 55, 27));
        framesPointBox->setMinimum(1);
        framesPointBox->setMaximum(100);
        framesPointBox->setValue(10);
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(160, 20, 151, 22));
        line_2 = new QFrame(groupBox_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(20, 40, 431, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 260, 441, 61));
        minDistanceToUpdateBox = new QDoubleSpinBox(groupBox_5);
        minDistanceToUpdateBox->setObjectName(QStringLiteral("minDistanceToUpdateBox"));
        minDistanceToUpdateBox->setGeometry(QRect(250, 25, 62, 27));
        minDistanceToUpdateBox->setSingleStep(0.01);
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 30, 141, 20));
        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(23, 248, 441, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(sktinfoextractor);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(7, 370, 491, 20));
        line_4->setLineWidth(2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(sktinfoextractor);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 480, 491, 20));
        line_5->setLineWidth(2);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(sktinfoextractor);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 231, 17));
        line_6 = new QFrame(sktinfoextractor);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(-3, 26, 551, 20));
        line_6->setLineWidth(2);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        numThreadsText = new QLineEdit(sktinfoextractor);
        numThreadsText->setObjectName(QStringLiteral("numThreadsText"));
        numThreadsText->setEnabled(false);
        numThreadsText->setGeometry(QRect(170, 543, 61, 27));
        label_10 = new QLabel(sktinfoextractor);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(33, 546, 131, 20));

        retranslateUi(sktinfoextractor);

        QMetaObject::connectSlotsByName(sktinfoextractor);
    } // setupUi

    void retranslateUi(QDialog *sktinfoextractor)
    {
        sktinfoextractor->setWindowTitle(QApplication::translate("sktinfoextractor", "Touch Data Extractor", 0));
        pushButton->setText(QApplication::translate("sktinfoextractor", "Stop Processing", 0));
        groupBox->setTitle(QApplication::translate("sktinfoextractor", "Tuio Server", 0));
        tuioHost->setText(QApplication::translate("sktinfoextractor", "localhost", 0));
        label_2->setText(QApplication::translate("sktinfoextractor", "Host : ", 0));
        label_3->setText(QApplication::translate("sktinfoextractor", "Port : ", 0));
        sendTuioCheck->setText(QApplication::translate("sktinfoextractor", "Send Tuio Data", 0));
        checkBox->setText(QApplication::translate("sktinfoextractor", "Verbose (Console)", 0));
        label_4->setText(QApplication::translate("sktinfoextractor", "Frames/sec", 0));
        tuioMouse->setText(QApplication::translate("sktinfoextractor", "Mouse", 0));
        groupBox_2->setTitle(QApplication::translate("sktinfoextractor", "Calibration", 0));
        twoCamsMenu->setTitle(QApplication::translate("sktinfoextractor", "Two Cameras", 0));
        label->setText(QApplication::translate("sktinfoextractor", "Avoid overlap :", 0));
        mixActive->setText(QApplication::translate("sktinfoextractor", "Mixing Active", 0));
        groupBox_4->setTitle(QApplication::translate("sktinfoextractor", "Point Calibration", 0));
        pointCalStart->setText(QApplication::translate("sktinfoextractor", "Start Point Calibration", 0));
        checkBox_3->setText(QApplication::translate("sktinfoextractor", "Normalize Coordinates", 0));
        label_7->setText(QApplication::translate("sktinfoextractor", "Num of Points :", 0));
        label_8->setText(QApplication::translate("sktinfoextractor", "Distance from border :", 0));
        label_9->setText(QApplication::translate("sktinfoextractor", "Frames for each point :", 0));
        checkBox_2->setText(QApplication::translate("sktinfoextractor", "Use Data Collector", 0));
        groupBox_5->setTitle(QApplication::translate("sktinfoextractor", "Touch Stabilization", 0));
        label_5->setText(QApplication::translate("sktinfoextractor", "Update Threshold : ", 0));
        label_6->setText(QApplication::translate("sktinfoextractor", "SKT INFO EXTRACTOR", 0));
        label_10->setText(QApplication::translate("sktinfoextractor", "Maximum threads :", 0));
    } // retranslateUi

};

namespace Ui {
    class sktinfoextractor: public Ui_sktinfoextractor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SKTINFOEXTRACTOR_H
