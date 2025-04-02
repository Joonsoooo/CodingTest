#include <iostream>
using namespace std;

int main()
{
	int n;

	cin >> n;

	int* Array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": ";

		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}

			if (Array[i] > Array[j])
			{
				cout << "> ";
			}
			else if (Array[i] < Array[j])
			{
				cout << "< ";
			}
			else
			{
				cout << "= ";
			}
		}
		cout << endl;
	}


	delete[] Array;
	Array = nullptr;
}
