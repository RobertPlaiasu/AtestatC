#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int* t = new int[n];

    for (int i = 0; i < n; ++i)
    {
        t[i] = m;
        int x = m;
        int d = 2;
        
        while (d <= m && x != 1)
        {
            if (i == n - 1)
            {
                break;
            }
            if (x % d == 0)
            {
                t[++i] = d;
                while (x % d == 0)
                    x = x / d;
            }
            ++d;
        }
        ++m;
    }

    for(int i = 0;i < n;++i)
    {
        cout << t[i] << " ";
    }


}