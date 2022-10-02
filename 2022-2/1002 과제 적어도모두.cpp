#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "size : "; // 1 ~ size
	cin >> size;

	int anyall = 0;
	cout << "1.any or 2.all (input '1' or '2') : ";
	cin >> anyall;

	bool success;
	if (anyall == 2)
	{
		bool success = true;
		return success;
	}
	else if (anyall == 1)
	{
		bool success = false;
		return success;
	}
	int counter = 1;

	if (success = true) // all
	{
		while (success)
		{
			cout << "read " << counter;
			if (counter % 15 != 0) // 15의 배수가 아님 (all)
			{
				counter++;
				cout << " right" << endl;
			}
			else
			{
				success = false;
			}
		}
		if (success == true)
		{
			cout << "success";
		}
		else
		{
			cout << " failure";
		}
	}
	else
	{
		while (~success)
		{
			if (counter % 15 == 0) // 약수가 15임 (any)
			{
				success = !success;
				break;
			}
			else
			{
				cout << "read " << counter;
				counter++;
			}
		}
		if (!success == true)
		{
			cout << "success";
		}
		else
		{
			cout << " failure";
		}
	}

	return 0;
}