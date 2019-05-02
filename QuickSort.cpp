#include "QuickSort.h"



QuickSort::QuickSort(const int& howManyNumbers)
{
	this->howManyNumbers = howManyNumbers;
	startVisualisation(howManyNumbers);
	sort(0, howManyNumbers - 1);
	setNumbersColor(sf::Color::White);
}

void QuickSort::sort(int begin, int end)
{
	if (end <= begin) return;
	int i = begin - 1;
	int j = end + 1;
	Number pivot = *numbers[(begin + end) / 2];

	while (1)
	{
		while (pivot > *numbers[++i])
		{
			drawNumbers();
		}
		while (pivot < *numbers[--j])
		{
			drawNumbers();
		}
		if (i <= j)
		{
			Number::swapNumbers(*numbers[i], *numbers[j]);
			drawNumbers();
		}
		else
			break;
	}

	if (j > begin)
		sort(begin, j);
	if (i < end)
		sort(i, end);
}