#include <iostream>

using namespace std;

int main()
{
	char Sentence[91];
	int Alphabet[26] = { 0 };

	cin.getline(Sentence, 91);

	for (int i = 0; i < 91; i++)
	{
		for (char j = 97; j <= 122; j++)
		{
			if (Sentence[i] == j)
			{
				Alphabet[j - 'a']++;
			}
		}
	}

	for (char i = 'a'; i <= 'z'; i++)
	{
		cout << i << ":" << Alphabet[i - 'a'] << endl;
	}
}
