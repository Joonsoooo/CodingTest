#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int num = n;
	int binSize = 1;

	while (num != 0 && num != 1)
	{
		num /= 2;
		binSize++;
	}
	int* Array = new int[binSize];

	for (int i = binSize - 1; n > 1; i--)
	{
		int bin = n % 2;
		n /= 2;
		
		Array[i] = bin;
	}

	Array[0] = n;

	for (int i = 0; i < binSize; i++)
	{
		cout << Array[i];
	}

	delete[] Array;
	Array = nullptr;
}
