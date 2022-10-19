#include <iostream>

int main()
{
    unsigned int monthNumber;

    std::cout << "Month number: ";
    std::cin >> monthNumber;

    switch (monthNumber)
    {
        case 3:
        case 4:
        case 5:
            std::cout << "Spring.\n";
            break;
        case 6:
        case 7:
        case 8:
            std::cout << "Summer.\n";
            break;
        case 9:
        case 10:
        case 11:
            std::cout << "Autumn.\n";
            break;
        case 12:
        case 1:
        case 2:
            std::cout << "Winter.\n";
            break;
        default:
            std::cout << "There is no such month.\n";
    }

    return 0;
}