#include <iostream>

using namespace std;

int main()
{
	int Array[23] = { 0 };

	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		Array[num - 1]++;
	}

	for (int i = 0; i < 23; i++)
	{
		cout << Array[i] << " ";
	}
}
