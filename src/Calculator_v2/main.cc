#include <QApplication>

#include "view/mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  s21::MainWindow w;
  w.setWindowTitle("Calculator v2");
  w.show();
  return a.exec();
}
