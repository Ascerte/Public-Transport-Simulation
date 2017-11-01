#include<iostream>
#include"Serv_network.h"
//#include<cstdlib>
#include<time.h>
#include"Person.h"
#include<string>
#include<random>
#include"functions.h"
int main()
{
	Serv_network test(5);
	test.printGraph();
	system("pause");
}