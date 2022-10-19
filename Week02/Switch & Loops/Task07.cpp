#include <iostream>

int main()
{
    unsigned int monthNumber;

    std::cout << "Month number: ";
    std::cin >> monthNumber;

    switch (monthNumber)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "31 days.\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30 days.\n";
            break;
        case 2:
            std::cout << "29 days.\n";
            break;
        default:
            std::cout << "Invalid month number.\n";
    }

    return 0;
}