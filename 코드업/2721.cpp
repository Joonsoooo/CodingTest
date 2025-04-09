#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sen1, sen2, sen3;

	cin >> sen1 >> sen2 >> sen3;

	if (sen1[sen1.size() - 1] == sen2[0] && sen2[sen2.size() - 1] == sen3[0] && sen3[sen3.size() - 1] == sen1[0])
	{
		cout << "good";
	}
	else
	{
		cout << "bad";
	}
}
