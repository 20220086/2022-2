#include <iostream>
#include <iomanip>
using namespace std;

void rowTransform(const int originArray[][4], int rowSize, int rowArray[])
{
	if (rowSize == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			rowArray[i] = originArray[0][i];
		}
		for (int j = 0; j < 4; j++)
		{
			rowArray[j + 4] = originArray[1][j];
		}
	}
	
}

void colTransform(int originArray[][4], int rowSize, int colArray[])
{
	if (rowSize == 2)
	{
		for (int i = 0; i < 4; i++)
		{
			colArray[i * 2] = originArray[0][i];
		}
		for (int j = 0; j < 4; j++)
		{
			colArray[j * 2 + 1] = originArray[1][j];
		}
	}
}
void printTwoDimensional(const int twoDimensional[][4], int rowSize)
{
	for (int i = 0; i < rowSize; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(4) << twoDimensional[i][j];
		}
		cout << endl;
	}
	cout << endl;
}

void printOneDimensional(const int oneDimensional[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << oneDimensional[i];
	}
	cout << endl;
}
int main()
{
	int originArray[2][4] = { {0, 1, 2, 3}, {10, 11, 12, 13} };
	int rowArray[8];
	int colArray[8];

	rowTransform(originArray, 2, rowArray);
	colTransform(originArray, 2, colArray);

	cout << " Original Array " << endl;
	printTwoDimensional(originArray, 2);

	cout << "Row-Transformed Array: ";
	printOneDimensional(rowArray, 8);

	cout << "Column-Transformed Array: ";
	printOneDimensional(colArray, 8);
	return 0;
}