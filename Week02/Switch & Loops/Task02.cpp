#include <iostream>

int main()
{
    int firstNumber, secondNumber;

    std::cout << "First number: ";
    std::cin >> firstNumber;

    std::cout << "Second number: ";
    std::cin >> secondNumber;

    // Може да се използва std::boolalpha, но по условие
    // се изисква тернарен оператор

    std::cout << (firstNumber % secondNumber == 0 ? "true" : "false") << std::endl;

    return 0;
}