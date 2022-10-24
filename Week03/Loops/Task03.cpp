#include <iostream>
#include <cmath>

int main()
{
    unsigned int number;

    std::cout << "Input a number: ";
    std::cin >> number;

    if (number != 0)
    {
        int numberCopy = number, digitsSum = 0;
        int digitsNumber = log10(number) + 1;

        while (numberCopy != 0)
        {
            int lastDigit = numberCopy % 10;

            digitsSum += pow(lastDigit, digitsNumber);

            numberCopy = numberCopy / 10;
        }

        std::cout << std::boolalpha << (number == digitsSum) << "\n";
    }
    else
    {
        std::cout << "Invalid input.\n";
    }


    return 0;
}