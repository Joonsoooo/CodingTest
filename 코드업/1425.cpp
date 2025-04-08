#include <iostream>
using namespace std;

int main()
{
	int N, C;

	cin >> N >> C;

	int* Array = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> Array[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (Array[i] > Array[j])
			{
				int temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << Array[i] << " ";

		
		if ((i + 1) % C == 0)
		{
			cout << endl;
		}
	}

	delete[] Array;
	Array = nullptr;
}
