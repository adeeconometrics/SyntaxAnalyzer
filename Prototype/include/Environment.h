#ifndef __ENVIRONMENT_H__
#define __ENVIRONMENT_H__


#include "Token.h"
#include "TokenType.h"

#include <optional>
#include <string>
#include <map>
#include <any>

namespace lox {

struct Environment {
    const std::optional<Environment> m_enclosing;

    Environment()
        : m_enclosing(std::nullopt) {}

    Environment(const Environment& env)
        : m_enclosing(env) {}
    
    auto get(const Token& name) -> std::any;
    auto assign(const Token& name, std::any value) -> void;
    auto define(const std::string& name, std::any value) -> void;
    auto ancestor(int distance) -> Environment;
    auto get_at(int distance, const std::string& name) -> std::any;
    auto assign_at(int distance, const Token& name, std::any value) -> void;
    auto to_string(void) const noexcept -> std::string;

private:
    const std::map<std::string, std::any> values;
};
}

#endif // __ENVIRONMENT_H__