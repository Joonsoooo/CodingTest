#include <iostream>
#include <string>
using namespace std;

int main()
{
	string Sen;

	cin >> Sen;

	for (int i = 0; i < Sen.size(); i++)
	{
		cout << char(Sen[i] + 2);
	}

	cout << endl;

	for (int i = 0; i < Sen.size(); i++)
	{
		cout << char(Sen[i] * 7 % 80 + 48);
	}
}
