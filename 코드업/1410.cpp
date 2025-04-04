#include <ionstream>
using namespace std;

int main()
{
	char Array[100000];
	int Left = 0, Right = 0;

	cin.getline(Array, 100000);

	for (int i = 0; i < 100000; i++)
	{
		if (Array[i] == '(')
		{
			Left++;
		}
		else
		{
			Right++;
		}
	}


}
