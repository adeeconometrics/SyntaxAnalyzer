#ifndef SCANNER_H
#define SCANNER_H

#include <unordered_map>
#include <vector>
#include <string>

using std::unordered_map;
using std::vector;
// using std::std::string;

#include <algorithm>
#include "ErrorHandler.h"
#include "Token.h"

class Scanner {
private:
  static const unordered_map<std::string_view, TokenType> m_keywords; // or static const
  vector<Token> m_tokens;
  std::string m_source;
  size_t m_start{}, m_current{}, m_line{};
  ErrorHandler &error_handler;

public:
  Scanner(std::string_view source, ErrorHandler &error);

  /**
   * @brief scan and adds each lexeme encountered in a vector of tokens
   * 
   * @return vector<Token> 
   */
  auto scan_and_get_tokens() -> vector<Token>;

  /**
   * @brief returns if the passed argument is a keyword
   * 
   * @param token 
   * @return true 
   * @return false 
   */
  auto is_keyword(std::string_view token) const -> bool;

private:
  auto scan_and_add_token() -> void;
  
  auto string() -> void;
  auto number() -> void;
  auto identifier() -> void;

  auto match_and_advance(const char c) -> bool;
  auto add_token(const TokenType type, const std::string& token) -> void;
  auto add_token(TokenType) -> void;

  auto advance() -> char;
  auto peek() const -> char;
  auto peek_next() const -> char;

  auto is_at_end() const -> bool;
  auto is_digit(const char c) const -> bool;
  auto is_alpha(const char c) const -> bool;
  auto is_alphanum(const char c) const -> bool;
};


#endif // SCANNER_H