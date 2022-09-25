#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l;
	//[31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
	a = 31; b = 29; c = 31; d = 30;
	e = 31; f = 30; g = 31; h = 31;
	i = 30; j = 31; k = 30; l = 31;
	
	int aa, bb;

	::cout << "월 : ";
	cin >> aa;
	::cout << "일 : ";
	cin >> bb;

	::cout << aa << "월 " << bb << "일은 ";

	switch (aa) {
	case 1 :
		bb = bb;
		break;
	case 2:
		bb += a;
		break;
	case 3:
		bb += a + b;
		break;
	case 4:
		bb += a + b + c;
		break;
	case 5:
		bb += a + b + c + d;
		break;
	case 6:
		bb += a + b + c + d + e;
		break;
	case 7:
		bb += a + b + c + d + e + f;
		break;
	case 8:
		bb += a + b + c + d + e + f + g;
		break;
	case 9:
		bb += a + b + c + d + e + f + g + h;
		break;
	case 10:
		bb += a + b + c + d + e + f + g + h + i;
		break;
	case 11:
		bb += a + b + c + d + e + f + g + h + i + j;
		break;
	case 12:
		bb += a + b + c + d + e + f + g + h + i + j + k;
		break;
	default:
		::cout << "ERROR";
		break;
	}
	::cout << bb << "번째 날입니다";

	return 0;
}