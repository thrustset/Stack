#include "functions.hpp"

auto isOpen(char brace) -> bool {
    switch (brace) {
        case '(':   return true;
        case '[':   return true;
        case '{':   return true;
        default:    return false;
    }
}

auto isClose(char brace) -> bool {
    switch (brace) {
        case ')':   return true;
        case ']':   return true;
        case '}':   return true;
        default:    return false;
    }
}

auto isAnother(char brace) -> bool {
    if(isOpen(brace) || isClose(brace))
        return false;
    return true;
}