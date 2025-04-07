#include <iostream>

using namespace std;

int main()
{
	char Array[101];

	cin.getline(Array, 101);

	for (int i = 0; Array[i] != '\0'; i++)
	{
		if (Array[i] == 32)
		{
			continue;
		}

		cout << Array[i];
	}
}
