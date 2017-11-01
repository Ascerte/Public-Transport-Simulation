#include"functions.h"
#include<random>
#include<time.h>
#include"globals.h"
int getRandom(int min, int max)
{
	std::uniform_int_distribution<int> dis(min, max);
	return dis(seed);
}