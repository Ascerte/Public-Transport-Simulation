#include"functions.h"
#include<cstdlib>
int getRandom(int max, int min)
{
	int range;
	int num;
	range = max - min + 1;
	num = rand() % range + min;
	return num;
}