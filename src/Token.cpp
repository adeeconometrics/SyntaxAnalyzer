#include "Token.h"

Token::Token(const TokenType type, const std::string& lexeme,
            const std::string& literal, const int line): 
    m_type(type), 
    m_lexeme(lexeme),
    m_literal(literal),
    m_line(line) {}

auto Token::to_string() const -> std::string { 
    switch (m_type) {
        case TokenType::LEFT_PAREN:
        case TokenType::RIGHT_PAREN:
        case TokenType::RIGHT_BRACE:
        case TokenType::LEFT_BRACE:
        case TokenType::COMMA:
        case TokenType::DOT:
        case TokenType::MINUS:
        case TokenType::PLUS:
        case TokenType::SEMI_COLON:
        case TokenType::SLASH:
        case TokenType::STAR:
            return m_lexeme + "\t\t is punctuator. ";
        
        case TokenType::BANG:
        case TokenType::BANG_EQUAL:
        case TokenType::EQUAL:
        case TokenType::EQUAL_EQUAL:
        case TokenType::GREATER:
        case TokenType::GREATER_EQUAL:
        case TokenType::LESS:
        case TokenType::LESS_EQUAL:
            return m_lexeme + "\t\t is a relational operator.";

        case TokenType::STRING:
            return m_literal + "\t\t is string literal. ";
        case TokenType::NUMBER:
            return m_literal + "\t\t is a number. ";
        case TokenType::IDENTIFIER:
            return m_lexeme + "\t\t is an identifier. ";

        case TokenType::END_OF_FILE:
            return m_lexeme + "\t\t is end of file. "; 
        
        default:
            return m_lexeme + "\t\t is keyword. ";
    }
}
