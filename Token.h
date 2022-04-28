#ifndef TOKEN_H
#define TOKEN_H

#include <string>
#include <iostream>

using std::string;

enum struct TokenType : short int {
  // punctuators
  LEFT_PAREN,
  RIGHT_PAREN,
  LEFT_BRACE,
  RIGHT_BRACE,
  COMMA,
  DOT,
  MINUS,
  PLUS,
  SEMI_COLON,
  SLASH,
  STAR,
  // relational operators
  BANG,
  BANG_EQUAL,
  EQUAL,
  EQUAL_EQUAL,
  GREATER,
  GREATER_EQUAL,
  LESS,
  LESS_EQUAL,
  // string literals
  IDENTIFIER,
  STRING,
  NUMBER,
  // cpp standard keywords
  AND,
  AUTO,
  BOOL,
  BREAK,
  CASE,
  CATCH,
  CHAR,
  CLASS,
  CONST,
  CONSTEVAL,
  CONSTEXPR,
  CONTINUE,
  DECLTYPE,
  DEFAULT,
  DELETE,
  DO,
  DOUBLE,
  ELSE,
  ENUM,
  EXPLICIT,
  EXPORT,
  EXTERN,
  FALSE,
  FLOAT,
  FOR,
  FRIEND,
  GOTO,
  IF,
  INLINE,
  INT,
  LONG,
  MUTABLE,
  NAMESPACE,
  NEW,
  NOEXCEPT,
  NULLPTR,
  PRIVATE,
  PROTECTED,
  PUBLIC,
  RETURN,
  SHORT,
  SIGNED,
  SIZEOF,
  STATIC,
  STATIC_ASSERT,
  STATIC_CAST,
  STRUCT,
  SWITCH,
  TEMPLATE,
  THIS,
  THROW,
  TRUE,
  TRY,
  TYPEDEF,
  TYPEID,
  TYPENAME,
  UNION,
  UNSIGNED,
  USING,
  VIRTUAL,
  VOID,
  VOLATILE,
  WHILE,

  END_OF_FILE
};

class Token {
  string m_lexeme;
  string m_literal;
  TokenType m_type;
  int m_line;

public:
  Token(TokenType type, const string &lexeme, const string &literal, int line);

  auto to_string() const -> string;

//   friend auto operator<<(std::operator& ss, const Token &token)
//       -> std::ostream &;
};

#endif // TOKEN_H