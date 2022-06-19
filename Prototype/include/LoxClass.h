#ifndef __LOXCLASS_H__
#define __LOXCLASS_H__

#include "Interpreter.h"
#include "LoxCallable.h"
#include "LoxFunction.h"

#include <vector>
#include <map>
#include <string>

namespace lox {

class LoxClass: public LoxCallable {
public:
    LoxClass(const std::string& _name,
            const LoxClass& _superclass,
            const std::map<std::string, LoxFunction> _methods)
        : m_name(_name), m_superclass(_superclass), m_methods(_methods) {}

    auto find_methods(const std::string& name) -> LoxFunction;

    auto call(const Interpreter& interpreter,
            std::vector<std::any>& args) -> std::any override;
    auto arity(void) const noexcept -> int override;

    auto to_string(void) const noexcept -> std::string;

private:
    const std::string m_name;
    const LoxClass m_superclass;
    const std::map<std::string, LoxFunction> m_methods;
}

}

#endif // __LOXCLASS_H__