#include <iostream>

using namespace std;

int main()
{
	int N, A = 1;

	cin >> N;

	int* Array = new int[N-1];

	for (int i = 0; i < N-1; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < N-1; i++)
	{
		for (int j = 0; j < N-1; j++)
		{
			if (Array[j] == A)
			{
				A++;
			}
		}
	}

	cout << A;

	delete[] Array;
	Array = nullptr;
}
