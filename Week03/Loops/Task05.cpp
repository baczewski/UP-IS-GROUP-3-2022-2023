#include <iostream>

int main()
{
    int number, target, counter = 0;

    std::cout << "Input a number: ";
    std::cin >> number;

    std::cout << "Input a target number: ";
    std::cin >> target;

    while (number != 0)
    {
        int lastDigit = number % 10;

        if (lastDigit % target == 0)
        {
            counter = counter + 1;
        }

        number = number / 10;
    }

    std::cout << counter << std::endl;

    return 0;
}