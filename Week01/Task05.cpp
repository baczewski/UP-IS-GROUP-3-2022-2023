#include <iostream>

int main()
{
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    bool isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);

    std::cout << (isLeapYear ? "Leap year.\n" : "Not a leap year.\n");
    
    // Вариант без тернарен оператор
    
    // if (isLeapYear)
    // {
    //     std::cout << "Leap year.\n";
    // }
    // else
    // {
    //     std::cout << "Not a leap year.\n";
    // }

    return 0;
}