#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_GRAPHIC_PLOTGRAPH_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_GRAPHIC_PLOTGRAPH_H_

#include <QDialog>
#include <QVector>

#include "qcustomplot.h"

namespace Ui {
class PlotGraph;
}

namespace s21 {

//! PlotGraph class for plotting graphics
class PlotGraph : public QDialog {
  Q_OBJECT

 public:
  explicit PlotGraph(QWidget *parent = nullptr);
  void plotGraph(std::pair<QVector<double>, QVector<double>> graph, double xMax,
                 double xMin, double yMax, double yMin);
  ~PlotGraph();

 private:
  Ui::PlotGraph *ui_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_GRAPHIC_PLOTGRAPH_H_
