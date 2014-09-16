/********************************************************************************
** Form generated from reading UI file 'testblobsmixto.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTBLOBSMIXTO_H
#define UI_TESTBLOBSMIXTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include "glwidget2d.h"

QT_BEGIN_NAMESPACE

class Ui_testblobsmixto
{
public:
    glwidget2d *glmixto;
    glwidget2d *gl1;
    glwidget2d *gl2;
    QCheckBox *mixblobs;

    void setupUi(QDialog *testblobsmixto)
    {
        if (testblobsmixto->objectName().isEmpty())
            testblobsmixto->setObjectName(QStringLiteral("testblobsmixto"));
        testblobsmixto->resize(785, 494);
        glmixto = new glwidget2d(testblobsmixto);
        glmixto->setObjectName(QStringLiteral("glmixto"));
        glmixto->setGeometry(QRect(40, 20, 671, 261));
        gl1 = new glwidget2d(testblobsmixto);
        gl1->setObjectName(QStringLiteral("gl1"));
        gl1->setGeometry(QRect(40, 300, 251, 171));
        gl2 = new glwidget2d(testblobsmixto);
        gl2->setObjectName(QStringLiteral("gl2"));
        gl2->setGeometry(QRect(450, 300, 261, 171));
        mixblobs = new QCheckBox(testblobsmixto);
        mixblobs->setObjectName(QStringLiteral("mixblobs"));
        mixblobs->setGeometry(QRect(350, 380, 51, 22));

        retranslateUi(testblobsmixto);

        QMetaObject::connectSlotsByName(testblobsmixto);
    } // setupUi

    void retranslateUi(QDialog *testblobsmixto)
    {
        testblobsmixto->setWindowTitle(QApplication::translate("testblobsmixto", "Multicam Touch Tester", 0));
        mixblobs->setText(QApplication::translate("testblobsmixto", "Mix?", 0));
    } // retranslateUi

};

namespace Ui {
    class testblobsmixto: public Ui_testblobsmixto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTBLOBSMIXTO_H
