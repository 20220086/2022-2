#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Adress of cell " << i << " Using pointer : ";
		cout << arr + i << endl;
		cout << "Adress of cell " << i << " Using & operator : ";
		cout << &arr[i] << endl << endl;
	}
	return 0;
}

