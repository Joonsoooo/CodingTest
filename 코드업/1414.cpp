#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Sen;
	int C = 0, CC = 0;

	cin >> Sen;

	for (int i = 0; i < Sen.size(); i++)
	{
		if (Sen[i] == 'c' || Sen[i] == 'C')
		{
			C++;

			if (Sen[i + 1] == 'c' || Sen[i + 1] == 'C')
			{
				CC++;
			}
		}
	}

	cout << C << endl << CC;
}
