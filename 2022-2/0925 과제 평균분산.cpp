#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "ù ��° ���� : ";
	cin >> a;
	cout << "�� ��° ���� : ";
	cin >> b;
	cout << "�� ��° ���� : ";
	cin >> c;

	cout << "��� : " << (a + b + c) / 3 << endl;
	cout << "�л� 1 : " << a - ((a + b + c) / 3) << endl;
	cout << "�л� 2 : " << b - ((a + b + c) / 3) << endl;
	cout << "�л� 3 : " << c - ((a + b + c) / 3);
	return 0;
}