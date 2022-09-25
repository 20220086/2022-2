#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	int n = 0;
	cout << "input n: ";
	cin >> n;

	int i = 0;
	int factorial = 1;
	while (i<n)
	{
		i++;
		factorial *= i;
	}
	cout << factorial << endl;
	return 0;
}