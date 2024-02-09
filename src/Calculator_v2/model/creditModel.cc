#include "creditModel.h"

namespace s21 {
/// @brief Get the credit monthly payment vector
/// @return std::vector<double>
std::vector<double> CreditModel::getMonthlyPay() { return monthlyPay_; }
/// @brief Get the credit total payment
/// @return double
double CreditModel::getTotalPay() const { return totalPay_; }
/// @brief Get the credit overpayment
/// @return double
double CreditModel::getOverPay() const { return overPay_; }

/// @brief A main function to calculate the credit
/// @param type enum type of the credit type (Annuity / Differentiated)
/// @param amount amount of the credit
/// @param term term of the credit
/// @param y_m enum type of the credit term type (year / month)
/// @param rate rate of the credit
void CreditModel::calcCredit(Annu_Diff type, double amount, double term,
                             Year_Month y_m, double rate) {
  clearAll();
  if (y_m == Year_Month::YEARS) {
    term *= 12.0;
  }
  rate = (rate / 100.0) / 12.0;

  if (type == Annu_Diff::ANNUITY) {
    calcCredit_Ann(amount, term, rate);
  } else {
    calcCredit_Dif(amount, term, rate);
  }
}

/// @brief Calculates the annuity credit
/// @param amount amount of the credit
/// @param term term of the credit
/// @param rate rate of the credit
void CreditModel::calcCredit_Ann(double amount, double term, double rate) {
  monthlyPay_.push_back(amount * (rate + rate / (pow((1 + rate), term) - 1)));
  totalPay_ = monthlyPay_.front() * term;
  overPay_ = totalPay_ - amount;
}

/// @brief Calculates the differentiated credit
/// @param amount amount of the credit
/// @param term term of the credit
/// @param rate rate of the credit
void CreditModel::calcCredit_Dif(double amount, double term, double rate) {
  double month_pay_const = amount / term;

  for (int i = 1; i <= (int)term; ++i) {
    double remaining_debt = amount - month_pay_const * (i - 1);
    monthlyPay_.push_back(month_pay_const + remaining_debt * rate);
    totalPay_ += monthlyPay_.back();
  }
  overPay_ = totalPay_ - amount;
}

/// @brief clears all the class variables
void CreditModel::clearAll() {
  monthlyPay_.clear();
  totalPay_ = 0.0;
  overPay_ = 0.0;
}

}  // namespace s21