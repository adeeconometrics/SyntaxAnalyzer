#include "Parser.h"
#include "Expr.h"
#include "Stmt.h"
#include "Token.h"
#include "TokenType.h"

#include <initializer_list>
#include <string>
#include <vector>

namespace lox {

Parser::Parse(const std::vector<Token> &_tokens) : m_tokens(_tokens) {}

auto Parser::parse(void) -> std::vector<Stmt>;

auto Parser::declaration(void) -> Stmt;
auto Parser::var_declaration(void) -> Stmt;
auto Parser::class_declaration(void) -> Stmt;
auto Parser::statement(void) -> Stmt;
auto Parser::if_statement(void) -> Stmt;
auto Parser::for_statement(void) -> Stmt;
auto Parser::while_statement(void) -> Stmt;
auto Parser::print_statement(void) -> Stmt;
auto Parser::return_statement(void) -> Stmt;
auto Parser::expression_statement(void) -> Stmt;
auto Parser::block(void) -> std::vector<Stmt>;
auto Parser::function(const std::string &) -> Stmt.Function;

auto Parser::expression(void) -> Expr { return equality(); }

auto Parser::assignment(void) -> Expr;
auto Parser:: or (void) -> Expr;
auto Parser::and(void) -> Expr;

auto Parser::equality(void) const noexcept-> Expr {
  Expr expr{comparison()};
  while (match({TokenType::BANG_EQUAL, TokenType::EQUAL_EQUAL})) {
    Token op = previous();
    Expr right = comparison();
    expr = Expr.Binary{expr, op, right};
  }
  return expr;
}

auto Parser::comparison(void) const noexcept-> Expr {
  Expr expr{term()};
  while (match({TokenType::GREATER, TokenType::GREATER_EQUAL, TokenType::LESS,
                TokenType::LESS_EQUAL})) {
    Token op = previous();
    Expr right = term();
    expr = Expr.Binary(expr, op, right);
  }
  return expr;
}

auto Parser::term(void) const noexcept-> Expr {
  Expr expr{factor()};
  while (match({TokenType::MINUS, TokenType::PLUS})) {
    Token op = previous();
    Expr right = factor();
    expr = Expr.Binary(expr, op, right);
  }
  return expr;
}

auto Parser::factor(void) const noexcept-> Expr {
  Expr expr{unary()};
  while (match({TokenType::SLASH, TokenType::STAR})) {
    Token op = previous();
    Expr right = unary();
    expr = Expr.Binary(expr, op, right);
  }
  return expr;
}

auto Parser::unary(void) const noexcept-> Expr {
  if (match({TokenType::BANG, TokenType::MINUS})) {
    Token op = previous();
    Expr right = unary();
    return Expr.Unary(op, right);
  }
  return primary();
}

auto Parser::call(void) -> Expr;
auto Parser::primary(void) -> Expr {
  if (match({TokenType::FALSE})) {
    return Expr.Literal(false);
  }
  if (match({TokenType::TRUE})) {
    return Expr.Literal(true);
  }
  if (match({TokenType::NIL})) {
    return Expr.Literal(nullptr); // check out
  }
  if (match({TokenType::NUMBER, TokenType::STRING})) {
    return Expr.Literal(previous().m_literal); // not yet implemented
  }
  if (match({TokenType::LEFT_PAREN})) {
    Expr expr = expression();
    consume(TokenType::RIGHT_PAREN, "Expect ')' after expression");
    return Expr.Grouping(expr);
  }
}

auto Parser::finish_call(const Expr &) -> Expr;

auto Parser::consume(const TokenType &type, const std::string & msg) -> Token {
    if(check(type)) {return advance(); }
    // throw error
}

auto Parser::peek(void) const noexcept -> Token { return m_tokens[m_current]; }

auto Parser::advance(void) noexcept -> Token {
  if (is_at_end()) {
    m_current += 1;
  }
  return previous();
}

auto Parser::previous(void) const noexcept -> Token {
  return m_tokens[m_current - 1];
}

auto Parser::match(const std::initializer_list<TokenType> &types) const noexcept
    -> bool {
  for (const auto &i : types) {
    if (check(i)) {
      advance();
      return true;
    }
  }
  return false;
}

auto Parser::check(const TokenType &type) const noexcept -> bool {
  if (is_at_end())
    return false;
  return peek().type == type;
}

auto Parser::is_at_end(void) const noexcept -> bool {
  return peek().type == TokenType::EOF;
}

} // namespace lox