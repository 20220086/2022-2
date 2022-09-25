#include <iostream>
using namespace std;

int main()
{
	double a = 0;
	cout << "소수 입력 : ";
	cin >> a;

	cout << "소수 : " << a << endl;
	cout << "정수 : " << (int)a << endl;
	cout << "소수점 아래 : " << a - (int)a;
}