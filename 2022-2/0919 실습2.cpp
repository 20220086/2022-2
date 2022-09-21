//플래그 사용하기(1)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream infile;
	int num;
	bool flag;
	infile.open("numbers.dat");
	flag = false;
	while (infile >> num && !flag)
	{
		if (num >= 15)
		{
			cout << "number: " << num;
			flag = true;
		}
	}
	if (!flag)
	{
		cout << "number was not found";
	}
	infile.close();
	return 0;
}