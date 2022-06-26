#ifndef __PARSER_H__
#define __PARSER_H__

#include "TokenType.h"
#include "Token.h"
#include "Stmt.h"
#include "Expr.h"

#include <vector>
#include <string>

namespace lox {

struct ParseError;

class Parser {
// write ParseError
private: 
    const std::vector<Token> m_tokens;
    int m_curent {};

public:
    Parser(const std::token<Token> & tokens);

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
    auto tem (void) -> Expr;
    auto factor (void) -> Expr;
    auto unary (void) -> Expr;
    auto call (void) -> Expr;
    auto primary (void) -> Expr;
    auto finish_call (const Expr&) -> Expr;

    auto consume(const TokenType&, const std::string&) -> Token;
    auto peek(void) -> Token;
    auto advance(void) -> Token;
    auto previous(void) -> Token;

    auto match(const std::vector<TokenType>&) -> bool;
    auto check(const TokenType&) -> bool;
    auto is_at_end(void) -> bool;
    // auto error(const Token&, const std::string&) -> ParseError;
    auto synchronize(void) -> void;
};
}

#endif // __PARSER_H__