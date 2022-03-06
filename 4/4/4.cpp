#include <iostream>
using namespace std;

struct num_special
{
	int value;
	int max_min = 0;
	bool showed = false;
};

int main()
{
	int n; cin >> n;
	num_special a[100];
	for(int i = 0;i < n;++i)
	{
		cin >> a[i].value;
	}
	for(int i = 0;i< n;++i)
	{
		int t = 0, l = 0;
		for (int j = 0; j < n; ++j)
		{
			if (a[i].value > a[j].value)
				++t;
			if (a[i].value < a[j].value)
				++l;
		}
		if (t > l)
			a[i].max_min = t;
		else
			a[i].max_min = l;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (i != j && !a[i].showed && !a[j].showed)
			{
				if (a[i].max_min == a[j].max_min)
				{
					cout << a[i].value << " " << a[j].value << endl;
					a[i].showed = true;
					a[j].showed = true;
				}
			}
		}
	}
		
	return 0;
}

