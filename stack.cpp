#include "stack.hpp"

Stack::Stack() :
    size{0}
{}

Stack::~Stack() = default;

auto Stack::isFull() const -> bool {
    if(size == MAXSIZE)
        return true;
    return false;
}

auto Stack::isEmpty() const -> bool {
    if(size == 0)
        return true;
    return false;
}

auto Stack::printFull() -> void {
    std::cout << "Стек переполнен\n";
}

auto Stack::printEmpty() -> void {
    std::cout << "Стек пустой\n";
}

auto Stack::print() const -> void {
    std::cout << "size:\t" << size << "\n";
    std::cout << "data:\t" << data << "\n\n";
}

auto Stack::push(char symb) -> void {
    if(isFull()) {
        printFull();
        return;
    }

    data += symb;
    size++;
}

auto Stack::push(const std::string& str) -> void {
    if(isFull()) {
        printFull();
        return;
    }

    data += str;
    size += str.length();
}

auto Stack::pop() -> char {
    if(isEmpty()) {
        printEmpty();
        return char(255);
    }

    size--;
    char last = data[size];
    data.erase(size, 1);
    return last;
}

















