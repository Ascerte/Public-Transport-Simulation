#include<iostream>
#include<fstream>
#include"Serv_network.h"
#include"Person.h"
#include<string>
#include<random>
#include"functions.h"
#include"Bus.h"
#include<vector>
#include<initializer_list>


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
		Bus_vec.push_back(Bus(i,bus_list[i]));  //initializing the Bus objects

	std::vector<Bus>::iterator bus_it = Bus_vec.begin();  //iterator for the bus list

	Serv_network network;

	std::ofstream f("output.txt");

	int tick = 0;
	while (tick < 3600) //we are using an arbitrary unit of time. 1 tick corresponds to one second 
	{
		for (bus_it = Bus_vec.begin(); bus_it != Bus_vec.end(); bus_it++)
		{
			if(bus_it->isFinished() == false) // we check if the bus hasn't finished its course so as not to print the same thing multiple times
				bus_it->startCourse(tick, f, network);
		}

		tick++;
	}

	system("pause");
	
	
}
