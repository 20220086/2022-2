#include <iostream>
using namespace std;

int main()
{
	int exponent = 0;
	int base = 0;
	cout << "Ƚ�� : ";
	cin >> exponent;
	cout << "���� : ";
	cin >> base;
	
	int a = base;
	int i = 1;
	while (exponent > i)
	{
		base = base * a;
		i++;
	}
	cout << base << endl;
	return 0;
}