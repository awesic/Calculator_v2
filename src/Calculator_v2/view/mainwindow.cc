#include "mainwindow.h"

#include "graphic/plotgraph.h"
#include "ui_mainwindow.h"

namespace s21 {

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui_(new Ui::MainWindow),
      controller_(new Controller) {
  ui_->setupUi(this);
  connectBtns();
}

MainWindow::~MainWindow() {
  delete ui_;
  delete controller_;
}

/*****************************************************************************
 *                               Calculator                                  *
 *****************************************************************************/

/// @brief get input text
/// @return string
std::string MainWindow::getInputText() const {
  return ui_->input_text->displayText().toStdString();
}
/// @brief get x value
/// @return double
double MainWindow::getInputX() const { return ui_->x_val->value(); }
/// @brief get step
/// @return double
double MainWindow::getStep() const { return ui_->step->value(); }
/// @brief get x max value
/// @return double
double MainWindow::getXMax() const { return ui_->x_max->value(); }
/// @brief get x min value
/// @return double
double MainWindow::getXMin() const { return ui_->x_min->value(); }
/// @brief get y max value
/// @return double
double MainWindow::getYMax() const { return ui_->y_max->value(); }
/// @brief get y min value
/// @return double
double MainWindow::getYMin() const { return ui_->y_min->value(); }
/// @brief set calculated result
/// @param result
void MainWindow::setResultText(const double result) {
  ui_->result_print->setText(QString::number(result, 'g', 16));
}

/// @brief set button text to input variable
void MainWindow::setBtnTextToInputText() {
  QPushButton *btn = (QPushButton *)sender();
  qsizetype cpos = ui_->input_text->cursorPosition();
  QString btnText = btn->text();
  setTextBetweenCursor(cpos, btnText);
}

/// @brief clear input and result variables
void MainWindow::clearInputAndResult() {
  ui_->input_text->clear();
  ui_->result_print->clear();
  inputText_.clear();
}

/// @brief backspace ui input_text
void MainWindow::on_btn_backspace_clicked() { ui_->input_text->backspace(); }

/// @brief calculate expression on equal button
void MainWindow::on_btn_eq_clicked() {
  try {
    inputText_ = ui_->input_text->displayText();
    controller_->calculate(this);
  } catch (const std::exception &e) {
    QMessageBox::critical(this, "Warning", e.what());
  }
}

/// @brief plot graphic
void MainWindow::on_btn_plot_clicked() {
  inputText_ = ui_->input_text->displayText();
  try {
    Controller::GraphXY graphXY = controller_->getGraphFromModel(this);

    QList<double> xList, yList;
    xList.reserve(graphXY.first.size());
    yList.reserve(graphXY.second.size());
    std::copy(graphXY.first.begin(), graphXY.first.end(),
              std::back_inserter(xList));
    std::copy(graphXY.second.begin(), graphXY.second.end(),
              std::back_inserter(yList));

    std::pair<QVector<double>, QVector<double>> graph = std::make_pair(
        QVector<double>::fromVector(xList), QVector<double>::fromVector(yList));
    PlotGraph field;
    field.plotGraph(graph, ui_->x_max->value(), ui_->x_min->value(),
                    ui_->y_max->value(), ui_->y_min->value());
    field.exec();

    xList.clear();
    yList.clear();
    graph.first.clear();
    graph.second.clear();
  } catch (const std::exception &e) {
    QMessageBox::critical(this, "Warning", e.what());
  }
}

/*****************************************************************************
 *                                 Credit                                    *
 *****************************************************************************/

/// @brief Get the credit amount
/// @return double
double MainWindow::getCreditAmount() const {
  return (double)ui_->creditAmount->value();
}
/// @brief Get the credit term
/// @return double
double MainWindow::getCreditTerm() const {
  return (double)ui_->creditTerm->value();
}
/// @brief Get the credit rate
/// @return double
double MainWindow::getCreditRate() const {
  return ui_->creditInterestRate->value();
}
/// @brief Get the credit term type
/// @return CreditModel::Year_Month enum
CreditModel::Year_Month MainWindow::getCreditTermType() const {
  return ui_->creditYearMonth->currentIndex() ? CreditModel::YEARS
                                              : CreditModel::MONTH;
}
/// @brief Get the credit type
/// @return CreditModel::Annu_Diff enum
CreditModel::Annu_Diff MainWindow::getCreditType() const {
  return ui_->creditDifferentiated->isChecked() ? CreditModel::DIFF
                                                : CreditModel::ANNUITY;
}

/// @brief Calculate credit
void MainWindow::on_btn_creditCalculate_clicked() {
  try {
    Controller::CreditResult creditRes = controller_->getCreditCalculated(this);

    ui_->creditTotalPay->setText(
        QString::number(ceil(creditRes.totalPay * 100) / 100, 'f', 2));
    ui_->creditOverpay->setText(
        QString::number(ceil(creditRes.overPay * 100) / 100, 'f', 2));
    if (ui_->creditAnnuity->isChecked()) {
      ui_->creditMonthlyPay->setText(QString::number(
          ceil(creditRes.monthlyPay.front() * 100) / 100, 'f', 2));
    } else {
      QString tempStr;
      for (double item : creditRes.monthlyPay) {
        tempStr.append(QString::number(ceil(item * 100) / 100, 'f', 2) + "\n");
      }
      ui_->creditMonthlyPay->setText(tempStr);
    }
  } catch (const std::exception &e) {
    QMessageBox::critical(this, "Warning", e.what());
  }
}

/*****************************************************************************
 *                                Deposit                                    *
 *****************************************************************************/

/// @brief Get the deposit term in months
/// @return int number of months
int MainWindow::getDepositTerm() const {
  return ui_->depositYearMonth->currentIndex() ? ui_->depositTerm->value()
                                               : 12 * ui_->depositTerm->value();
}
/// @brief Get the deposit amount
/// @return double amount
double MainWindow::getDepositAmount() const {
  return (double)ui_->depositAmount->value();
}
/// @brief Get the deposit interest rate
/// @return double interest rate
double MainWindow::getDepositInterest() const {
  return ui_->depositInterestRate->value();
}
/// @brief Get the deposit tax rate
/// @return double tax rate
double MainWindow::getDepositTaxRate() const {
  return ui_->depositTaxRate->value();
}
/// @brief Get the deposit payment period in months
/// @return number of months
int MainWindow::getDepositPayPeriod() const {
  switch (ui_->depositPeriodisity->currentIndex()) {
    case 0:
      return 1;
    case 1:
      return 3;
    case 2:
      return 6;
    case 3:
      return 12;
    case 4:
      return getDepositTerm();
  }
  return ui_->depositPeriodisity->currentIndex();
}
/// @brief Get the deposit capitalisation
/// @return bool capitalisation
bool MainWindow::getDepositCapitaliz() const {
  return ui_->depositCapitalizOfInterest->isChecked();
}
/// @brief Set the deposit amount for the end of the term
/// @param result amount value
void MainWindow::setDepositTotalAmount(const double result) {
  ui_->depositAmontEndTerm->setText(
      QString::number(ceil(result * 100) / 100, 'f', 2));
}
/// @brief Set the deposit tax amount
/// @param result tax amount value
void MainWindow::setDepositTaxAmount(const double result) {
  ui_->depositTaxAmount->setText(
      QString::number(ceil(result * 100) / 100, 'f', 2));
}
/// @brief Set deposit accrued interest
/// @param result interest value
void MainWindow::setDepositInterest(const double result) {
  ui_->depositAccruedInterest->setText(
      QString::number(ceil(result * 100) / 100, 'f', 2));
}

/// @brief Private slot to add item to replenishments list
void MainWindow::on_btn_replAdd_clicked() {
  QTableWidgetItem *dateItem = new QTableWidgetItem();
  QTableWidgetItem *sumItem = new QTableWidgetItem();
  DateItemDelegate *dateDelegate = new DateItemDelegate();
  NumericItemDelegate *sumDelegate = new NumericItemDelegate();

  ui_->tableWidget_repl->setItemDelegateForColumn(0, dateDelegate);
  ui_->tableWidget_repl->setItemDelegateForColumn(1, sumDelegate);

  ui_->tableWidget_repl->insertRow(ui_->tableWidget_repl->rowCount());

  ui_->tableWidget_repl->setItem(ui_->tableWidget_repl->rowCount(), 0,
                                 dateItem);
  ui_->tableWidget_repl->setItem(ui_->tableWidget_repl->rowCount(), 1, sumItem);
}
/// @brief Private slot to remove item from replanishments list
void MainWindow::on_btn_replDel_clicked() {
  ui_->tableWidget_repl->removeRow(ui_->tableWidget_repl->rowCount() - 1);
}

/// @brief Private slot to add item to partial withdrawals list
void MainWindow::on_btn_pwdAdd_clicked() {
  QTableWidgetItem *dateItem = new QTableWidgetItem();
  QTableWidgetItem *sumItem = new QTableWidgetItem();
  DateItemDelegate *dateDelegate = new DateItemDelegate();
  NumericItemDelegate *sumDelegate = new NumericItemDelegate();

  ui_->tableWidget_pwd->setItemDelegateForColumn(0, dateDelegate);
  ui_->tableWidget_pwd->setItemDelegateForColumn(1, sumDelegate);

  ui_->tableWidget_pwd->insertRow(ui_->tableWidget_pwd->rowCount());

  ui_->tableWidget_pwd->setItem(ui_->tableWidget_pwd->rowCount(), 0, dateItem);
  ui_->tableWidget_pwd->setItem(ui_->tableWidget_pwd->rowCount(), 1, sumItem);
}
/// @brief Private slot to remove item from partial withdrawals list
void MainWindow::on_btn_pwdDel_clicked() {
  ui_->tableWidget_pwd->removeRow(ui_->tableWidget_pwd->rowCount() - 1);
}

/// @brief Private slot to handle deposit calculation button press
void MainWindow::on_btn_DepositCalculate_clicked() {
  QDate today = QDate::currentDate();
  QDate endDate = today.addMonths(getDepositTerm());
  int days = abs(endDate.daysTo(today));
  try {
    std::vector<double> replSum(days + 1);
    std::vector<double> pwdSum(days + 1);

    getItemsFromTables(replSum, pwdSum, days, today);
    controller_->depositCalc(this, replSum, pwdSum);

    replSum.clear();
    pwdSum.clear();
  } catch (std::exception &e) {
    QMessageBox::critical(this, "Warning", e.what());
  }
}

void MainWindow::connectBtns() {
  // CALCULATOR
  connect(ui_->btn_0, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_1, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_2, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_3, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_4, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_5, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_6, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_7, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_8, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_9, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_dot, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_plus, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_minus, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_div, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_mul, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_mod, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_percent, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_brk_close, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_brk_open, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_acos, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_asin, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_atan, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_cos, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_sin, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_tan, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_ln, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_log, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_pow, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_sqrt, SIGNAL(clicked()), this,
          SLOT(setBtnTextToInputText()));
  connect(ui_->btn_x, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_e, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_pi, SIGNAL(clicked()), this, SLOT(setBtnTextToInputText()));
  connect(ui_->btn_AC, SIGNAL(clicked()), this, SLOT(clearInputAndResult()));
}

void MainWindow::keyPressEvent(QKeyEvent *event) {
  if (event->key() == Qt::Key_Return or event->key() == Qt::Key_Enter) {
    emit ui_->btn_eq->clicked();
  }
}

}  // namespace s21
