#ifndef CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_MODEL_H_
#define CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_MODEL_H_

#include <cmath>
#include <functional>
#include <map>
#include <queue>
#include <regex>
#include <stack>
#include <string>
#include <variant>
#include <vector>

namespace s21 {
//! Token types
enum Type {
  kNumber,
  kBinaryOperator,
  kUnaryPrefixOperator,
  kUnaryPostfixOperator,
  kUnaryFunction,
  kOpenBracket,
  kCloseBracket,
  kNumTokenType
};
//! Token precedence
enum Precedence { kDefault, kLow, kMedium, kHigh, kUnaryOperator, kFunction };
//! Operator-tokens / function-tokens associativity
enum Associativity { kNone, kLeft, kRight };

//! Token class
class Token {
 public:
  using unaryFunction = std::function<double(double)>;
  using binaryFunction = std::function<double(double, double)>;
  using functionVariant =
      std::variant<double, unaryFunction, binaryFunction, nullptr_t>;

  Token() = default;
  Token(const std::string &name, Precedence precedence,
        Associativity associativity, Type type, functionVariant function);
  ~Token() = default;

  void makeNumber(std::string name, double value);
  void makeUnaryNegative();

  // GETTERS
  std::string getName() const;
  Type getType() const;
  Precedence getPrecedence() const;
  Associativity getAssociativity() const;
  functionVariant getFunction();

 private:
  std::string name_;
  Type type_;
  Precedence precedence_;
  Associativity associativity_;
  functionVariant function_;
};

class CalcModel {
 public:
  using GraphXY = std::pair<std::vector<double>, std::vector<double>>;
  CalcModel();
  ~CalcModel() = default;

  void modelCalculate(const std::string &expression, double x);
  void graphCalculate(const std::string &expression, double step, double xMax,
                      double xMin, double yMax, double yMin);

  // GETTERS
  double getResult();
  GraphXY getGraph() const;

 private:
  double resultNum_{NAN};
  GraphXY graphValues_;
  std::string expression_;
  double x_{NAN};

  std::map<std::string, Token> tokenMap_;
  std::stack<Token> stack_;
  std::queue<Token> input_;
  std::queue<Token> output_;
  std::vector<double> result_;

  void createTokenMap(std::map<std::string, Token> &tokenMap);
  void parseString(std::string &input);
  void prepairInput();
  void checkSequence();
  void convertInfixToPostfix();
  double postfixNotationCalculate(double x_val);
  void calculateXY(double step, double xMax, double xMin, double yMax,
                   double yMin);
  void clearAll();

  // FUNCTION HELPERS
  std::string toLowerCase(std::string str);
  std::string readWord(std::string &input, size_t &startIndex) const;
  std::string readDouble(std::string &input, size_t &startIndex);
  void pushToken(std::string token);
  void changeUnaryPlusMinus(std::queue<Token> &input);
  void moveFromInputToOutput();
  void moveFromInputToStack();
  void moveFromStackToOutput();
  void pushToResult(double function);
  double popFromResult();

  // ADDINTIONAL FUNCTIONS
  Token::unaryFunction factorial = [](double num) { return tgammal(num + 1); };
  Token::unaryFunction percent = [](double num) { return (num / 100); };

  static constexpr bool kAdjacencyMatrix_[kNumTokenType][kNumTokenType] = {
      {0, 1, 0, 1, 0, 0, 1},  // kNumber
      {1, 0, 1, 0, 1, 1, 0},  // kBinaryOperator
      {1, 0, 1, 0, 1, 1, 0},  // kUnaryPrefixOperator
      {0, 1, 0, 1, 0, 0, 1},  // kUnaryPostfixOperator
      {0, 0, 0, 0, 0, 1, 0},  // kUnaryFunction
      {1, 0, 1, 0, 1, 1, 0},  // kOpenBracket
      {0, 1, 0, 1, 0, 0, 1},  // kCloseBracket
  };
  static constexpr bool kFirstToken_[kNumTokenType] = {1, 0, 1, 0, 1, 1, 0};
  static constexpr bool kLastToken_[kNumTokenType] = {1, 0, 0, 1, 0, 0, 1};

  // check if multiplication is necessary
  static constexpr bool kMultAddMatrix_[kNumTokenType][kNumTokenType] = {
      {1, 0, 0, 0, 1, 1, 0},  // kNumber
      {0, 0, 0, 0, 0, 0, 0},  // kBinaryOperator
      {0, 0, 0, 0, 0, 0, 0},  // kUnaryPrefixOperator
      {1, 0, 1, 0, 1, 1, 0},  // kUnaryPostfixOperator
      {0, 0, 0, 0, 0, 0, 0},  // kUnaryFunction
      {0, 0, 0, 0, 0, 0, 0},  // kOpenBracket
      {1, 0, 1, 0, 1, 1, 0},  // kCloseBracket
  };
};

// helper type for the visitor
template <class... Ts>
struct overloaded : Ts... {
  using Ts::operator()...;
};
// explicit deduction guide (not needed as of C++20)
template <class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

}  // namespace s21

#endif  // CPP3_SMARTCALC_V2_SRC_SMARTCALC_V2_MODEL_MODEL_H_
