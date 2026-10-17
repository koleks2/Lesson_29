#include <iostream>
#include <string>
#include <stack>

bool isValid(const std::string& expression) {
    std::stack<char> s;
    for (char c : expression) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                return false;
            }
            char top = s.top();
            s.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
        }
    }
    return s.empty();
}

int main() {
    std::string expression;

    while (true) {
        std::cout << "Enter expression: ";
        if (!std::getline(std::cin, expression)) {
            break;
        }

        if (expression.empty()) {
            continue;
        }

        if (isValid(expression)) {
            std::cout << "Correct\n";
        }
        else {
            std::cout << "Error\n";
        }
    }
}