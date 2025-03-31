#include <iostream>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	if (n >= 2 && m <= 50)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if ((i == 0 && j == 0) || 
					(i == 0 && j == n-1) ||
					(i == m - 1 && j == 0) ||
					(i == m - 1 && j == n - 1))
				{
					cout << "+";
				}
				else if (i == 0 || i == m - 1)
				{
					cout << "-";
				}
				else if ((i > 0 && i < m - 1) && (j == 0 || j == n - 1))
				{
					cout << "|";
				}
				else
				{
					cout <<" ";
				}
			}
			cout << endl;
		}
	}
}
