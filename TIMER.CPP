#include <iostream>
#include <time.h>

int main()
{
        int timer = clock();
        while (1)
        {
                std::cout << timer / 200000 <<std::endl;
                timer = clock();
        }
        return 0;
}