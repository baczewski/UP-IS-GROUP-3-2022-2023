#include <iostream>

int main()
{
    int firstNumber, secondNumber;

    std::cout << "Input first number: ";
    std::cin >> firstNumber;

    std::cout << "Input second number: ";
    std::cin >> secondNumber;

    // 123445
    // 234

    bool firstNumberContainsSecondNumber = (firstNumber == secondNumber);

    while (firstNumber > secondNumber)
    {
        int firstNumberCopy = firstNumber;
        int secondNumberCopy = secondNumber;

        while (firstNumberCopy > secondNumberCopy &&
            firstNumberCopy % 10 == secondNumberCopy % 10)
        {
            firstNumberCopy = firstNumberCopy / 10;
            secondNumberCopy = secondNumberCopy / 10;
        }

        if (secondNumberCopy == 0)
        {
            firstNumberContainsSecondNumber = true;
            break;
        }

        firstNumber = firstNumber / 10;
    }

    std::cout << std::boolalpha << firstNumberContainsSecondNumber << "\n";

    return 0;
}