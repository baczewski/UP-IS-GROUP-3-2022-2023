#include <iostream>

int main()
{
    double temperature;
    char symbol;

    std::cout << "Temperature: ";
    std::cin >> temperature;

    std::cout << "Unit (C / F): ";
    std::cin >> symbol;

    if (symbol == 'F')
    {
        double resultInCelsius = (temperature - 32) * 5 / 9;

        std::cout << "C: " << resultInCelsius << "\n";
    }
    else if (symbol == 'C')
    {
        double resultInFarenheit = (temperature * 9 / 5) + 32;

        std::cout << "F: " << resultInFarenheit << "\n";
    }
    else
    {
        std::cout << "Invalid temperature unit.\n";
    }

    return 0;
}