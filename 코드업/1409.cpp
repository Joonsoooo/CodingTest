#include <iostream>

using namespace std;

int main()
{
	int num[10];
	int numSize = sizeof(num) / sizeof(num[0]);
	int k;

	for (int i = 0; i < numSize; i++)
	{
		cin >> num[i];
	}

	cin >> k;

	cout << num[k - 1];
}
