#include <iostream>
#include <time.h>

int main()
{
        int time_elapse = 0;
        int time_difference = 0;
        while (1)
        {
                std::cout << clock() / 200000 << std::endl;
                if (clock() / 200000 == 3)
                {
                        std::cout << "3 sec elapsed!!" << std::endl;
                        break;
                }
        }
        return 0;
}