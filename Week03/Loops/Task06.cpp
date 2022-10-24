#include <iostream>

int main()
{
    unsigned int amount, counter = 0;

    std::cout << "Input amount: ";
    std::cin >> amount;

    while (amount > 0)
    {
        // Доста съкратен запис, използвайки
        // вложена контрукция на тернарен оператор

        int decrease = amount >= 100 ? 100
            : amount >= 50 ? 50
            : amount >= 20 ? 20
            : amount >= 10 ? 10
            : amount >= 5 ? 5
            : amount >= 2 ? 2 : 1;

        amount = amount - decrease;
        counter = counter + 1;

        // if (amount >= 100)
        // {
        //     amount = amount - 100;
        // }
        // else if (amount >= 50)
        // {
        //     amount = amount - 50;
        // }
        // else if (amount >= 20)
        // {
        //     amount = amount - 20;
        // }
        // else if (amount >= 10)
        // {
        //     amount = amount - 10;
        // }
        // else if (amount >= 5)
        // {
        //     amount = amount - 5;
        // }
        // else if (amount >= 2)
        // {
        //     amount = amount - 2;
        // }
        // else
        // {
        //     amount = amount - 1;
        // }

        // counter = counter + 1;
    }

    std::cout << counter << std::endl;

    return 0;
}