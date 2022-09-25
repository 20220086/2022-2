#include <iostream>
using namespace std;

int main()
{
	int i, j;
	cout << "정수 : ";
	cin >> i;

	j = i % 10;
	
	cout << "원래 숫자 : " << i << endl;
	cout << "숫자의 첫 번째 자릿수 : " << j;

	return 0;
}