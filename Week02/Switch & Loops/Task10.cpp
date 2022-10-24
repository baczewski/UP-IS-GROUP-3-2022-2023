#include <iostream>
#include <cmath>

int main()
{
    unsigned int number, digitsCount = 1;

    std::cout << "Input a number: ";
    std::cin >> number;

    // Алтернативен начин за намиране броя на цифрите
    // на число използвайки малко математика
    
    // int digitsCount = (int)log10(number) + 1;

    while (number >= 10)
    {
        ++digitsCount;

        number = number / 10;
    }

    std::cout << "Digits count: " << digitsCount << "\n";

    return 0;
}