#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	int n = 0;
	cout << "input n: ";
	cin >> n;

	int factorial = 1;
	int counter = 1;
	while (counter < n + 1)
	{
		factorial = factorial //�ذ��ϱ�
		cout << factorial << endl;
		counter++;
	}
	cout << factorial << endl;
}