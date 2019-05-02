#include "Visualiser.h"



void Visualiser::startVisualisation(const int& howManyNumbers)
{
	this->howManyNumbers = howManyNumbers;
	numbers.resize(howManyNumbers);
	std::vector<int> randomIntegers = RandomGenerator::generateRandomIntegers(howManyNumbers, 0, 600);
	window.create(sf::VideoMode(600, 600), "Sorting Simulator");
	for (int i = 0; i < howManyNumbers; ++i)
	{
		numbers[i] = std::make_unique<Number>(randomIntegers[i], i * 3, 3, 600);
	}
}

void Visualiser::setNumbersColor(sf::Color color)
{
	for(int i = 0; i < howManyNumbers; ++i)
		numbers[i]->setColor(color);
}

void Visualiser::drawNumbers()
{
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		for (int i = 0; i < howManyNumbers; ++i)
			window.draw(numbers[i]->getShape());
		window.display();
		setNumbersColor(sf::Color::White);

}