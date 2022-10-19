#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
using namespace std;
int main()
{
	const int CAPACITY = 30;
	char frequencie[CAPACITY] = { 0 };
	ifstream integerFile;
	integerFile.open("integerFile.dat");
	if (!integerFile)
	{
		cout << "ERROR";
		return 0;
	}

	/*int data;
	int size = 0;
	for (int i = 0; i < 5; i++)
	{
		frequencies[i] = ;
		cout << frequencies[data];
	}
	integerFile.close();
	cout << frequencies;*/


	int i = 0;
	for (int j = 0; j < 10; j++)
	{
		integerFile >> frequencie[i];
		i++;
	}
	cout << endl << frequencie << endl;
	cout << "count 0 : " << count(frequencie, frequencie + 10, 1) << endl;
	cout << "count 1 : " << count(frequencie, frequencie + 10, 1) << endl;
	cout << "count 2 : " << count(frequencie, frequencie + 10, 2) << endl;
	cout << "count 3 : " << count(frequencie, frequencie + 10, 3) << endl;
	cout << "count 4 : " << count(frequencie, frequencie + 10, 4) << endl;
	cout << "count 5 : " << count(frequencie, frequencie + 10, 5) << endl;
	cout << "count 6 : " << count(frequencie, frequencie + 10, 6) << endl;
	cout << "count 7 : " << count(frequencie, frequencie + 10, 7) << endl;
	cout << "count 8 : " << count(frequencie, frequencie + 10, 8) << endl;
	cout << "count 9 : " << count(frequencie, frequencie + 10, 9) << endl;
	return 0;
}


