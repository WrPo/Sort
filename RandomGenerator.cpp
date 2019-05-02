#include "RandomGenerator.h"

std::vector<int> RandomGenerator::generateRandomIntegers(const int& size, const int& min, const int& max)
{
	std::random_device dev;
	std::mt19937 rng(dev());
	std::uniform_int_distribution<std::mt19937::result_type> randomInteger(min, max);
	std::vector<int> result(size);
	for (int i = 0; i < result.size(); ++i)
		result[i] = randomInteger(rng);
	return result;
}