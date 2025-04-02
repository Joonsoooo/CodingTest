#include <iostream>
using namespace std;

int main()
{
	int k;

	cin >> k;

	int* Array = new int[k];

	for (int i = 0; i < k; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < k; j++)
		{
			cout << Array[j] << endl;
		}
	}
}
