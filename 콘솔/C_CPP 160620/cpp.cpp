#include <iostream>
#include <conio.h>

using namespace std;

class Data
{
private:
	int data;
public:
	Data(int num) : data(num)
	{}
	void ShowData() 
	{
		cout << " data : " << data;
	}
	void Add(int num) 
	{ 
		data += num; 
	}
};

int main(void)
{
	Data obj(20);
	obj.Add(10);
	obj.ShowData();
	_getch();
}