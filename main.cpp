#include <SFML/Graphics.hpp>
#include <iostream>
#include "BubleSort.h"
#include "QuickSort.h"



int main()
{

	std::cout << "1.BubleSort" << std::endl;
	std::cout << "2.QuickSort" << std::endl;
	int a;
	std::cin >> a;
	if(a == 1)
		BubleSort(200);
	else if(a == 2)
		QuickSort(200);
	return 0;

}