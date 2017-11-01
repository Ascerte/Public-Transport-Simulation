#include<iostream>
#include<fstream>
#include"Serv_network.h"
//#include<cstdlib>
#include<time.h>
#include"Person.h"
#include<string>
#include<random>
#include"functions.h"

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
	//test.printGraph();
	std::ofstream f("test.txt");
	int tick = 0;
	for (int h = 0; h < 2; h++)
		for (int m = 0; m < 60; m++)
			for (int s = 0; s < 60; s++)
			{
				if (m == 30)
					printLine(f, h, m, s);
				tick++;
			}
	f << tick;
	system("pause");
}