#include <iostream>

int main()
{
    int number;

    std::cout << "Input a number: ";
    std::cin >> number;

    for (int curr = 2; curr <= 10; ++curr)
    {
        if (number % curr == 0)
        {
            std::cout << curr << " is a divisor.\n";
        }
    }

    return 0;
}