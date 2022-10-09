#ifndef APPLE_H
#define APPLE_H
#include <iostream>
#include <string>
#include "apple.h"
using namespace std;

class Apple
{
private:
	string name;
	int price = 0;
	string color;
public:
	Apple();
	Apple(string name, int price, string color);
	void setinfo(string _name, int _price, string _color);
	string getName();
	int getPrice() const;
	double getPriceDollor() const;
	string getColor();
};
#endif