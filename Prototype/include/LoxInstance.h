#ifndef __LOXINSTANCE_H__
#define __LOXINSTANCE_H__

#include "LoxFunction.h"
#include "LoxClass.h"
#include "Token.h"

#include <string>
#include <map>
#include <any>

namespace lox {

    struct LoxInstance {
        LoxInstance(const LoxClass& _class)
            : m_clas(_class){}

        auto get(const Token& name) -> std::any;
        auto set(const Token& name, std::any value) -> void;
        auto to_string(void) const noexcept -> std::string;

    private:
        LoxClass m_class;
        const std::map<std::string, std::any> m_fields;
    };

}

#endif // __LOXINSTANCE_H__