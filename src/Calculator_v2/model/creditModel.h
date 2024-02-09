#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_CREDITMODEL_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_CREDITMODEL_H_

#include <cmath>
#include <vector>

namespace s21 {

//! Model class for calculate credit

class CreditModel {
 public:
  enum Annu_Diff { ANNUITY, DIFF };
  enum Year_Month { MONTH, YEARS };

  CreditModel() : monthlyPay_(0.0), overPay_(0.0), totalPay_(0.0) {}
  ~CreditModel() = default;

  void calcCredit(Annu_Diff type, double amount, double term, Year_Month y_m,
                  double rate);

  std::vector<double> getMonthlyPay();
  double getOverPay() const;
  double getTotalPay() const;

 private:
  void calcCredit_Ann(double amount, double term, double rate);
  void calcCredit_Dif(double amount, double term, double rate);
  void clearAll();

  std::vector<double> monthlyPay_;
  double overPay_;
  double totalPay_;
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_CREDITMODEL_H_