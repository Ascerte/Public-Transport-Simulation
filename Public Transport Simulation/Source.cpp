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

	std::vector<Bus> Bus_vec;  //vector of Bus objects
	Bus_vec.reserve(4);
	

	std::vector<std::initializer_list<int>> bus_list; //vector of initializer lists to initialize the previous Bus objects
	typedef std::initializer_list<int> li;
	li list = { 0,1,2,3,5,0 };  //creating an int list for each bus
	bus_list.reserve(4);
	bus_list.push_back(list);
	li list1 = { 0,1,0 };
	bus_list.push_back(list1);
	li list2 = { 0,5,4,1,0 };
	bus_list.push_back(list2);
	li list3 = { 0,5,3,4,1,0 };
	bus_list.push_back(list3);

	for (int i = 0; i < 4; i++)
		Bus_vec.push_back(Bus(bus_list[i]));  //initializing the Bus objects

	std::vector<Bus>::iterator bus_it = Bus_vec.begin();  //iterator for the bus list

	for (bus_it; bus_it != Bus_vec.end(); bus_it++)
	{
		bus_it->printCourse(); //printing the course of each bus within the vector for testing purposes
		std::cout << "\n";
	}

	system("pause");
	
	
}