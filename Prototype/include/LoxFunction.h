#ifndef __LOXFUNCTION_H__
#define __LOXFUNCTION_H__

#include "Environment.h"
#include "LoxCallable.h"
#include "LoxInstance.h"
#include "Stmt.h"


#include <vector>
#include <string>

namespace lox {

class LoxFunction : public LoxCallable {

  LoxFunction(const Stmt.Function &_declaration, const Environment &_closure,
              bool _is_initializer)
      : m_declaration(_declaration), m_closure(_closure),
        m_is_initializer(_is_initializer) {}

    auto bind(const LoxInstance& instance) const noexcept -> LoxFunction {
        Environment env{m_closure};
        env.define("this", instance);

        return {m_declarationm env, m_is_initializer};
    }

    auto to_string(void) const noexcept -> std::string {
        return "<fn" + m_declaration.m_name.get_lexeme() + ">";
    }

    auto arity() const noexcept -> int override {
      return m_declaration.m_params.size();
    };

    auto call(const Interpreter& interpreter, 
              const std::vector<std::any>& args) -> std::any override; 
              
private:
  const Stmt.Function m_declaration;
  const Environment m_closure;
  const bool m_is_initializer;
};

} // namespace lox

#endif // __LOXFUNCTION_H__