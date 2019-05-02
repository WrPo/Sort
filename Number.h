#include <SFML/Graphics.hpp>
#include <iostream>
#pragma once



class Number
{
private:
	int value;
	int width;
	sf::RectangleShape shape;
	int windowHeight;
public:
	Number() = default;
	Number(int, int, int, int);
	sf::RectangleShape getShape();
	void setColor(sf::Color);
	bool operator < (Number&);
	bool operator <= (Number&);
	bool operator > (Number&);
	bool operator >= (Number&);
	void operator = (Number&);
	static void swapNumbers(Number&, Number&);
};

