#ifndef __TOKEN_H__
#define __TOKEN_H__

#include "TokenType.h"
#include <string>
#include <any>

namespace lox {

class Token {
    const TokenType m_type;
    const std::string m_lexeme;
    const std::any m_literal;
    const int m_line;

public:
    Token(const TokenType& _type, const std::string& _lexeme, 
        const std::any& _literal, int _line );
    
    auto to_string(void) const noexcept -> std::string;
};

};

#endif // __TOKEN_H__