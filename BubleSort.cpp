#include "BubleSort.h"



BubleSort::BubleSort(const int& howManyNumbers)
{
	this->howManyNumbers = howManyNumbers;
	startVisualisation(howManyNumbers);
	sort();
	setNumbersColor(sf::Color::White);
}

void BubleSort::sort()
{
	for (int i = 0; i < howManyNumbers; ++i)
	{
		for (int j = i + 1; j < howManyNumbers; ++j)
		{
			if (*numbers[i] > *numbers[j])
			{
				Number::swapNumbers(*numbers[i], *numbers[j]);
				drawNumbers();
			}
			drawNumbers();
		}
	}
}