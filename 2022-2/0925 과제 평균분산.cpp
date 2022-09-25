#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "첫 번째 숫자 : ";
	cin >> a;
	cout << "두 번째 숫자 : ";
	cin >> b;
	cout << "세 번째 숫자 : ";
	cin >> c;

	cout << "평균 : " << (a + b + c) / 3 << endl;
	cout << "분산 1 : " << a - ((a + b + c) / 3) << endl;
	cout << "분산 2 : " << b - ((a + b + c) / 3) << endl;
	cout << "분산 3 : " << c - ((a + b + c) / 3);
	return 0;
}