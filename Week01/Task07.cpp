#include <iostream>

int main()
{
    char symbol;
    std::cout << "Symbol: ";
    std::cin >> symbol;

    bool isCapitalLetter = symbol >= 'A' && symbol <= 'Z';
    bool isSmallLetter = symbol >= 'a' && symbol <= 'z';
    bool isLetter = isCapitalLetter || isSmallLetter;

    std::cout << std::boolalpha << isLetter << std::endl;

    return 0;
}