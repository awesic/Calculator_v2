#include "model.h"

namespace s21 {

/******************************************************************************
 *                                                                            *
 *                               Token class                                  *
 *                                                                            *
 ******************************************************************************/

/// @brief Token class constructor
/// @param name token name
/// @param precedence token precedence
/// @param associativity token associativity
/// @param type token type
/// @param function token function
Token::Token(const std::string &name, Precedence precedence,
             Associativity associativity, Type type, functionVariant function)
    : name_(name),
      type_(type),
      precedence_(precedence),
      associativity_(associativity),
      function_(function) {}

/// @brief public function to make a token number
/// @param name token name (number)
/// @param value number
void Token::makeNumber(std::string name, double value) {
  Token result(name, kDefault, kNone, kNumber, value);
  *this = result;
}

/// @brief public function to change this token to ~ unary minus
void Token::makeUnaryNegative() {
  Token result("~", kUnaryOperator, kRight, kUnaryPrefixOperator,
               std::negate<double>());
  *this = result;
}

/// @brief get name from token
/// @return string
std::string Token::getName() const { return name_; }
/// @brief get type from token
/// @return Type
Type Token::getType() const { return type_; }
/// @brief get precedence from token
/// @return Precedence
Precedence Token::getPrecedence() const { return precedence_; }
/// @brief get token associativity
/// @return Associativity
Associativity Token::getAssociativity() const { return associativity_; }
/// @brief get function from token
/// @return functionVariant
Token::functionVariant Token::getFunction() { return function_; }

/******************************************************************************
 *                                                                            *
 *                             CalcModel class                                *
 *                                                                            *
 ******************************************************************************/

/// @brief CalcModel class constructor, initialize tokenMap_
CalcModel::CalcModel() { createTokenMap(tokenMap_); }

/// @brief Initialize the tokenMap_ add some operators and functions
/// @param tokenMap std::map<std::string, Token>
void CalcModel::createTokenMap(std::map<std::string, Token> &tokenMap) {
  using std::initializer_list;
  using std::pair;
  using std::string;
  initializer_list<pair<const string, Token>> initList = {
      {"x", Token("x", kDefault, kNone, kNumber, nullptr)},
      {" ", Token("space", kDefault, kNone, kNumber, nullptr)},
      {"(", Token("(", kDefault, kNone, kOpenBracket, nullptr)},
      {")", Token(")", kDefault, kNone, kCloseBracket, nullptr)},
      {"+", Token("+", kLow, kLeft, kBinaryOperator, std::plus<double>())},
      {"-", Token("-", kLow, kLeft, kBinaryOperator, std::minus<double>())},
      {"*",
       Token("*", kMedium, kLeft, kBinaryOperator, std::multiplies<double>())},
      {"/",
       Token("/", kMedium, kLeft, kBinaryOperator, std::divides<double>())},
      {"^", Token("^", kHigh, kRight, kBinaryOperator, powl)},
      {"mod", Token("mod", kMedium, kLeft, kBinaryOperator, fmodl)},
      {"cos", Token("cos", kFunction, kRight, kUnaryFunction, cosl)},
      {"sin", Token("sin", kFunction, kRight, kUnaryFunction, sinl)},
      {"tan", Token("tan", kFunction, kRight, kUnaryFunction, tanl)},
      {"acos", Token("acos", kFunction, kRight, kUnaryFunction, acosl)},
      {"asin", Token("asin", kFunction, kRight, kUnaryFunction, asinl)},
      {"atan", Token("atan", kFunction, kRight, kUnaryFunction, atanl)},
      {"ln", Token("ln", kFunction, kRight, kUnaryFunction, logl)},
      {"log", Token("log", kFunction, kRight, kUnaryFunction, log10l)},
      {"sqrt", Token("sqrt", kFunction, kRight, kUnaryFunction, sqrtl)},
      {"!",
       Token("!", kUnaryOperator, kLeft, kUnaryPostfixOperator, factorial)},
      {"%", Token("%", kUnaryOperator, kLeft, kUnaryPostfixOperator, percent)}};
  tokenMap.insert(initList);
}

/// @brief get result from CalcModel class
/// @return calculation result (double)
double CalcModel::getResult() { return resultNum_; }

/// @brief get graph from CalcModel class
/// @return calculated graph (std::pair<std::vector<double>,
/// std::vector<double>> )
CalcModel::GraphXY CalcModel::getGraph() const { return graphValues_; }

/// @brief transform string to lowercase
/// @param str input string
/// @return lowercase string
std::string CalcModel::toLowerCase(std::string str) {
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  return str;
}

/// @brief read some word from input string
/// @param input string to parse
/// @param startIndex
/// @return found word (string)
std::string CalcModel::readWord(std::string &input, size_t &startIndex) const {
  std::regex wordRegex("([a-z]+)");
  std::sregex_iterator regexIterator =
      std::sregex_iterator(input.begin() + startIndex, input.end(), wordRegex);
  std::smatch match = *regexIterator;
  startIndex += match.length() - 1;
  return match.str();
}

/// @brief read double frim input string
/// @param input
/// @param startIndex
/// @return found number (string)
std::string CalcModel::readDouble(std::string &input, size_t &startIndex) {
  std::regex doubleRegex("\\d+([.]\\d+)?(e([-+])?\\d+)?");
  std::sregex_iterator regexIterator = std::sregex_iterator(
      input.begin() + startIndex, input.end(), doubleRegex);
  std::smatch match = *regexIterator;
  startIndex += match.length() - 1;
  return match.str();
}

/// @brief clear all containers (input_, output_, stack_, result_)
void CalcModel::clearAll() {
  while (!input_.empty()) {
    input_.pop();
  }
  while (!output_.empty()) {
    output_.pop();
  }
  while (!stack_.empty()) {
    stack_.pop();
  }
  while (!result_.empty()) {
    result_.pop_back();
  }
}

/// @brief push token to queue input_
/// @param token token name
void CalcModel::pushToken(std::string token) {
  auto tokenIterator = tokenMap_.find(token);
  if (tokenIterator == tokenMap_.end()) {
    throw std::logic_error("Incorrect input: " + token);
  }
  input_.push(tokenIterator->second);
}

/// @brief subfunction helper, change +- to unary
/// @param input queue<Token>
void CalcModel::changeUnaryPlusMinus(std::queue<Token> &input) {
  if (input.front().getName() == "+" || input.front().getName() == "-") {
    if (input.front().getName() == "-") {
      input.front().makeUnaryNegative();
    } else {
      input.pop();
    }
  }
}

/// @brief parse input string
/// @param input string
void CalcModel::parseString(std::string &input) {
  std::string lowerInput = toLowerCase(input);

  for (std::string::size_type i = 0; i < lowerInput.size(); ++i) {
    if (std::isalpha(lowerInput[i])) {
      pushToken(readWord(lowerInput, i));
    } else if (std::isdigit(lowerInput[i])) {
      Token tokenTemp;
      std::string digit = readDouble(lowerInput, i);
      tokenTemp.makeNumber(digit, std::stold(digit));
      input_.push(tokenTemp);
    } else {
      pushToken(std::string(1, lowerInput[i]));
    }
  }
}

/// @brief delete spaces, change +- to unary, add * if necessary
void CalcModel::prepairInput() {
  changeUnaryPlusMinus(input_);
  moveFromInputToOutput();
  for (; !input_.empty() && !output_.empty(); moveFromInputToOutput()) {
    while (input_.front().getName() == "space") {
      input_.pop();
    }
    if (output_.back().getType() != Type::kNumber &&
        output_.back().getType() != Type::kCloseBracket &&
        output_.back().getType() != Type::kUnaryPostfixOperator) {
      changeUnaryPlusMinus(input_);
    }
    if (kMultAddMatrix_[output_.back().getType()][input_.front().getType()]) {
      output_.push(tokenMap_.find("*")->second);
    }
  }
  input_.swap(output_);
}

/// @brief Check a sequence of prepaired tokens
void CalcModel::checkSequence() {
  int brkCheck = (input_.front().getType() == Type::kOpenBracket ||
                  input_.front().getType() == Type::kCloseBracket);
  prepairInput();
  moveFromInputToOutput();
  for (; !input_.empty() && !output_.empty(); moveFromInputToOutput()) {
    if (!kAdjacencyMatrix_[output_.back().getType()]
                          [input_.front().getType()]) {
      throw std::logic_error("Wrong sequence: " + output_.back().getName() +
                             " " + input_.front().getName());
    }
    if (input_.front().getType() == Type::kOpenBracket) {
      brkCheck++;
    } else if (input_.front().getType() == Type::kCloseBracket) {
      brkCheck--;
    }
    if (output_.back().getName() == "/" and input_.front().getName() == "0") {
      throw std::logic_error("Division by zero error");
    }
  }
  input_.swap(output_);
  if (!kFirstToken_[input_.front().getType()]) {
    throw std::logic_error("Expression cannot start with: " +
                           input_.front().getName());
  }
  if (!kLastToken_[input_.back().getType()]) {
    throw std::logic_error("Expression cannot end with: " +
                           input_.back().getName());
  }
  if (brkCheck != 0) {
    throw std::logic_error("Brackets check failed " + std::to_string(brkCheck));
  }
}

/// @brief move from input to output queue
void CalcModel::moveFromInputToOutput() {
  if (!input_.empty()) {
    output_.push(input_.front());
    input_.pop();
  }
}

/// @brief move from input queue to stack
void CalcModel::moveFromInputToStack() {
  if (!input_.empty()) {
    stack_.push(input_.front());
    input_.pop();
  }
}

/// @brief move from stack to output queue
void CalcModel::moveFromStackToOutput() {
  if (!stack_.empty()) {
    output_.push(stack_.top());
    stack_.pop();
  }
}

/// @brief push number to result_ vector
/// @param function double
void CalcModel::pushToResult(double function) { result_.push_back(function); }

/// @brief pop last element from result_ vector
/// @return double
double CalcModel::popFromResult() {
  double temp = result_.back();
  result_.pop_back();
  return temp;
}

/// @brief convert infix input_ queue to postfix queue Dijkstra's algorithm
void CalcModel::convertInfixToPostfix() {
  checkSequence();
  while (!input_.empty()) {
    switch (input_.front().getType()) {
      case Type::kNumber:
      case Type::kUnaryPostfixOperator:
        moveFromInputToOutput();
        break;
      case Type::kUnaryFunction:
      case Type::kUnaryPrefixOperator:
      case Type::kOpenBracket:
        moveFromInputToStack();
        break;
      case Type::kBinaryOperator:
        while (
            !stack_.empty() && !input_.empty() &&
            ((input_.front().getAssociativity() == Associativity::kLeft &&
              input_.front().getPrecedence() <= stack_.top().getPrecedence()) ||
             (input_.front().getAssociativity() == Associativity::kRight &&
              input_.front().getPrecedence() < stack_.top().getPrecedence())) &&
            stack_.top().getType() != Type::kOpenBracket) {
          moveFromStackToOutput();
        }
        moveFromInputToStack();
        break;
      case Type::kCloseBracket:
        while (!stack_.empty() &&
               stack_.top().getType() != Type::kOpenBracket) {
          moveFromStackToOutput();
        }
        if (!stack_.empty()) {
          stack_.pop();
          if (!stack_.empty() &&
              stack_.top().getType() == Type::kUnaryFunction) {
            moveFromStackToOutput();
          }
        }
        if (!input_.empty()) {
          input_.pop();
        }
        break;
      default:
        break;
    }
  }
  while (!stack_.empty()) {
    moveFromStackToOutput();
  }
}

/// @brief calculate posfix notation
/// @param x_val double
/// @return double result
double CalcModel::postfixNotationCalculate(double x_val) {
  input_ = output_;
  for (; !input_.empty(); input_.pop()) {
    std::visit(overloaded{[&](double function) { pushToResult(function); },
                          [&](Token::unaryFunction function) {
                            pushToResult(function(popFromResult()));
                          },
                          [&](Token::binaryFunction function) {
                            double rArg = popFromResult();
                            double lArg = popFromResult();
                            pushToResult(function(lArg, rArg));
                          },
                          [&](auto) { pushToResult(x_val); }},
               input_.front().getFunction());
  }
  return popFromResult();
}

/// @brief main public function to calculate input string
/// @param expression string
/// @param x double
void CalcModel::modelCalculate(const std::string &expression, double x) {
  clearAll();
  expression_ = expression;
  parseString(expression_);
  convertInfixToPostfix();
  resultNum_ = postfixNotationCalculate(x);
}

/// @brief helper function calculate for each x, make pair vectors XY
/// @param step x1, x2, ... step
/// @param xMax max x value
/// @param xMin min x value
/// @param yMax max y value
/// @param yMin min y value
void CalcModel::calculateXY(double step, double xMax, double xMin, double yMax,
                            double yMin) {
  std::vector<double> xValues, yValues;
  x_ = xMin;
  int points = abs(xMax - xMin) / step;
  for (int i = 0; i < points; ++i, x_ += step) {
    xValues.push_back(x_);
    double y = postfixNotationCalculate(xValues.back());
    if (std::isnormal(y) && y >= yMin && y <= yMax) {
      yValues.push_back(y);
    } else {
      yValues.push_back(std::numeric_limits<double>::quiet_NaN());
    }
  }
  graphValues_ = std::make_pair(xValues, yValues);
}

/// @brief main public function for calculate for each point x
/// @param expression string expression
/// @param step x1, x2, ... step
/// @param xMax max x value
/// @param xMin min x value
/// @param yMax max y value
/// @param yMin min y value
void CalcModel::graphCalculate(const std::string &expression, double step,
                               double xMax, double xMin, double yMax,
                               double yMin) {
  clearAll();
  expression_ = expression;
  parseString(expression_);
  convertInfixToPostfix();
  calculateXY(step, xMax, xMin, yMax, yMin);
}

}  // namespace s21
