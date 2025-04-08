#include <iostream>
using namespace std;

int Array[10000001] = { 0 };

int main()
{
	int N, M, input;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> input;
		Array[input] = 1;
	}

	cin >> M;

	for (int j = 0; j < M; j++)
	{
		cin >> input;
		cout << Array[input] << " ";
	}

}
