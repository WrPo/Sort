#include <SFML/Graphics.hpp>
#include <iostream>
#include "Number.h"
#include "RandomGenerator.h"
#pragma once



class Visualiser
{
protected:
	std::vector<std::unique_ptr<Number>> numbers;
	int howManyNumbers;
	sf::RenderWindow window;
	sf::Event event;
	void drawNumbers();
	void setNumbersColor(sf::Color);
public:
	void startVisualisation(const int&);
};

