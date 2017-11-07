#include "Bus.h"
#include<iostream>
#include"Serv_network.h"
#include"functions.h"

Bus::Bus()
{

}


Bus::~Bus()
{
}

void Bus::createCourse()
{
	int len{ getRandom(1,4) };
	for(int i = 0; i < len; i++)
		m_course.push_back(getRandom(0))
}
