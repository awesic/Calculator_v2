#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_MAINWINDOW_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_MAINWINDOW_H_

#include <QMessageBox>
#include <QtGui/QKeyEvent>
#include <QtWidgets/QMainWindow>
#include <string>

#include "controller/controller.h"
#include "itemdelegate.h"

//! Ui namespace
/*!
Default qt mainwindow namespace
*/
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}  // namespace Ui
QT_END_NAMESPACE

//! s21 namespace
/*!
SmartCalc`s work namespace
*/
namespace s21 {

class Controller;

//! The main application class
/*!
This class provides the main application interface
*/
class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

  // GETTERS FOR CALCULATOR
  std::string getInputText() const;
  double getInputX() const;
  double getStep() const;
  double getXMax() const;
  double getXMin() const;
  double getYMax() const;
  double getYMin() const;
  // GETTERS FOR CREDIT
  double getCreditAmount() const;
  double getCreditTerm() const;
  double getCreditRate() const;
  CreditModel::Annu_Diff getCreditType() const;
  CreditModel::Year_Month getCreditTermType() const;
  // GETTERS FOR DEPOSIT
  int getDepositTerm() const;
  double getDepositAmount() const;
  double getDepositInterest() const;
  double getDepositTaxRate() const;
  int getDepositPayPeriod() const;
  bool getDepositCapitaliz() const;

  // SETTERS
  void setResultText(const double result);
  void setDepositTotalAmount(const double result);
  void setDepositTaxAmount(const double result);
  void setDepositInterest(const double result);

 private slots:
  void connectBtns();
  void setBtnTextToInputText();
  void clearInputAndResult();
  void on_btn_backspace_clicked();
  void on_btn_eq_clicked();
  void on_btn_plot_clicked();
  void on_btn_replAdd_clicked();
  void on_btn_replDel_clicked();
  void on_btn_pwdAdd_clicked();
  void on_btn_pwdDel_clicked();
  void on_btn_creditCalculate_clicked();
  void on_btn_DepositCalculate_clicked();

 private:
  void keyPressEvent(QKeyEvent *event);  //!< Handle key press
  Ui::MainWindow *ui_;
  Controller *controller_;
  QString inputText_;

  bool isNeededBrk(const QString &str);
  void setTextBetweenCursor(qsizetype &pos, QString &btnText);
  void autoBrktsOpenClose(
      qsizetype &pos,
      const QString &btnText);  //!< set close brackets if needed
  void getItemsFromTables(std::vector<double> &replItems,
                          std::vector<double> &pwdItems, int days,
                          QDate today);  //!< get items from tables
  std::map<QString, bool> needBrk{
      {"(", true},    {"sin", true},  {"cos", true},  {"tan", true},
      {"asin", true}, {"acos", true}, {"atan", true}, {"sqrt", true}};
};

}  // namespace s21

#endif  // CPP3_SMARTCALC_2_SRC_SMARTCALC_V2_VIEW_MAINWINDOW_H_
