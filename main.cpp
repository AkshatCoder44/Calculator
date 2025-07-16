#include <iostream>

int main() {
    char op;
    double a;
    double b;
    std::cout << "Enter first number: ";
    std::cin >> a;
    std::cout << "Enter second number: ";
    std::cin >> b;
    std::cout << "Enter your operator(+, -, *, /): ";
    std::cin >> op;
    if (op == "+") {
        std::cout << a+b;
    } else if (op == "-") {
        std::cout << a-b;
    } else if (op == "*") {
        std::cout << a*b;
    } else if (op == "/") {
        std::cout << a/b;
    } else {
        std::cout << "Invalid operator";
    }
}
