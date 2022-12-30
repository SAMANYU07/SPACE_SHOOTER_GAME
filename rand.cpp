#include <iostream>
#include <random>
#include <time.h>
#include <array>
using namespace std;

int main()
{
        srand(time(NULL));
        for (int i = 0; i < 4; i++)
                cout << rand() % 768 << rand() % 768<< endl;
        return 0;
}