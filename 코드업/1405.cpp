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
		for (int j = 0; j < n; j++)
		{
			cout << Array[j] << " ";
		}

		cout << endl;

		int temp = Array[0];
		for (int j = 0; j < n - 1; j++)
		{
			Array[j] = Array[j + 1];
		}
		Array[n - 1] = temp;
	}
}
