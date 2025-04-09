#include <iostream>
using namespace std;

int main()
{
	string sentence;

	cin >> sentence;

	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == 't')
		{
			cout << i + 1 << " ";
		}
	}
}
