#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_CONTROLLER_CONTROLLER_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_CONTROLLER_CONTROLLER_H_

#include "model/creditModel.h"
#include "model/depositModel.h"
#include "model/model.h"
#include "view/mainwindow.h"

namespace s21 {

class MainWindow;
//! The class controller for the main window
/*!
  Stands between view and model classes. Enables interaction between the main
  window and the model
*/
class Controller {
 public:
  using GraphXY = CalcModel::GraphXY;

  Controller();
  ~Controller() = default;

  class CreditResult {  //!< A subclass of Controller that can be used to store
                        //!< a credit calculated result
   public:
    CreditResult() : monthlyPay(0.0), totalPay(0.0), overPay(0.0) {}
    std::vector<double> monthlyPay;
    double totalPay;
    double overPay;
  };

  void calculate(MainWindow *maimWind);
  CalcModel::GraphXY getGraphFromModel(MainWindow *maimWind);
  CreditResult getCreditCalculated(MainWindow *maimWind);
  void depositCalc(MainWindow *mainWind, std::vector<double> &repl,
                   std::vector<double> &withdwl);

 private:
  CalcModel model_;
  CreditModel creditModel_;
  DepositModel depositModel_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_CONTROLLER_CONTROLLER_H_
