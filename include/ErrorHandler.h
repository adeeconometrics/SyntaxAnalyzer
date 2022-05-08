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

  /**
   * @brief reports the error encountered.
   * 
   */
  auto report() const -> void;

  /**
   * @brief add information about an error encountered which will be included in the `error_list` 
   * 
   * @param line 
   * @param where 
   * @param msg 
   */
  auto add(int line, const string &where, const string &msg) -> void;

  /**
   * @brief clears the data of `error_list`
   * 
   */
  auto clear() -> void;

  /**
   * @brief helper function that tells whether an error has occurred 
   * 
   */
  bool has_found_error{};

private:
  vector<ErrorInfo> error_list;
};

#endif // ERRORHANDLER_H