#include <iostream>
#include <fstream>
std::ifstream f("bac.txt");

/// <Problema 1>

int main()
{
    int maxx1 = 0, maxx2 = 0,x;
    while(f >> x)
    {
        if(x % 2 == 0)
        {
            if (maxx1 < x)
            {
                maxx2 = maxx1;
                maxx1 = x;
            }
            else if(maxx2 < x)
            {
                maxx2 = x;
            }
        }
    }
    
    if (maxx1 == 0 || maxx2 == 0)
        std::cout << 0;
    else
        std::cout << maxx1 << " " << maxx2;
    return 0;
}

