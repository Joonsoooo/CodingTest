#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int l = 0; l < i + 2; l++)
		{
			if (l < i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}

		cout << endl;
	}
}
