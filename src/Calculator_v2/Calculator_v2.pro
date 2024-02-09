QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

CONFIG += c++17

lessThan(QT_MAJOR_VERSION, 5): QMAKE_CXXFLAGS += -std=c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += ../QCustomPlotLib/

SOURCES += \
    main.cc \
    model/creditModel.cc \
    model/depositModel.cc \
    view/graphic/plotgraph.cc \
    ../QCustomPlotLib/qcustomplot.cpp \
    view/mainwindow.cc \
    view/utils.cc \
    controller/controller.cc \
    model/calculator.cc

HEADERS += \
    model/creditModel.h \
    model/depositModel.h \
    view/itemdelegate.h \
    view/graphic/plotgraph.h \
    ../QCustomPlotLib/qcustomplot.h \
    view/mainwindow.h \
#    view/utils.h \
    controller/controller.h \
    model/model.h

FORMS += \
    view/graphic/plotgraph.ui \
    view/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
