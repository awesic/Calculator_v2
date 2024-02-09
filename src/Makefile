SHELL=/bin/sh
GXX=g++
CFLAGS=-g -Wall -Wextra -Werror -std=c++17 -O2

C_EXT= cc
H_EXT= h
APP_NAME=Calculator_v2

CACL_DIR=Calculator_v2
MODEL_DIR=$(CACL_DIR)/model
VIEW_DIR=$(CACL_DIR)/view
CONTR_DIR=$(CACL_DIR)/controller

HEADERS = $(wildcard $(MODEL_DIR)*/*.$(H_EXT) $(CONTR_DIR)*/*.$(H_EXT) $(VIEW_DIR)*/*.$(H_EXT))
CC_FILE = $(wildcard $(MODEL_DIR)*/*.$(C_EXT) $(CONTR_DIR)*/*.$(C_EXT) $(VIEW_DIR)*/*.$(C_EXT))

CC_FILE_MODEL = $(wildcard $(MODEL_DIR)*/*.$(C_EXT))


UNAME_S = $(shell uname -s)

ifeq ($(UNAME_S),Linux) # Linux
	OPEN_CMD = xdg-open
	TEST_CHECK_LIB = -lgtest
	ADD_LIB = -lm -pthread
endif
ifeq ($(UNAME_S),Darwin) # MacOS
	OPEN_CMD = open
	TEST_CHECK_LIB = -lgtest
	ADD_LIB = -lm -pthread
endif

all: clean uninstall dist tests install dvi

install:
	rm -rf build
	mkdir build
	qmake6 $(CACL_DIR)/$(APP_NAME).pro -o build
	$(MAKE) -C build

uninstall:
	rm -rf build

tests: clean
	$(GXX) $(CFLAGS) ${CC_FILE_MODEL} $(CACL_DIR)/tests/test.cc $(TEST_CHECK_LIB) $(ADD_LIB) -o test 
	./test

dist:
	rm -rf $(APP_NAME).tar.gz $(APP_NAME)
	mkdir $(APP_NAME)
	cp -r Makefile Doxyfile $(APP_NAME) QCustomPlotLib $(APP_NAME)/ 
	tar -czvf $(APP_NAME).tar.gz $(APP_NAME)/
	rm -rf $(APP_NAME)

dvi:
	doxygen Doxyfile
	$(OPEN_CMD) html/index.html

clean:
	rm -rf test *.dSYM $(APP_NAME).tar.gz $(CACL_DIR)/$(APP_NAME).pro.* latex html build-*

style_check:
	clang-format --style=Google -n ${CC_FILE} ${HEADERS}

style_fix:
	clang-format --style=Google -i ${CC_FILE} ${HEADERS}