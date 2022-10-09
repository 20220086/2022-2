#include "apple.h"

Apple::Apple()
{
}

Apple::Apple(string name, int price, string color)
{
	this->name = name;
	this->price = price;
	this->color = color;
}

void Apple::setinfo(string _name, int _price, string _color)
{
	name = _name;
	price = _price;
	color = _color;
}

string Apple::getName()
{
	return name;
}

int Apple::getPrice() const
{
	return price;
}

double Apple::getPriceDollor() const
{
	return (price / 1424.81);
}

string Apple :: getColor()
{
	return color;
}