#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_DEPOSITMODEL_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_DEPOSITMODEL_H_

#include <cmath>
#include <ctime>
#include <stdexcept>
#include <vector>

namespace s21 {

//! Model class for calculate deposit

class DepositModel {
 public:
  DepositModel()
      : interest_(0.0), taxAmount_(0.0), amountAtTheEnd_(0.0), amount_(0.0) {}
  ~DepositModel() {}

  void calcDeposit(double amount, int term, double interestRate, double taxRate,
                   int paymentPeriod, bool capitalization,
                   std::vector<double> &replenishs,
                   std::vector<double> &withdrawals);
  // GETTERS
  double getInterestAmount() const;
  double getTaxAmount() const;
  double getTotalAmount() const;

 private:
  tm *getCurrentDate();
  int countPaymentPeriodDays(tm *currDate, int paymentPeriod);
  int getDaysToNewYear(tm currDate);
  int countDays(tm currDate, int term);
  int getDaysInYear(tm currDate);
  double calcInterestInDays(int paymentPeriod, int term, bool capitalization,
                            double annualInterestRate,
                            std::vector<double> &replenishments,
                            std::vector<double> &withdrawals);
  double calcTaxAmount(double taxRate, double interest);
  double calcTotalAmount(double interest, double taxAmount,
                         bool capitalization);
  double interest_;
  double taxAmount_;
  double amountAtTheEnd_;
  double amount_;
};
}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_DEPOSITMODEL_H_
