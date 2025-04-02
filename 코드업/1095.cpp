#include <iostream>

using namespace std;

int main()
{
	int n, min;

	cin >> n;

	int* Array = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}

	min = Array[0];

	for (int i = 0; i < n; i++)
	{
		if (min > Array[i])
		{
			min = Array[i];
		}
	}

	cout << min;

	delete[] Array;
	Array = nullptr;
}
