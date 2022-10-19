#include <iostream>

int main()
{
    unsigned int dayNumber;

    std::cout << "Number of day: ";
    std::cin >> dayNumber;

    // default може да се намира навсякъде в switch-a
    // принципно се слага най-отдолу, понеже често се изпуска break
    // ако default се намира най-отгоре, както долу и нямаме break
    // ако влезем в default ще се изпълни и следващия ред
    // тоест ще се отпечата и Monday, като в default се влиза единствено
    // ако стойността е различна от долупосочените

    switch (dayNumber)
    {
        default: std::cout << "Invalid day."; break;
        case 1: std::cout << "Monday."; break;
        case 2: std::cout << "Tuesday."; break;
        case 3: std::cout << "Wednesday."; break;
        case 4: std::cout << "Thursday."; break;
        case 5: std::cout << "Friday."; break;
        case 6: std::cout << "Saturday."; break;
        case 7: std::cout << "Sunday."; break;
    }

    return 0;
}