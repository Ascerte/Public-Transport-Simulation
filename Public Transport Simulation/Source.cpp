#include<iostream>
#include"Serv_network.h"
#include<cstdlib>
#include<time.h>

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	rand();
	Serv_network test(5);
	test.printGraph();
	system("pause");
}