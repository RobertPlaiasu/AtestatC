#include <iostream>
#include <fstream>
using namespace std;
ifstream f("numere.txt");

int main()
{
    int x;
	int maxx = 0, minn = 1000000;
	while (f >> x)
	{
		if (x % 2 == 0) {
			if (x > maxx)
				maxx = x;
			if (x < minn)
				minn = x;
		}
	}
	cout << maxx << " " << minn;
    return 0;
}

