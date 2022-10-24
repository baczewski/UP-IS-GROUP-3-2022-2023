#include <iostream>

int main()
{
    unsigned int number, result = 1;

    std::cout << "Input a number: ";
    std::cin >> number;

    for (int curr = 1; curr <= number; ++curr)
    {
        result = result * curr;
    }

    std::cout << "Factorial: " << result << "\n";

    return 0;
}