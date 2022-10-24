#include <iostream>

int main()
{
    int number, positiveDivisorsSum = 0;

    std::cout << "Input a number: ";
    std::cin >> number;

    for (int curr = 1; curr <= number / 2; ++curr)
    {
        if (number % curr == 0)
        {
            positiveDivisorsSum += curr;
        }
    }

    std::cout << std::boolalpha << (number == positiveDivisorsSum) << "\n";

    return 0;
}