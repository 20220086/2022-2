#include <iostream>
using namespace std;

void multiplyByN(int numbers[], int size)
{
	int number;
	cout << "input number : ";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		numbers[i] *= number;
	}
	return;
}

void print(const int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << " ";
	}
	return;
}

int main()
{
	int numbers[15] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	print(numbers, 10);
	cout << endl;
	multiplyByN(numbers, 10);
	print(numbers, 10);
	cout << endl;
	return 0;
}