#include <iostream>

int main()
{
    int number;

    std::cout << "Four digit number: ";
    std::cin >> number;

    if (number >= 1000 && number < 10000)
    {
        int firstDigit = number / 1000;
        int secondDigit = (number / 100) % 10;
        int thirdDigit = (number / 10) % 10;
        int lastDigit = number % 10;

        int sum = firstDigit + secondDigit + thirdDigit + lastDigit;

        std::cout << (sum >= 10 && sum < 100 ? "true" : "false") << std::endl;
    }
    else
    {
        std::cout << "Invalid input.\n";
    }

    return 0;
}