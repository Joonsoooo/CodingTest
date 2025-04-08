#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	
	cin >> n;

	string* sentence = new string[n];
	int* score = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> sentence[i] >> score[i];
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (score[i] < score[j])
			{
				int Itemp = score[j];
				score[j] = score[i];
				score[i] = Itemp;

				string Stemp = sentence[j];
				sentence[j] = sentence[i];
				sentence[i] = Stemp;
			}
		}
	}

	cout << sentence[2];

	delete[] sentence;
	sentence = nullptr;
	delete[] score;
	score = nullptr;

}
