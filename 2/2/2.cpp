#include <fstream>
#include <iostream>
using namespace std;
ifstream f("numere.txt");

int main()
{
    int n; f >> n;
    int t[10] = {0};

    while (f >> n)
    {
        ++t[n];
    }
    for (int i = 9; i >= 0; --i)
    {
        if (t[i] != 0)
        {
            cout << i << " " << t[i];
            break;
        }
    }

    return 0;

}
