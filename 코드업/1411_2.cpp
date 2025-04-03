#include <iostream>

using namespace std;

int main()
{
	int N, input;

	cin >> N;

	int* Array = new int[N];

	for (int i = 0; i < N; i++)
	{
		Array[i] = 0;
	}

	for (int i = 0; i < N - 1; i++)
	{
		cin >> input;
		Array[input - 1] = 1;
	}

	for (int i = 0; i < N; i++)
	{
		if (Array[i] == 0)
		{
			cout << i + 1;
		}
	}
}
