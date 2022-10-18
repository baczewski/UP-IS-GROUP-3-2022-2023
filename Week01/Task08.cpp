#include <iostream>

int main()
{
    double firstSide, secondSide, thirdSide;
    std::cout << "First side: ";
    std::cin >> firstSide;

    std::cout << "Second side: ";
    std::cin >> secondSide;

    std::cout << "Third side: ";
    std::cin >> thirdSide;

    if (firstSide > 0 && secondSide > 0 && thirdSide > 0)
    {
        if (firstSide == secondSide && secondSide == thirdSide)
        {
            std::cout << "Equilateral.\n";
        }
        else if (firstSide == secondSide || firstSide == thirdSide || secondSide == thirdSide)
        {
            std::cout << "Isosceles.\n";
        }
        else
        {
            std::cout << "Versatile.\n";
        }
    }
    else
    {
        std::cout << "Invalid sides.\n";
    }

    return 0;
}