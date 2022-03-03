#include "stack.hpp"

Stack::Stack() :
    len{0}
{}

Stack::~Stack() = default;

auto Stack::isEmpty() const -> bool {
    if(len == 0)
        return true;
    return false;
}

auto Stack::get() const -> char {
    return data[len - 1];
}

auto Stack::push(char symb) -> void {
    data += symb;
    len++;
}

auto Stack::pop() -> char {
    len--;
    char last = data[len];
    data.erase(len, 1);
    return last;
}

auto Stack::isSame(char brace) const -> bool {
    if(brace == ')' && get() == '(')
        return true;
    if(brace == ']' && get() == '[')
        return true;
    if(brace == '}' && get() == '{')
        return true;
    return false;
}

auto operator<<(std::ostream &os, const Stack &stack) -> std::ostream & {
    os << "stack:\t" << stack.data << "\n";
    return os;
}
