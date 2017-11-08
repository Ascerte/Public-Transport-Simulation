#include<iostream>
#include<fstream>
#include"Serv_network.h"
#include<time.h>
#include"Person.h"
#include<string>
#include<random>
#include"functions.h"
#include"Bus.h"
#include<vector>
#include<initializer_list>

void printLine(std::ofstream &f, int &h, int &m, int &s)
{
	f << 0 << h << ":";
	if (m < 10)
		f << 0 << m;
	else
		f << m;
	f << ":";

	if (s < 10)
		f << 0 << s;
	else
		f << s;
	f << "\n";
}

int main()
{
	//Serv_network test(6);
	//test.printGraph();
	//std::cout << "\n";
	//Bus bus;
	//std::ofstream f("test.txt");
	//int tick = 0;
	//int nr_buses(4);


	/*while (tick < 7200)
	{
		for( it; it != Buses.end(); it++)
		{
			//if()
		}
	*/

	Serv_network test;
	test.printGraph();
	system("pause");
	
	
}