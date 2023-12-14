#include <iostream>
#include "calculator.h"

int main() {
    // Prompt the user for input
    std::cout << "Enter value for 'a': ";
    double a;
    std::cin >> a;

    std::cout << "Enter value for 'b': ";
    double b;
    std::cin >> b;

    Calculator calculator;
    double result = calculator.Add(a, b);

    // Output the result to the terminal
    std::cout << "Result: " << result << std::endl;

    // Pause to keep the terminal open
    std::cin.get();

    return 0;
}

