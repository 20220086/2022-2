#include <iostream>
using namespace std;

int main()
{
	int score = 92;
	int* pScore = &score;

	cout << "Direct retrieve of score: " << score << endl;
	cout << "Indirect retrieve of score: " << *pScore;
	return 0;
}