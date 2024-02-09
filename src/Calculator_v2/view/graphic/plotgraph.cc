#include "plotgraph.h"

#include "ui_plotgraph.h"

namespace s21 {

PlotGraph::PlotGraph(QWidget* parent)
    : QDialog(parent), ui_(new Ui::PlotGraph) {
  ui_->setupUi(this);
}

PlotGraph::~PlotGraph() { delete ui_; }

/// @brief The main function of the plot graph
/// @param graph std::pair<QVector<double>, QVector<double>> x and y coordinates
/// @param xMax
/// @param xMin
/// @param yMax
/// @param yMin
void PlotGraph::plotGraph(std::pair<QVector<double>, QVector<double>> graph,
                          double xMax, double xMin, double yMax, double yMin) {
  int graphCount = 0;
  ui_->widget->clearGraphs();

  try {
    ui_->widget->xAxis->setRange(xMin, xMax);
    ui_->widget->yAxis->setRange(yMin, yMax);
    ui_->widget->setInteractions(QCP::iRangeZoom | QCP::iRangeDrag);

    ui_->widget->addGraph();
    ui_->widget->graph()->setPen(QPen(Qt::blue, 3));

    ui_->widget->graph(graphCount)->addData(graph.first, graph.second);

    ui_->widget->replot();
  } catch (std::exception& e) {
    QMessageBox::critical(this, "Warning", e.what());
  }
}

}  // namespace s21
