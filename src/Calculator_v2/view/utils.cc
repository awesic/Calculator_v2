#include <QtWidgets/QTableWidgetItem>
#include <map>

#include "mainwindow.h"
#include "ui_mainwindow.h"

namespace s21 {

bool MainWindow::isNeededBrk(const QString &str) {
  return (needBrk.find(str) != needBrk.end());
}

void MainWindow::setTextBetweenCursor(qsizetype &pos, QString &btnText) {
  inputText_ = ui_->input_text->displayText();
  if (btnText == 'e') {
    btnText = QString::number(M_E, 'g', 8);
  } else if (btnText == "π") {
    btnText = QString::number(M_PI, 'g', 8);
  } else if (btnText == "√") {
    btnText = "sqrt";
  } else if (btnText == "÷") {
    btnText = "/";
  } else if (btnText == "✕") {
    btnText = "*";
  }
  inputText_.insert(pos, btnText);
  autoBrktsOpenClose(pos, btnText);
  ui_->input_text->setText(inputText_);
  ui_->input_text->setCursorPosition(pos + btnText.length());
}

void MainWindow::autoBrktsOpenClose(qsizetype &pos, const QString &btnText) {
  if (isNeededBrk(btnText)) {
    if (btnText != "(") {
      inputText_.insert(pos + btnText.length(), "()");
      ++pos;
    } else {
      inputText_.insert(pos + btnText.length(), ")");
    }
  }
}

void MainWindow::getItemsFromTables(std::vector<double> &replItems,
                                    std::vector<double> &pwdItems, int days,
                                    QDate today) {
  for (int row = 0; row < ui_->tableWidget_repl->rowCount(); ++row) {
    QTableWidgetItem *dateItem = ui_->tableWidget_repl->item(row, 0);
    QTableWidgetItem *sumItem = ui_->tableWidget_repl->item(row, 1);
    if (dateItem && sumItem) {
      QDate date = dateItem->data(Qt::EditRole).toDate();
      double summa = sumItem->data(Qt::EditRole).toDouble();
      if (!std::isnormal(summa)) {
        throw std::invalid_argument(
            "Amount in replenishments list must be number.");
      }
      int curDays = abs(today.daysTo(date));
      if (curDays > days) {
        throw std::invalid_argument(
            "The replenishment date is beyond the deposit period.");
      } else {
        replItems[curDays] = summa;
      }
    }
  }

  for (int row = 0; row < ui_->tableWidget_pwd->rowCount(); ++row) {
    QTableWidgetItem *dateItem = ui_->tableWidget_pwd->item(row, 0);
    QTableWidgetItem *sumItem = ui_->tableWidget_pwd->item(row, 1);
    if (dateItem && sumItem) {
      QDate date = dateItem->data(Qt::EditRole).toDate();
      double summa = sumItem->data(Qt::EditRole).toDouble();
      int curDays = abs(today.daysTo(date));
      if (!std::isnormal(summa)) {
        throw std::invalid_argument(
            "Amount in withdrawals list must be number.");
      }
      if (curDays > days) {
        throw std::invalid_argument(
            "The withdrawal date is beyond the deposit period.");
      } else {
        pwdItems[curDays] = summa;
      }
    }
  }
}

}  // namespace s21
