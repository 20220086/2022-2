#include "apple.h"
int main()
{
	Apple iPhone13 ("iPhone 13", 1090000, "StarLight");
	cout << "�̸� : " << iPhone13.getName() << endl;
	cout << "���� : " << iPhone13.getColor() << endl;
	cout << "���� : " << iPhone13.getPrice() << endl;
	cout << "���� : " << iPhone13.getPriceDollor() << "�޷�" << endl;
	cout << endl;

	Apple iPhone13Mini("iPhone 13 mini", 950000, "MidNight");
	cout << "�̸� : " << iPhone13Mini.getName() << endl;
	cout << "���� : " << iPhone13Mini.getColor() << endl;
	cout << "���� : " << iPhone13Mini.getPrice() << endl;
	cout << "���� : " << iPhone13Mini.getPriceDollor() << "�޷�" << endl;
	cout << endl;

	Apple iPadAir("iPad Air 4th", 779000, "Space Gray");
	cout << "�̸� : " << iPadAir.getName() << endl;
	cout << "���� : " << iPadAir.getColor() << endl;
	cout << "���� : " << iPadAir.getPrice() << endl;
	cout << "���� : " << iPadAir.getPriceDollor() << "�޷�" << endl;
	cout << endl;

	return 0;
}