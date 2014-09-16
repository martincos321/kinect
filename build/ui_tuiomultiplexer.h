/********************************************************************************
** Form generated from reading UI file 'tuiomultiplexer.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TUIOMULTIPLEXER_H
#define UI_TUIOMULTIPLEXER_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tuiomultiplexer
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QCheckBox *isListening;
    QSpinBox *port;
    QFrame *line;
    QGroupBox *groupBox_3;
    QScrollArea *scrollGest;
    QWidget *scrollAreaWidgetContents;
    QPushButton *addGesture;
    QDoubleSpinBox *minDistance;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *numZones;
    QLabel *label_4;
    QDoubleSpinBox *minDuration;
    QDoubleSpinBox *maxDuration;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox_4;
    QPushButton *pointCalStart;
    QCheckBox *normCoordinates;
    QLabel *label_8;
    QLabel *label_9;
    QSpinBox *numPointsSpin;
    QDoubleSpinBox *distanceFromBorder;
    QLabel *label_10;
    QSpinBox *framesPointBox;
    QLabel *label_7;
    QDoubleSpinBox *minDistanceToUpdateBox;
    QCheckBox *sendCalibrated;
    QPushButton *saveCal;
    QPushButton *loadCal;
    QGroupBox *groupBox_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaContentTUIO;
    QFrame *line_2;
    QFrame *line_3;
    QLabel *label_11;
    QDoubleSpinBox *objectAlive;

    void setupUi(QDialog *tuiomultiplexer)
    {
        if (tuiomultiplexer->objectName().isEmpty())
            tuiomultiplexer->setObjectName(QStringLiteral("tuiomultiplexer"));
        tuiomultiplexer->resize(774, 712);
        groupBox = new QGroupBox(tuiomultiplexer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 20, 251, 91));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(34, 36, 61, 16));
        isListening = new QCheckBox(groupBox);
        isListening->setObjectName(QStringLiteral("isListening"));
        isListening->setGeometry(QRect(34, 63, 161, 22));
        port = new QSpinBox(groupBox);
        port->setObjectName(QStringLiteral("port"));
        port->setGeometry(QRect(110, 30, 131, 27));
        port->setMaximum(65000);
        port->setValue(3333);
        line = new QFrame(tuiomultiplexer);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(370, 10, 20, 681));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(tuiomultiplexer);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(420, 230, 341, 461));
        scrollGest = new QScrollArea(groupBox_3);
        scrollGest->setObjectName(QStringLiteral("scrollGest"));
        scrollGest->setGeometry(QRect(10, 30, 321, 421));
        scrollGest->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollGest->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 304, 419));
        scrollGest->setWidget(scrollAreaWidgetContents);
        addGesture = new QPushButton(tuiomultiplexer);
        addGesture->setObjectName(QStringLiteral("addGesture"));
        addGesture->setGeometry(QRect(647, 27, 111, 27));
        minDistance = new QDoubleSpinBox(tuiomultiplexer);
        minDistance->setObjectName(QStringLiteral("minDistance"));
        minDistance->setGeometry(QRect(570, 10, 62, 27));
        minDistance->setDecimals(1);
        minDistance->setMaximum(200);
        minDistance->setSingleStep(0.1);
        minDistance->setValue(5);
        label_2 = new QLabel(tuiomultiplexer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(410, 15, 181, 17));
        label_3 = new QLabel(tuiomultiplexer);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(412, 50, 161, 17));
        numZones = new QSpinBox(tuiomultiplexer);
        numZones->setObjectName(QStringLiteral("numZones"));
        numZones->setGeometry(QRect(571, 43, 61, 27));
        numZones->setMinimum(4);
        numZones->setMaximum(360);
        numZones->setValue(4);
        label_4 = new QLabel(tuiomultiplexer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(550, 105, 81, 17));
        minDuration = new QDoubleSpinBox(tuiomultiplexer);
        minDuration->setObjectName(QStringLiteral("minDuration"));
        minDuration->setGeometry(QRect(470, 100, 62, 27));
        minDuration->setMaximum(10);
        minDuration->setSingleStep(0.1);
        minDuration->setValue(0.1);
        maxDuration = new QDoubleSpinBox(tuiomultiplexer);
        maxDuration->setObjectName(QStringLiteral("maxDuration"));
        maxDuration->setGeometry(QRect(630, 100, 62, 27));
        maxDuration->setMaximum(20);
        maxDuration->setSingleStep(0.1);
        maxDuration->setValue(2);
        label_5 = new QLabel(tuiomultiplexer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(480, 80, 67, 17));
        label_6 = new QLabel(tuiomultiplexer);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(640, 80, 67, 17));
        groupBox_4 = new QGroupBox(tuiomultiplexer);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(60, 130, 291, 271));
        pointCalStart = new QPushButton(groupBox_4);
        pointCalStart->setObjectName(QStringLiteral("pointCalStart"));
        pointCalStart->setGeometry(QRect(30, 140, 171, 27));
        normCoordinates = new QCheckBox(groupBox_4);
        normCoordinates->setObjectName(QStringLiteral("normCoordinates"));
        normCoordinates->setGeometry(QRect(30, 210, 191, 22));
        normCoordinates->setChecked(true);
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 40, 111, 17));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 75, 161, 17));
        numPointsSpin = new QSpinBox(groupBox_4);
        numPointsSpin->setObjectName(QStringLiteral("numPointsSpin"));
        numPointsSpin->setGeometry(QRect(170, 30, 55, 27));
        numPointsSpin->setMinimum(2);
        numPointsSpin->setValue(4);
        distanceFromBorder = new QDoubleSpinBox(groupBox_4);
        distanceFromBorder->setObjectName(QStringLiteral("distanceFromBorder"));
        distanceFromBorder->setGeometry(QRect(171, 70, 62, 27));
        distanceFromBorder->setMaximum(0.3);
        distanceFromBorder->setSingleStep(0.005);
        distanceFromBorder->setValue(0.05);
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 110, 261, 17));
        framesPointBox = new QSpinBox(groupBox_4);
        framesPointBox->setObjectName(QStringLiteral("framesPointBox"));
        framesPointBox->setGeometry(QRect(170, 106, 55, 27));
        framesPointBox->setMinimum(1);
        framesPointBox->setMaximum(100);
        framesPointBox->setValue(10);
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 180, 141, 20));
        minDistanceToUpdateBox = new QDoubleSpinBox(groupBox_4);
        minDistanceToUpdateBox->setObjectName(QStringLiteral("minDistanceToUpdateBox"));
        minDistanceToUpdateBox->setGeometry(QRect(164, 176, 62, 27));
        sendCalibrated = new QCheckBox(groupBox_4);
        sendCalibrated->setObjectName(QStringLiteral("sendCalibrated"));
        sendCalibrated->setGeometry(QRect(30, 240, 201, 22));
        saveCal = new QPushButton(groupBox_4);
        saveCal->setObjectName(QStringLiteral("saveCal"));
        saveCal->setGeometry(QRect(150, 0, 61, 27));
        loadCal = new QPushButton(groupBox_4);
        loadCal->setObjectName(QStringLiteral("loadCal"));
        loadCal->setGeometry(QRect(220, 0, 61, 27));
        groupBox_2 = new QGroupBox(tuiomultiplexer);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(26, 420, 331, 281));
        scrollArea = new QScrollArea(groupBox_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 20, 311, 251));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaContentTUIO = new QWidget();
        scrollAreaContentTUIO->setObjectName(QStringLiteral("scrollAreaContentTUIO"));
        scrollAreaContentTUIO->setGeometry(QRect(0, 0, 294, 249));
        scrollArea->setWidget(scrollAreaContentTUIO);
        line_2 = new QFrame(tuiomultiplexer);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(27, 112, 331, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(tuiomultiplexer);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(27, 400, 331, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_11 = new QLabel(tuiomultiplexer);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(500, 150, 231, 17));
        objectAlive = new QDoubleSpinBox(tuiomultiplexer);
        objectAlive->setObjectName(QStringLiteral("objectAlive"));
        objectAlive->setGeometry(QRect(550, 180, 62, 27));
        objectAlive->setMaximum(0.99);
        objectAlive->setSingleStep(0.01);
        objectAlive->setValue(0.5);

        retranslateUi(tuiomultiplexer);

        QMetaObject::connectSlotsByName(tuiomultiplexer);
    } // setupUi

    void retranslateUi(QDialog *tuiomultiplexer)
    {
        tuiomultiplexer->setWindowTitle(QApplication::translate("tuiomultiplexer", "Ludique's TUIO multiplexer, calibrator and gestures", 0));
        groupBox->setTitle(QApplication::translate("tuiomultiplexer", "Input TUIO ", 0));
        label->setText(QApplication::translate("tuiomultiplexer", "Port : ", 0));
        isListening->setText(QApplication::translate("tuiomultiplexer", "Are we Listening?", 0));
        groupBox_3->setTitle(QApplication::translate("tuiomultiplexer", "Gestures", 0));
        addGesture->setText(QApplication::translate("tuiomultiplexer", "Add Gesture", 0));
        label_2->setText(QApplication::translate("tuiomultiplexer", "Gestures min Distance", 0));
        label_3->setText(QApplication::translate("tuiomultiplexer", "Gestures num zones", 0));
        label_4->setText(QApplication::translate("tuiomultiplexer", "Duration (s)", 0));
        label_5->setText(QApplication::translate("tuiomultiplexer", "Min", 0));
        label_6->setText(QApplication::translate("tuiomultiplexer", "Max", 0));
        groupBox_4->setTitle(QApplication::translate("tuiomultiplexer", "Point Calibration", 0));
        pointCalStart->setText(QApplication::translate("tuiomultiplexer", "Start Point Calibration", 0));
        normCoordinates->setText(QApplication::translate("tuiomultiplexer", "Normalize Coordinates", 0));
        label_8->setText(QApplication::translate("tuiomultiplexer", "Num of Points :", 0));
        label_9->setText(QApplication::translate("tuiomultiplexer", "Distance from border :", 0));
        label_10->setText(QApplication::translate("tuiomultiplexer", "Frames for each point :", 0));
        label_7->setText(QApplication::translate("tuiomultiplexer", "Update Threshold : ", 0));
        sendCalibrated->setText(QApplication::translate("tuiomultiplexer", "Send Calibrated Data", 0));
        saveCal->setText(QApplication::translate("tuiomultiplexer", "Save", 0));
        loadCal->setText(QApplication::translate("tuiomultiplexer", "Load", 0));
        groupBox_2->setTitle(QApplication::translate("tuiomultiplexer", "Output TUIO", 0));
        label_11->setText(QApplication::translate("tuiomultiplexer", "How long to keep the object alive", 0));
    } // retranslateUi

};

namespace Ui {
    class tuiomultiplexer: public Ui_tuiomultiplexer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TUIOMULTIPLEXER_H
