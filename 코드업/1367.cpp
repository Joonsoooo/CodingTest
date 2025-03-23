#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int l = 1; l <= n - i; l++)
		{
			cout << " ";
		}

		for (int l = 1; l <= n; l++)
		{
			cout << "*";
		}

		cout << endl;
	}
}
