namespace lox {

Token::Token(const TokenType &_type, const std::string &_lexeme,
             const std::any &_literal, int _line)
    : m_type(_type), m_lexeme(_lexeme), m_literal(_literal), m_line(_line) {}

auto Token::to_string(void) const noexcept -> std::string {
  return m_type + " " + m_lexeme + " " + m_literal;
}
} // namespace lox