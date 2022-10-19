#include <iostream>

int main()
{
    char operation;
    double firstOperand, secondOperand;

    std::cout << "Operation: ";
    std::cin >> operation;

    std::cout << "First operand: ";
    std::cin >> firstOperand;

    std::cout << "Second operand: ";
    std::cin >> secondOperand;

    switch (operation)
    {
        case '+': 
            std::cout << firstOperand + secondOperand << "\n"; 
            break;
        case '-': 
            std::cout << firstOperand - secondOperand << "\n";
            break;
        case '/': 
            if (secondOperand == 0)
            {
                std::cout << "Invalid second operand.\n";
            }
            else
            {
                std::cout << firstOperand / secondOperand << "\n";
            }
            break;
        case '*':
            std::cout << firstOperand * secondOperand << "\n";
            break;
        case '%':
        
            // Използваме кастване към int, понеже операторът
            // % приема като аргументи само цели числа

            std::cout << (int)firstOperand % (int)secondOperand << "\n";
            break;
        default:
            std::cout << "Invalid operation.\n";
    }

    return 0;
}