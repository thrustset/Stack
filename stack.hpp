#pragma once
#include <string>
#include <iostream>

class Stack {
private:
    std::string data;
    int len;
public:
    Stack();
    ~Stack();

    auto isEmpty() const            -> bool;
    auto isSame(char brace) const   -> bool;

    auto push(char symb)    -> void;

    auto get() const    -> char;
    auto pop()          -> char;

    auto friend operator<<(std::ostream &os, Stack const &stack) -> std::ostream &;
};