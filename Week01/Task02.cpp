#include <iostream>

int main()
{
    double side;
    std::cout << "Enter square's side: ";
    std::cin >> side;

    double area = side * side;
    double perimeter = 4 * side;

    std::cout << "Area: " << area << "\nPerimeter: " << perimeter << "\n";

    return 0;
}