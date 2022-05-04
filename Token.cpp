#include "Token.h"

Token::Token(const TokenType type, const std::string& lexeme,
            const std::string& literal, const int line): 
    m_type(type), 
    m_lexeme(lexeme),
    m_literal(literal),
    m_line(line) {}

auto Token::to_string() const -> std::string { 
    if(m_type == TokenType::STRING || 
        m_type == TokenType::NUMBER)
            return m_literal;
    
    return m_lexeme;
}
