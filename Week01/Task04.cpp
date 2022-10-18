#include <iostream>

int main()
{
    int firstNumber, secondNumber;
    std::cout << "First number: ";
    std::cin >> firstNumber;

    std::cout << "Second number: ";
    std::cin >> secondNumber;

    std::cout << std::boolalpha << (firstNumber % secondNumber == 0) << "\n";

    return 0;
}