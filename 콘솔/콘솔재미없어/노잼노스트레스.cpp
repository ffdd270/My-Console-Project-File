#include <iostream>


using namespace std;
int main()
{
	int i;
	cin >> i;

	if (i < 0)
	{
		i = i * -1;
	}

	cout << i;
	system("pause");
	return 0;

}