#include <iostream>

// Декларираме контанта, понеже тази стойност ще бъде фиксирана
// през цялото изпълнение на програмата

const double PI = 3.14;

int main()
{
    double degrees;
    std::cout << "Enter degrees: ";
    std::cin >> degrees;

    double radians = degrees * PI / 180;

    std::cout << "Radians: " << radians << std::endl;

    return 0;
}