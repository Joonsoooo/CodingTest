#include "iostream"

using namespace std;

int main()
{
	int n, k;

	cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		for (int l = 0; l < n; l++)
		{
			if (i == 0 || i == n - 1 || l == 0 || l == n - 1 || (i + l + 1) % k == 0)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
}
