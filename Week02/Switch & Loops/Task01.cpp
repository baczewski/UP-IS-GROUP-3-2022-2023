#include <iostream>

int main()
{
    unsigned int age;
    
    std::cout << "Age: ";
    std::cin >> age;

    // Може да се използва std::boolalpha, но по условие
    // се изисква тернарен оператор

    std::cout << (age >= 18 ? "true" : "false") << std::endl;

    return 0;
}