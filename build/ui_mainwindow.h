/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionLoadPC;
    QAction *actionSavePC;
    QAction *actionLoadCS;
    QAction *actionSaveCS;
    QAction *actionSaveGS;
    QAction *actionLoadGS;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line_2;
    QFrame *line;
    QPushButton *testinfo;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QScrollArea *scrollArea;
    QWidget *scroll3d;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout3d;
    QScrollArea *scrollArea_2;
    QWidget *scroll2d;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout2d;
    QPushButton *testUser;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *line_3;
    QLabel *label_8;
    QFrame *line_5;
    QPushButton *mixViewer;
    QPushButton *calibrator3D;
    QFrame *line_6;
    QGroupBox *groupBox_3;
    QPushButton *tuioMulti;
    QFrame *line_4;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QMenu *menuPruebaGUI;
    QMenu *menuPoint_Calibration;
    QMenu *menuCamera_Settings;
    QMenu *menuGeneral_Settings;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(891, 666);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionLoadPC = new QAction(MainWindow);
        actionLoadPC->setObjectName(QStringLiteral("actionLoadPC"));
        actionSavePC = new QAction(MainWindow);
        actionSavePC->setObjectName(QStringLiteral("actionSavePC"));
        actionLoadCS = new QAction(MainWindow);
        actionLoadCS->setObjectName(QStringLiteral("actionLoadCS"));
        actionSaveCS = new QAction(MainWindow);
        actionSaveCS->setObjectName(QStringLiteral("actionSaveCS"));
        actionSaveGS = new QAction(MainWindow);
        actionSaveGS->setObjectName(QStringLiteral("actionSaveGS"));
        actionLoadGS = new QAction(MainWindow);
        actionLoadGS->setObjectName(QStringLiteral("actionLoadGS"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 851, 361));
        groupBox->setAutoFillBackground(false);
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 50, 511, 207));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 4, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 3, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 3, 1, 1, 1);

        testinfo = new QPushButton(gridLayoutWidget);
        testinfo->setObjectName(QStringLiteral("testinfo"));
        testinfo->setEnabled(false);

        gridLayout->addWidget(testinfo, 5, 1, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        gridLayout->addWidget(pushButton, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(false);

        gridLayout->addWidget(pushButton_3, 6, 0, 1, 1);

        scrollArea = new QScrollArea(gridLayoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scroll3d = new QWidget();
        scroll3d->setObjectName(QStringLiteral("scroll3d"));
        scroll3d->setGeometry(QRect(0, 0, 250, 82));
        verticalLayoutWidget = new QWidget(scroll3d);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 251, 80));
        verticalLayout3d = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout3d->setSpacing(6);
        verticalLayout3d->setContentsMargins(11, 11, 11, 11);
        verticalLayout3d->setObjectName(QStringLiteral("verticalLayout3d"));
        verticalLayout3d->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scroll3d);

        gridLayout->addWidget(scrollArea, 1, 0, 1, 1);

        scrollArea_2 = new QScrollArea(gridLayoutWidget);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        scroll2d = new QWidget();
        scroll2d->setObjectName(QStringLiteral("scroll2d"));
        scroll2d->setGeometry(QRect(0, 0, 249, 82));
        layoutWidget = new QWidget(scroll2d);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(3, 0, 251, 81));
        verticalLayout2d = new QVBoxLayout(layoutWidget);
        verticalLayout2d->setSpacing(6);
        verticalLayout2d->setContentsMargins(11, 11, 11, 11);
        verticalLayout2d->setObjectName(QStringLiteral("verticalLayout2d"));
        verticalLayout2d->setContentsMargins(0, 0, 0, 0);
        scrollArea_2->setWidget(scroll2d);

        gridLayout->addWidget(scrollArea_2, 1, 1, 1, 1);

        testUser = new QPushButton(groupBox);
        testUser->setObjectName(QStringLiteral("testUser"));
        testUser->setEnabled(false);
        testUser->setGeometry(QRect(320, 316, 191, 27));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 24, 251, 17));
        QFont font;
        font.setItalic(true);
        label_5->setFont(font);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(360, 293, 171, 17));
        label_6->setFont(font);
        line_3 = new QFrame(groupBox);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(0, 270, 821, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(634, 23, 131, 17));
        label_8->setFont(font);
        line_5 = new QFrame(groupBox);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(550, 20, 20, 241));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
        mixViewer = new QPushButton(groupBox);
        mixViewer->setObjectName(QStringLiteral("mixViewer"));
        mixViewer->setEnabled(false);
        mixViewer->setGeometry(QRect(630, 103, 131, 27));
        calibrator3D = new QPushButton(groupBox);
        calibrator3D->setObjectName(QStringLiteral("calibrator3D"));
        calibrator3D->setEnabled(false);
        calibrator3D->setGeometry(QRect(630, 57, 131, 27));
        line_6 = new QFrame(groupBox);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(570, 140, 251, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(30, 451, 531, 121));
        tuioMulti = new QPushButton(groupBox_3);
        tuioMulti->setObjectName(QStringLiteral("tuioMulti"));
        tuioMulti->setGeometry(QRect(20, 51, 491, 31));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(30, 390, 851, 16));
        line_4->setLineWidth(3);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(630, 410, 201, 192));
        graphicsView->setStyleSheet(QLatin1String("background-image: url(:/imagenes/isotipoLudique.png);\n"
"border: 0 none;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 891, 25));
        menuPruebaGUI = new QMenu(menuBar);
        menuPruebaGUI->setObjectName(QStringLiteral("menuPruebaGUI"));
        menuPoint_Calibration = new QMenu(menuPruebaGUI);
        menuPoint_Calibration->setObjectName(QStringLiteral("menuPoint_Calibration"));
        menuCamera_Settings = new QMenu(menuPruebaGUI);
        menuCamera_Settings->setObjectName(QStringLiteral("menuCamera_Settings"));
        menuGeneral_Settings = new QMenu(menuPruebaGUI);
        menuGeneral_Settings->setObjectName(QStringLiteral("menuGeneral_Settings"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPruebaGUI->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuPruebaGUI->addSeparator();
        menuPruebaGUI->addAction(actionQuit);
        menuPruebaGUI->addSeparator();
        menuPruebaGUI->addAction(menuPoint_Calibration->menuAction());
        menuPruebaGUI->addSeparator();
        menuPruebaGUI->addAction(menuCamera_Settings->menuAction());
        menuPruebaGUI->addSeparator();
        menuPruebaGUI->addAction(menuGeneral_Settings->menuAction());
        menuPoint_Calibration->addAction(actionLoadPC);
        menuPoint_Calibration->addAction(actionSavePC);
        menuCamera_Settings->addAction(actionLoadCS);
        menuCamera_Settings->addAction(actionSaveCS);
        menuGeneral_Settings->addAction(actionSaveGS);
        menuGeneral_Settings->addAction(actionLoadGS);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ludique's Kinect Bundle", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0));
        actionLoadPC->setText(QApplication::translate("MainWindow", "Load...", 0));
        actionSavePC->setText(QApplication::translate("MainWindow", "Save...", 0));
        actionLoadCS->setText(QApplication::translate("MainWindow", "Load...", 0));
        actionSaveCS->setText(QApplication::translate("MainWindow", "Save...", 0));
        actionSaveGS->setText(QApplication::translate("MainWindow", "Save...", 0));
        actionLoadGS->setText(QApplication::translate("MainWindow", "Load...", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Kinect Utilities", 0));
        label->setText(QApplication::translate("MainWindow", "3D single cam viewer(s)", 0));
        label_2->setText(QApplication::translate("MainWindow", "2D viewer(s) and touch settings", 0));
        label_3->setText(QApplication::translate("MainWindow", "Touch Data extraction : ", 0));
        label_4->setText(QApplication::translate("MainWindow", "2 Kinect touch Calibration :", 0));
        testinfo->setText(QApplication::translate("MainWindow", "Touch Extractor and TUIO sender", 0));
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        pushButton->setText(QApplication::translate("MainWindow", "2-Kinect base touch calibration", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "2 Kinect blob viewer", 0));
#ifndef QT_NO_TOOLTIP
        testUser->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        testUser->setText(QApplication::translate("MainWindow", "Skeleton to TUIO", 0));
        label_5->setText(QApplication::translate("MainWindow", "Touch methods and camera settings", 0));
        label_6->setText(QApplication::translate("MainWindow", "Skeleton methods", 0));
        label_8->setText(QApplication::translate("MainWindow", "2 Kinect 3D Viewer", 0));
        mixViewer->setText(QApplication::translate("MainWindow", "3D Mix Viewer", 0));
        calibrator3D->setText(QApplication::translate("MainWindow", "3D Calibrator", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "TUIO Utilities", 0));
        tuioMulti->setText(QApplication::translate("MainWindow", "Multiplexer, Gestures and Screen Calibration and Mapper", 0));
        menuPruebaGUI->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuPoint_Calibration->setTitle(QApplication::translate("MainWindow", "Point Calibration", 0));
        menuCamera_Settings->setTitle(QApplication::translate("MainWindow", "Camera Settings", 0));
        menuGeneral_Settings->setTitle(QApplication::translate("MainWindow", "General Settings", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
