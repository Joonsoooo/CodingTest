#include <iostream>

using namespace std;

int main()
{
	int h, r;

	cin >> h >> r;

	for (int i = 1; i <= r; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			for (int k = 1; k < j; k++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}

		for (int j = h - 1; j > 0; j--)
		{
			for (int k = 1; k < j; k++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
}
