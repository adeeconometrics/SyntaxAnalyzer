#ifndef __LOXCALLABLE_H__
#define __LOXCALLABLE_H__


#include "Interpreter.h"
#include <vector>
#include <any>

namespace lox {

class LoxCallable {
public:
    virtual auto arity(void) const noexcept -> int = 0;
    virtual auto call(const Interpreter& interpreter, 
                    const std::vector<std::any>& args) -> std::any = 0;
};

}

#endif // __LOXCALLABLE_H__