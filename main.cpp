#include <iostream>

#include "stack.hpp"

auto isOpen(char brace) -> bool;
auto isClose(char brace) -> bool;

auto main() -> int {
    std::string braces = "(([])){}";
    auto len = braces.length();

    auto myStack = Stack();
    auto isCorrect = true;

    for(int i = 0; i < len; i++) {
        if(isOpen(braces[i])) {
            myStack.push(braces[i]);
            continue;
        }
    }

    return 0;
}



auto isOpen(char brace) -> bool {
    if(brace == '(' || brace == '[' || brace == '{')
        return true;
    return false;
}

auto isClose(char brace) -> bool {
    if(brace == ')' || brace == ']' || brace == '}')
        return true;
    return false;
}
