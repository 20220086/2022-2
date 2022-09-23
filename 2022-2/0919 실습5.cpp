//곱셈 표 만들기(1)

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int size;
	do
	{
		cout << "Enter (2 to 10): ";
		cin >> size;
	} while (size < 2 || size > 10);
	
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)

		{
			cout << setw(4) << i * j;
		}
		cout << endl;
	}
	return 0;
}
//반복문 과제
//합곱 팩토리얼 거듭제곱(for문 직접 구현) 최소최대
//적어도 모두조건 충족숫자 찾기(1) (랜드함수 활용하기)

//함수 과제
//정기예금 미래가치 / 
