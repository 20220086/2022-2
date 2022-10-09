#include "apple.h"
int main()
{
	Apple iPhone13 ("iPhone 13", 1090000, "StarLight");
	cout << "이름 : " << iPhone13.getName() << endl;
	cout << "색상 : " << iPhone13.getColor() << endl;
	cout << "가격 : " << iPhone13.getPrice() << endl;
	cout << "가격 : " << iPhone13.getPriceDollor() << "달러" << endl;
	cout << endl;

	Apple iPhone13Mini("iPhone 13 mini", 950000, "MidNight");
	cout << "이름 : " << iPhone13Mini.getName() << endl;
	cout << "색상 : " << iPhone13Mini.getColor() << endl;
	cout << "가격 : " << iPhone13Mini.getPrice() << endl;
	cout << "가격 : " << iPhone13Mini.getPriceDollor() << "달러" << endl;
	cout << endl;

	Apple iPadAir("iPad Air 4th", 779000, "Space Gray");
	cout << "이름 : " << iPadAir.getName() << endl;
	cout << "색상 : " << iPadAir.getColor() << endl;
	cout << "가격 : " << iPadAir.getPrice() << endl;
	cout << "가격 : " << iPadAir.getPriceDollor() << "달러" << endl;
	cout << endl;

	return 0;
}