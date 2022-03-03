#include <iostream>

#include "stack.hpp"
#include "functions.hpp"

auto main() -> int {
    std::string braces = "(((()[a]{b}{{c}})))";
    auto len = braces.length();

    auto myStack = Stack();
    auto isCorrect = true;

    for(int i = 0; i < len; i++) {
        std::cout << "i = " << i << ":\t";
        std::cout << myStack;

        if(isAnother(braces[i])) {
            continue;
        }
        if(isOpen(braces[i])) {
            myStack.push(braces[i]);
            continue;
        }

        if(myStack.isSame(braces[i])) {
            myStack.pop();
        } else {
            isCorrect = false;
            break;
        }
    }

    if(!myStack.isEmpty())
        isCorrect = false;

    std::cout << "\n" << "is correct? - " << isCorrect << "\n";

    return 0;
}