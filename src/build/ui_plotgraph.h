/********************************************************************************
** Form generated from reading UI file 'plotgraph.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOTGRAPH_H
#define UI_PLOTGRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE

class Ui_PlotGraph
{
public:
    QCustomPlot *widget;

    void setupUi(QDialog *PlotGraph)
    {
        if (PlotGraph->objectName().isEmpty())
            PlotGraph->setObjectName("PlotGraph");
        PlotGraph->resize(769, 505);
        widget = new QCustomPlot(PlotGraph);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 9, 751, 491));

        retranslateUi(PlotGraph);

        QMetaObject::connectSlotsByName(PlotGraph);
    } // setupUi

    void retranslateUi(QDialog *PlotGraph)
    {
        PlotGraph->setWindowTitle(QCoreApplication::translate("PlotGraph", "Graphic", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotGraph: public Ui_PlotGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOTGRAPH_H
