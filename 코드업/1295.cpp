#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Sen;

	cin >> Sen;

	for (int i = 0; i < Sen.size(); i++)
	{
		if (Sen[i] >= 65 && Sen[i] <= 90)
		{
			cout << char(Sen[i] + 32);
		}
		else if (Sen[i] >= 97 && Sen[i] <= 122)
		{
			cout << char(Sen[i] - 32);
		}
		else
		{
			cout << Sen[i];
		}
	}
}
