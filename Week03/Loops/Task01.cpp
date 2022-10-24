#include <iostream>

int main()
{
    for (int number = 100; number < 1000; ++number)
    {
        int current = number;

        bool containsSameDigits = false;

        while (current != 0 && !containsSameDigits)
        {
            int currentLastDigit = current % 10;
            current = current / 10;

            int keep = current;

            while (keep != 0)
            {
                int keepLastDigit = keep % 10;

                if (currentLastDigit == keepLastDigit)
                {
                    containsSameDigits = true;
                    break;
                }

                keep = keep / 10;
            }
        }

        if (!containsSameDigits)
        {
            std::cout << number << " ";
        }
    }

    return 0;
}