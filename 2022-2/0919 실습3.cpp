//for �ݺ������� 0~n-1���� ����ϱ�

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number of integers to print: ";
	cin >> n;
	for (int counter = 0; counter < n; counter++)
	{
		cout << counter << " " << endl;
	}
	return 0;
}