#include <iostream>

const int LAST_FIB_NUMBER = 10;

int main()
{
    int current = 0, next = 1;

    for (int i = 0; i < LAST_FIB_NUMBER; ++i)
    {
        std::cout << current << " ";

        int keep = current;
        current = next;
        next = keep + current;
    }

    return 0;
}