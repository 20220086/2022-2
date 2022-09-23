#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int size = 0;
	cout << "size: " << endl;
	cin >> size;

	int number = 0;
	int counter = 0;
	float sum, product = 1.0;

	while (counter < size)
	{
		cout << "input : " << endl;
		cin >> number;
		cout << "sum = " << sum << " / product = " << product << endl;
		sum += number;
		product *= number;
		counter++;



	}
	cout << "sum = " << sum << " / product = " << product << endl;
	return 0;
}