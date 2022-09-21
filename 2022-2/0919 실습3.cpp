//for 반복문으로 0~n-1까지 출력하기

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