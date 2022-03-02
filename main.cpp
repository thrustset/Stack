#include <iostream>

#include "stack.hpp"

auto isOpen(char brace) -> bool;
auto isClose(char brace) -> bool;

auto main() -> int {
    std::string braces = "(([])){}";
    int len = braces.length();

    auto myStack = Stack();

    for(int i = 0; i < len; i++) {

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
