#pragma once
#include <string>
#include <iostream>

#define MAXSIZE 100

class Stack {
private:
    std::string data;
    int size;
public:
    Stack();
    ~Stack();

    auto isFull() const -> bool;
    auto isEmpty() const -> bool;

    static auto printFull() -> void;
    static auto printEmpty() -> void;

    auto print() const -> void;

    auto push(char symb) -> void;
    auto push(const std::string& str) -> void;
    auto pop() -> char;
};