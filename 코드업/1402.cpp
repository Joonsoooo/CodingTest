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

	for (int i = n - 1; i >= 0; i--)
	{
		cout << Array[i] << " ";
	}

	delete[] Array;
	Array = nullptr;
}
