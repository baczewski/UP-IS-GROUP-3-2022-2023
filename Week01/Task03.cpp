#include <iostream>

int main()
{
    unsigned int number;
    std::cout << "Enter 5 digit number: ";
    std::cin >> number;

    if (number >= 10000 && number < 100000)
    {
        int firstDigit = number / 10000;
        int secondDigit = (number / 1000) % 10;
        int thirdDigit = (number / 100) % 10;
        int fourthDigit = (number / 10) % 10;
        int lastDigit = number % 10;

        std::cout << "First digit: " << firstDigit
            << "\nSecond digit: " << secondDigit
            << "\nThird digit: " << thirdDigit
            << "\nFourth digit: " << fourthDigit
            << "\nLast digit: " << lastDigit << "\n";

        int digitSum = firstDigit + secondDigit + thirdDigit
            + fourthDigit + lastDigit;

        std::cout << "Digits' sum: " << digitSum << "\n";
    }
    else
    {
        std::cout << "Invalid number.\n";
    }

    return 0;
}