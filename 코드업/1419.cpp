#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence;
	string love = "love";
	int num = 0;
	getline(cin, sentence);

	for (int i = 0; i < sentence.size(); i++)
	{
		if (sentence[i] == love[0])
		{
			for (int j = 0; j < love.size(); j++)
			{
				if (sentence[i] != love[j])
				{
					break;
				}
				else if (sentence[i] == 'e' && j == love.size() -1)
				{
					num++;
					i--;
				}
				i++;
			}
		}
	}

	cout << num;
}
