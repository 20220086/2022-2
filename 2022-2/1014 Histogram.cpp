#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	const int CAPACITY = 10;
	int frequencies[CAPACITY] = { 0 };
	ifstream integerFile;
	integerFile.open("integerFile.dat");
	if (!integerFile)
	{
		cout << "ERROR";
		return 0;
	}

	int data;
	int size = 0;
	while (integerFile >> data)
	{
		size++;
		frequencies[data]++;
		cout << frequencies[data];
	}
	integerFile.close();
}