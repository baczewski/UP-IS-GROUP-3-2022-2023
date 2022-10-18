#include <iostream>

int main()
{
    double firstAngle, secondAngle, thirdAngle;
    std::cout << "First angle: ";
    std::cin >> firstAngle;

    std::cout << "Second angle: ";
    std::cin >> secondAngle;

    std::cout << "Third angle: ";
    std::cin >> thirdAngle;

    bool isValidTriangle = firstAngle + secondAngle + thirdAngle == 180;

    std::cout << std::boolalpha << isValidTriangle << std::endl;

    return 0;
}