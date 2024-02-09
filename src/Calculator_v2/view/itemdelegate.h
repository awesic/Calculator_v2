#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_ITEMDELEGATE_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_ITEMDELEGATE_H_

#include <QLineEdit>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QStyledItemDelegate>

#include "qlineedit.h"

namespace s21 {
class NumericItemDelegate : public QStyledItemDelegate {
 public:
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                        const QModelIndex &index) const override {
    Q_UNUSED(option)
    Q_UNUSED(index)

    QLineEdit *editor = new QLineEdit(parent);
    editor->setValidator(new QDoubleValidator(0, 1e+10, 2, editor));

    return editor;
  }
};

class DateItemDelegate : public QStyledItemDelegate {
 public:
  QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                        const QModelIndex &index) const override {
    Q_UNUSED(option)
    Q_UNUSED(index)

    QDateEdit *editor = new QDateEdit(parent);
    editor->setDisplayFormat("dd.MM.yyyy");
    editor->setDate(QDate::currentDate());
    editor->setMinimumDate(QDate::currentDate());

    return editor;
  }
};
}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_VIEW_ITEMDELEGATE_H_
