#include "depositModel.h"

namespace s21 {

/// @brief The main function of the deposit calculation
/// @param amount amount of the deposit
/// @param term term of the deposit
/// @param interestRate interest rate of the deposit
/// @param taxRate tax rate of the deposit
/// @param paymentPeriod payment period in months of the deposit
/// @param capitalization capitalization of the deposit (bool)
/// @param replenishs vector of replacements
/// @param withdrawals vector of withdrawals
void DepositModel::calcDeposit(double amount, int term, double interestRate,
                               double taxRate, int paymentPeriod,
                               bool capitalization,
                               std::vector<double> &replenishs,
                               std::vector<double> &withdrawals) {
  amount_ = amount;
  interest_ = calcInterestInDays(paymentPeriod, term, capitalization,
                                 interestRate, replenishs, withdrawals);
  taxAmount_ = calcTaxAmount(taxRate, interest_);
  amountAtTheEnd_ = calcTotalAmount(interest_, taxAmount_, capitalization);
}
/// @brief Get the accrued interest
/// @return double accrued interest
double DepositModel::getInterestAmount() const { return interest_; }
/// @brief Get the tax amount
/// @return double tax amount
double DepositModel::getTaxAmount() const { return taxAmount_; }
/// @brief Get the amount by the end of the term
/// @return double total amount
double DepositModel::getTotalAmount() const { return amountAtTheEnd_; }
/// @brief Get current date
/// @return current date
tm *DepositModel::getCurrentDate() {
  std::time_t time = std::time(nullptr);
  return std::localtime(&time);
}
/// @brief Counts days to next the payment
/// @param currDate current date
/// @param paymentPeriod payment period in months
/// @return days to next payment
int DepositModel::countPaymentPeriodDays(tm *currDate, int paymentPeriod) {
  int days = 0;
  tm nextDate = *currDate;

  if (paymentPeriod < 12) {
    nextDate.tm_mon += paymentPeriod;
  } else if (paymentPeriod == 12) {
    nextDate.tm_year++;
  }
  time_t t1 = mktime(currDate);
  time_t t2 = mktime(&nextDate);
  double diffTime = difftime(t2, t1);
  days = round(diffTime / 86400);
  *currDate = nextDate;

  return days;
}
/// @brief Counts days until the new year
/// @param currDate current date
/// @return int of days until the new year
int DepositModel::getDaysToNewYear(tm currDate) {
  int days = 0;
  struct tm nextDate = currDate;
  nextDate.tm_mday = 1;
  nextDate.tm_mon = 0;
  nextDate.tm_year++;

  time_t t1 = mktime(&currDate);
  time_t t2 = mktime(&nextDate);
  double diffTime = difftime(t2, t1);
  days = round(diffTime / 86400);

  return days;
}
/// @brief Counts total number of days
/// @param currDate current date
/// @param term term in months
/// @return int of days
int DepositModel::countDays(tm currDate, int term) {
  int days = 0;
  struct tm nextDate = currDate;

  while (term > 12) {
    nextDate.tm_year++;
    term -= 12;
  }
  while (term > 0) {
    nextDate.tm_mon++;
    term--;
  }

  time_t t1 = mktime(&currDate);
  time_t t2 = mktime(&nextDate);

  double diffTime = difftime(t2, t1);
  days = round(diffTime / 86400);

  return days;
}
/// @brief Counts the number of days in year
/// @param currDate current date
/// @return int of days in year
int DepositModel::getDaysInYear(tm currDate) {
  int days = 0;
  currDate.tm_mday = 1;
  currDate.tm_mon = 0;

  tm nextDate = currDate;
  nextDate.tm_year++;

  time_t t1 = mktime(&currDate);
  time_t t2 = mktime(&nextDate);

  double dif_time = difftime(t2, t1);
  days = round(dif_time / 86400);

  return days;
}
/// @brief Calculates the accrued interest
/// @param paymentPeriod
/// @param term
/// @param capitalization
/// @param annualInterestRate
/// @param replenishments
/// @param withdrawals
/// @return amount of accrued interest
double DepositModel::calcInterestInDays(int paymentPeriod, int term,
                                        bool capitalization,
                                        double annualInterestRate,
                                        std::vector<double> &replenishments,
                                        std::vector<double> &withdrawals) {
  double interestSumm = 0, interestPeriod = 0;
  tm *currDate = getCurrentDate();

  int termDays = countDays(*currDate, term);
  int daysInYear = getDaysInYear(*currDate);
  int daysToNewYear = getDaysToNewYear(*currDate);
  int daysToNextPay = countPaymentPeriodDays(currDate, paymentPeriod);

  for (int day = 1, payDay = 1; day <= termDays; ++day, ++payDay) {
    // counting rate per day
    double interestDay = amount_ * annualInterestRate * 0.01 / daysInYear;
    interestPeriod += interestDay;

    // count days until new year
    if (day == daysToNewYear) {
      daysInYear = getDaysInYear(*currDate);
      daysToNewYear = daysInYear;
    }

    // when payment day comes
    if (payDay == daysToNextPay) {
      daysToNextPay = countPaymentPeriodDays(currDate, paymentPeriod);
      interestSumm += interestPeriod;
      if (capitalization) {
        amount_ += interestPeriod;
      }
      payDay = 0;
      interestPeriod = 0;
    }

    if (!replenishments.empty()) {
      amount_ += replenishments[day];
    }
    if (!withdrawals.empty()) {
      if (amount_ - withdrawals[day] > 0) {
        amount_ -= withdrawals[day];
      } else {
        throw std::logic_error(
            "Withdrawals cannot be more than deposit amount.");
      }
    }
  }
  interestSumm += interestPeriod;
  if (capitalization) {
    amount_ += interestPeriod;
  }
  return interestSumm;
}
/// @brief Calculates the tax amount
/// @param taxRate
/// @param interest
/// @return double tax amount
double DepositModel::calcTaxAmount(double taxRate, double interest) {
  return interest * taxRate * 0.01;
}
/// @brief Calculates the amount by the end of the term
/// @param interest
/// @param taxAmount
/// @param capitalization
/// @return double total amount
double DepositModel::calcTotalAmount(double interest, double taxAmount,
                                     bool capitalization) {
  return capitalization ? (amount_ - taxAmount)
                        : (amount_ + interest - taxAmount);
}

}  // namespace s21
