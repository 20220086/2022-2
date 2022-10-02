#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	cout << "size : ";
	cin >> size;

	int b = 0;
	int largest = 0;
	int smallist = 0;
	int counter = 0;


	while (size > counter)
	{
		if (counter >= 1)
		{
			cout << "number : ";
			cin >> b;
			if (largest < b)
			{
				largest = b;
			}
			if (smallist > b)
			{
				smallist = b;
			}
			counter++;
		}
		else
		{
			cout << "number : ";
			cin >> b;
			smallist = b;
			largest = b;
			counter++;
		}
	}
	cout << "최대 :" << largest << endl;
	cout << "최소 : " << smallist;
	return 0;
}