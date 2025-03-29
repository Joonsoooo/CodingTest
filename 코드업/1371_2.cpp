#include <iostream>

using namespace std;

int main()
{
	int n, c;

	cin >> n;

	if (n >= 2 && n <= 100)
	{
		for (int i = 1; i < n + 1; i++)
		{
			for (int j = 0; j < n - i; j++)
			{
				cout << " ";
			}
			cout << "*"; // n - i가 별이 놓일 위치

			for (int j = 0; j < (i - 1) * 2; j++)
			{
				cout << " ";
			}
			cout << "*" << endl; // 2칸 간격
		}

		for (int i = n; i > 0; i--)
		{
			for (int j = 0; j < n - i; j++)
			{
				cout << " ";
			}
			cout << "*"; // n - i가 별이 놓일 위치

			for (int j = 0; j < (i - 1) * 2; j++)
			{
				cout << " ";
			}
			cout << "*" << endl; // 2칸 간격
		}


	}
}
