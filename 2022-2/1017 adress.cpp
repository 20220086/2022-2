#include <iostream>
using namespace std;

int main()
{
	bool flag = true;
	int score = 92;
	double average = 82.56;
	cout << "A variable of type bool" << endl;
	cout << "Size: " << sizeof(flag) << " ";
	cout << "Value: " << flag << " ";
	cout << "Address: " << &flag << endl << endl;

	cout << "A variable of type int" << endl;
	cout << "Size: " << sizeof(score) << " ";
	cout << "Value: " << score << " ";
	cout << "Address: " << &score << endl << endl;

	cout << "A variable of type double" << endl;
	cout << "Size: " << sizeof(average) << " ";
	cout << "Value: " << average << " ";
	cout << "Address: " << &average << endl << endl;
	return 0;
}