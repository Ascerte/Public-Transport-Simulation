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
	Serv_network test(5);
	test.printGraph();
	std::cout << "\n";
	Bus bus;
	//std::ofstream f("test.txt");
	int tick = 0;
	int nr_buses(getRandom(1, 5));

	std::vector<Bus> Buses;
	std::vector<Bus>::iterator Buses it = Buses.begin();
	for (int i = 0; i < nr_buses; i++)
		Buses.push_back(Bus());

	while (tick < 7200)
	{
		for( it; it != Buses.end(); it++)
		{
			if()
		}
	}
	system("pause");
	
	
}