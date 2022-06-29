#ifndef __PARSER_H__
#define __PARSER_H__

#include "TokenType.h"
#include "Token.h"
#include "Stmt.h"
#include "Expr.h"

#include <vector>
#include <string> // to std::string_view?

namespace lox {

struct ParseError;

// each grammar rules becomes a method inside this class
class Parser {
// write ParseError
private: 
    const std::vector<Token> m_tokens;
    int m_curent {};

public:
    Parser(const std::vector<Token> & tokens);

    auto parse(void) -> std::vector<Stmt>;

private:
    auto declaration(void) -> Stmt;
    auto var_declaration(void) -> Stmt;
    auto class_declaration(void) -> Stmt;
    auto statement(void) -> Stmt;
    auto if_statement(void) -> Stmt;
    auto for_statement(void) ->  Stmt;
    auto while_statement(void) -> Stmt;
    auto print_statement(void) -> Stmt;
    auto return_statement(void) -> Stmt;
    auto expression_statement(void) ->  Stmt;
    auto block(void) -> std::vector<Stmt>;
    auto function(const std::string&) ->  Stmt.Function;

    auto expression(void) -> Expr;
    auto assignment(void) -> Expr;
    auto or(void) -> Expr;
    auto and (void) -> Expr;
    auto equality (void) -> Expr;
    auto comparison (void) -> Expr;
    auto term (void) -> Expr;
    auto factor (void) -> Expr;
    auto unary (void) -> Expr;
    auto call (void) -> Expr;
    auto primary (void) -> Expr;
    auto finish_call (const Expr&) -> Expr;

    auto consume(const TokenType&, const std::string&) -> Token;
    auto peek(void) const noexcept -> Token;
    auto advance(void) noexcept -> Token;
    auto previous(void) const noexcept -> Token;

    auto match(const std::vector<TokenType>&) const noexcept -> bool;
    auto check(const TokenType&) const noexcept -> bool;
    auto is_at_end(void) const noexcept -> bool;
    // auto error(const Token&, const std::string&) -> ParseError;
    auto synchronize(void) -> void;
};
}

#endif // __PARSER_H__