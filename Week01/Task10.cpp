#include <iostream>

int main()
{
    int number;
    std::cout << "Number: ";
    std::cin >> number;

    bool isPrime = true;

    // Едно число е просто ако се дели само на 1 и на себе си
    // Итерирането може да бъде и до number, но така е по-оптимално
    
    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    std::cout << std::boolalpha << isPrime << std::endl;

    return 0;
}