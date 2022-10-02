#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int size = 0;
	cout << "size: ";
	cin >> size;

	float sum = 0.0;
	float product = 1.0;
	int counter = 0;
	int number = 0;

	while (counter < size)
	{
		cout << "input : ";
		cin >> number;
		sum += number;
		product *= number;
		cout << "sum = " << sum << " / product = " << product << endl;
		counter++;
	}
	cout << "end";
	return 0;
}