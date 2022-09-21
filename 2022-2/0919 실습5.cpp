//°ö¼À Ç¥ ¸¸µé±â(1)

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int size;
	do
	{
		cout << "Enter (2 to 10): ";
		cin >> size;
	} while (size < 2 || size > 10);
	
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)

		{
			cout << setw(4) << i * j;
		}
		cout << endl;
	}
	return 0;
}