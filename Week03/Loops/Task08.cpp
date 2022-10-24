#include <iostream>

int main()
{
    unsigned int number;

    std::cout << "Input a number: ";
    std::cin >> number;

    int current = 1, line = 1;

    while (current - 1 != number)
    {
        for (int i = 0; current - 1 != number && i < line; ++i)
        {
            std::cout << current << " ";
            
            current = current + 1;
        }
        
        std::cout << std::endl;

        line = line + 1;
    }

    return 0;
}