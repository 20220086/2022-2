#include <iostream>
using namespace std;
int main()
{
	int numbers[5] = { 10, 11, 12, 13, 14 };
	cout << "Accessing elements through indexes" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
	cout << "Accessing elements through pointers" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << *(numbers + i) << " ";
	}
	return 0;
}