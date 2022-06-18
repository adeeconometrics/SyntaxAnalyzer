#ifndef __EXPR_H__
#define __EXPR_H__

#include "Token.h"

#include <any>
#include <vector>

namespace lox {

class Expr {
  template <typename T> class Visitor {
    virtual auto visit_assign_expr(const Assign &expr) -> T = 0;
    virtual auto visit_binary_expr(const Binary &expr) -> T = 0;
    virtual auto visit_call_expr(const Call &expr) -> T = 0;
    virtual auto visit_get_expr(const Get &expr) -> T = 0;
    virtual auto visit_grouping_expr(const Grouping &expr) -> T = 0;
    virtual auto visit_literal_expr(const Literal &expr) -> T = 0;
    virtual auto visit_logical_expr(const Logical &expr) -> T = 0;
    virtual auto visit_set_expr(const Set &expr) -> T = 0;
    virtual auto visit_super_expr(const Super &expr) -> T = 0;
    virtual auto visit_this_expr(const This &expr) -> T = 0;
    virtual auto visit_unary_expr(const Unary &expr) -> T = 0;
    virtual auto visit_variable_expr(const Variable &expr) -> T = 0;
  };

  template <typename T> virtual auto accept(const Visitor<T> &visitor) -> T = 0;
  // should be static
  struct Assign : public Expr {
    Assign(const Token &_name, const Expr &_value)
        : m_name(_name), m_value(_value) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_assign_expr(*this);
    }

    const Token m_name;
    const Expr m_value;
  };

  struct Binary : public Expr {
    Binary(const Expr &_left, const Token &_op, const Expr &_right)
        : m_left(_left), m_op(_op), m_right(_right) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_binary_expr(*this);
    }

    const Expr m_left;
    const Token m_op;
    const Expr m_right;
  };

  struct Call : public Expr {
    Call(const Expr &_callee, const Token &_paren,
         const std::vector<Expr> &_args)
        : m_callee(_callee), m_paren(_paren), m_args(_args) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_call_expr(*this);
    }

    const Expr m_callee;
    const Token m_paren;
    const std::vector<Expr> m_args;
  };

  struct Get : public Expr {
    Get(const Expr &_obj, const Token &_name) : m_obj(_obj), m_name(_name) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_get_expr(*this);
    }

    const Expr m_obj;
    const Token m_name;
  };

  struct Grouping : public Expr {
    Grouping(const Expr &_expr) : m_expr(_expr) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_grouping_expr(*this);
    }

    const Expr m_expr;
  };

  struct Literal : public Expr {
    Literal(const std::any &_value) : m_value(_value) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_literal_expr(*this);
    }

    const std::any m_value;
  };

  struct Logical : public Expr {
    Logical(const Expr &_left, const Token &_op, const Expr &_right)
        : m_left(_left), m_op(_op), m_right(_right) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_logical_expr(*this);
    }

    const Expr m_left;
    const Token m_op;
    const Expr m_right;
  };

  struct Set : public Expr {
    Set(const Expr &_obj, const Token &_name, const Expr &_value)
        : m_obj(_obj), m_name(_name), m_value(_value) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_set_expr(*this);
    }

    const Expr m_obj;
    const Token m_name;
    const Expr m_value;
  };

  struct Super : public Expr {
    Super(const Token &_keyword, const Token &_method)
        : m_keyword(_keyword), m_method(_method) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_super_expr(*this);
    }

    const Token m_keyword;
    const Token m_method;
  };

  struct This : public Expr {
    This(const Token &_keyword) : m_keyword(_keyword) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_this_expr(*this);
    }

    const Token m_keyword;
  };

  struct Unary : public Expr {
    Unary(const Token &_op, const Expr &_right) : m_op(_op), m_right(_right) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_unary_expr(*this);
    }

    const Token m_op;
    const Expr m_right;
  };

  struct Variable : public Expr {
    Variable(const Token &_name) : m_name(_name) {}

    template <typename T> auto accept(const Visitor<T> &visitor) -> T override {
      return visitor.visit_variable_expr(*this);
    }

    const Token m_name;
  };
};

} // namespace lox

#endif // __EXPR_H__