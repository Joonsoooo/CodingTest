#include <iostream>
using namespace std;

int main()
{
	int n, k;
	char d;

	cin >> n >> k >> d;

	if (n >= 1 && n <= 100 && k >= 2 && k <= 100)
	{
		for (int i = 1; i <= n; i++)
		{
			if (d == 'L')
			{
				for (int l = 1; l < i; l++)
				{
					cout << " ";
				}
			}
			else if (d == 'R')
			{
				for (int l = 1; l <= n - i; l++)
				{
					cout << " ";
				}
			}

			for (int l = 1; l <= k; l++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
}
