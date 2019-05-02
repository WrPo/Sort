#include "Number.h"



Number::Number(int value, int posX, int width, int windowHeight)
{
	this->width = width;
	this->windowHeight = windowHeight;
	this->value = value;
	shape.setPosition(posX, windowHeight - value);
	shape.setSize(sf::Vector2f(width, value));
}
sf::RectangleShape Number::getShape()
{	
	return shape;
}

void Number::setColor(sf::Color color)
{
	shape.setFillColor(color);
}

bool Number::operator < (Number& number)
{
	if (this->value < number.value)
	{
		number.shape.setFillColor(sf::Color::Green);
		this->shape.setFillColor(sf::Color::Green);
		return true;
	}
	else
	{
		number.shape.setFillColor(sf::Color::Red);
		this->shape.setFillColor(sf::Color::Red);
		return false;
	}
}
bool Number::operator <= (Number& number)
{
	if (this->value <= number.value)
	{
		number.shape.setFillColor(sf::Color::Green);
		this->shape.setFillColor(sf::Color::Green);
		return true;
	}
	else
	{
		number.shape.setFillColor(sf::Color::Red);
		this->shape.setFillColor(sf::Color::Red);
		return false;
	}
}
bool Number::operator > (Number& number)
{
	if (this->value > number.value)
	{
		number.shape.setFillColor(sf::Color::Green);
		this->shape.setFillColor(sf::Color::Green);
		return true;
	}
	else
	{
		number.shape.setFillColor(sf::Color::Red);
		this->shape.setFillColor(sf::Color::Red);
		return false;
	}
}
bool Number::operator >= (Number& number)
{
	if (this->value >= number.value)
	{
		number.shape.setFillColor(sf::Color::Green);
		this->shape.setFillColor(sf::Color::Green);
		return true;
	}
	else
	{
		number.shape.setFillColor(sf::Color::Red);
		this->shape.setFillColor(sf::Color::Red);
		return false;
	}
}
void Number::operator = (Number& number)
{
	this->value = number.value;
	shape.setPosition(shape.getPosition().x, windowHeight - value);
	shape.setSize(sf::Vector2f(width, value));
}

void Number::swapNumbers(Number& a, Number& b)
{
	Number temp;
	temp = a;
	a = b;
	b = temp;
}