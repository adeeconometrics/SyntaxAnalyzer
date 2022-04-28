#ifndef ERRORHANDLER_H
#define ERRORHANDLER_H

#include <vector>
#include <string>

using std::string;
using std::vector;

class ErrorHandler {

public:
  struct ErrorInfo {
    int line{};
    string where;
    string message;
  };

  ErrorHandler() = default;

  auto report() const -> void;
  auto add(int line, const string &where, const string &msg) -> void;
  auto clear() -> void;

  bool has_found_error{};

private:
  vector<ErrorInfo> error_list;
};

#endif // ERRORHANDLER_H