#include <gtest/gtest.h>

#include "../model/model.h"

TEST(ThrowError, ThrowError1) {
  s21::CalcModel model;
  std::string expression = "x+2y";
  try {
    model.modelCalculate(expression, 0.0);
  } catch (std::exception &e) {
    EXPECT_STREQ("Incorrect input: y", e.what());
  }
}

TEST(ThrowError, ThrowError2) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate(") cos(2.0) + 3x", 0.764));
}

TEST(ThrowError, ThrowError3) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("3x + 4.0432 // tan(3.12)", 1 / 2));
}

TEST(ThrowError, ThrowError4) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("5 / 0", NAN));
}

TEST(ThrowError, ThrowError5) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate(")", NAN));
}

TEST(ThrowError, ThrowError6) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("(3 + 3.2))", NAN));
}

TEST(ThrowError, ThrowError7) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("3mod", NAN));
}

TEST(ThrowError, ThrowError8) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("82039.23 /", NAN));
}

TEST(ThrowError, ThrowError9) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("* 932.932", NAN));
}

TEST(ThrowError, ThrowError10) {
  s21::CalcModel model;
  EXPECT_ANY_THROW(model.modelCalculate("-1000-", NAN));
}

TEST(Calculate, Calculate1) {
  std::string expression = "sin(4 + 2) + cos(0.3)";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(sin(4 + 2) + cos(0.3), model.getResult());
}

TEST(Calculate, Calculate2) {
  std::string expression = "(60 / 12 + 45) - (14 * 2 + 12)";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(((60 / 12 + 45) - (14 * 2 + 12)), model.getResult());
}

TEST(Calculate, Calculate3) {
  std::string expression = "cos(60 / 12)(14 * 2 + 12)";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ((cos(60 / 12) * (14 * 2 + 12)), model.getResult());
}

TEST(Calculate, Calculate4) {
  std::string expression = "cos(60 / 12)(14 * 2 + 12)";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ((cos(60 / 12) * (14 * 2 + 12)), model.getResult());
}

TEST(Calculate, Calculate5) {
  std::string expression = "sin(((1.44+11.7)*(-8.61+17))/7)";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(sin(((1.44 + 11.7) * (-8.61 + 17)) / 7), model.getResult());
}

TEST(Calculate, Calculate6) {
  std::string expression = "ln(10)-(-log(2))";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(log(10) - (-log10(2)), model.getResult());
}

TEST(Calculate, Calculate7) {
  std::string expression =
      "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2+(1+1))*(15/"
      "(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(-30.072164948453608, model.getResult());
}

TEST(Calculate, Calculate8) {
  std::string expression = "cos(3-1)/sin(5)*tan(1)^1";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(cos(3 - 1) / sin(5) * pow(tan(1), 1), model.getResult());
}

TEST(Calculate, Calculate9) {
  std::string expression = "acos(0.15)+asin(0.30)/(atan(2)*sqrt(9))";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(acos(0.15) + asin(0.30) / (atan(2) * sqrt(9)),
                   model.getResult());
}

TEST(Calculate, Calculate10) {
  std::string expression = "2^2^3";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(pow(2, pow(2, 3)), model.getResult());
}

TEST(Calculate, Calculate11) {
  std::string expression = "10!";
  s21::CalcModel model;
  model.modelCalculate(expression, NAN);
  EXPECT_DOUBLE_EQ(tgamma(10 + 1), model.getResult());
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}