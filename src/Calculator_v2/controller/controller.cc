#include "controller.h"

namespace s21 {

/// @brief Controller constructor, init model
Controller::Controller() : model_(CalcModel()), creditModel_(CreditModel()) {}

/// @brief Calculate controller
/// @param maimWind MainWindow pointer
void Controller::calculate(MainWindow *maimWind) {
  model_.modelCalculate(maimWind->getInputText(), maimWind->getInputX());
  maimWind->setResultText(model_.getResult());
}

/// @brief Get calculated graph from model
/// @param maimWind MainWindow pointer
/// @return std::pair<std::vector<double>, std::vector<double>>
CalcModel::GraphXY Controller::getGraphFromModel(MainWindow *maimWind) {
  model_.graphCalculate(maimWind->getInputText(), maimWind->getStep(),
                        maimWind->getXMax(), maimWind->getXMin(),
                        maimWind->getYMax(), maimWind->getYMin());
  return model_.getGraph();
}

/// @brief Calculates the credit
/// @param maimWind MainWindow object pointer
/// @return Controller::CreditResult
Controller::CreditResult Controller::getCreditCalculated(MainWindow *maimWind) {
  CreditResult result;
  creditModel_.calcCredit(
      maimWind->getCreditType(), maimWind->getCreditAmount(),
      maimWind->getCreditTerm(), maimWind->getCreditTermType(),
      maimWind->getCreditRate());
  result.monthlyPay = creditModel_.getMonthlyPay();
  result.overPay = creditModel_.getOverPay();
  result.totalPay = creditModel_.getTotalPay();
  return result;
}

/// @brief Calculates the deposit
/// @param maimWind MainWind object pointer
/// @param repl vector of input replanishments
/// @param withdwl vector of input partial withdrawals
void Controller::depositCalc(MainWindow *maimWind, std::vector<double> &repl,
                             std::vector<double> &withdwl) {
  depositModel_.calcDeposit(
      maimWind->getDepositAmount(), maimWind->getDepositTerm(),
      maimWind->getDepositInterest(), maimWind->getDepositTaxRate(),
      maimWind->getDepositPayPeriod(), maimWind->getDepositCapitaliz(), repl,
      withdwl);
  maimWind->setDepositTotalAmount(depositModel_.getTotalAmount());
  maimWind->setDepositInterest(depositModel_.getInterestAmount());
  maimWind->setDepositTaxAmount(depositModel_.getTaxAmount());
}

}  // namespace s21
