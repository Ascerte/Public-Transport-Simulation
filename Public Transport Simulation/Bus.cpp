#include "Bus.h"
#include<iostream>
#include"Serv_network.h"

Bus::Bus()
{

}


Bus::~Bus()
{
}

void Bus::createCourse(Serv_network& serv)
{
	std::cout << serv.m_graph[0][1];
}
