#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n >= 3 && n <= 100)
	{
		for (int i = 0; i < n; i++)
		{
			for (int l = 0; l < n; l++)
			{
				if (i == 0 || i == n-1)
				{
					cout << "*";
				}
				else
				{
					if (l == 0 || l == i || l == n-1 || l == n - i - 1)
					{
						cout << "*";
					}
					else
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
	}
}
