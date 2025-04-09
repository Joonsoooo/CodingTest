#include <iostream>
#include <string>
using namespace std;

int main()
{
	string sentence;
	int num = 0;

	getline(cin, sentence);

	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == 'l' && sentence[i + 1] == 'o' && sentence[i + 2] == 'v' && sentence[i + 3] == 'e')
		{
			num++;
		}
	}

	cout << num;
}
