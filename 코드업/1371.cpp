#include <iostream>

using namespace std;

int main()
{
	int n, c;

	cin >> n;

	if (n >= 2 && n <= 100)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j < n+i; j++)
			{
				if (i + j == n + 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << "*" << endl;
		}
		
		for (int i = n; i > 0; i--)
		{
			for (int j = 1; j < n + i; j++)
			{
				if (i + j == n + 1)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << "*" << endl;
		}
	}
}
