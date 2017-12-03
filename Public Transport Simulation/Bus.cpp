#include "Bus.h"
#include<iostream>
#include"Serv_network.h"

Bus::Bus( std::initializer_list<int> l)
	:m_course(l)
{

}

void Bus::printCourse()
{
	for (m_it; m_it != m_course.end(); m_it++)  //prints all the nodes that the bus visits
		std::cout << *m_it << " ";
}

int Bus::getPosition()  //returns current position of the bus
{
	if (m_it != m_course.end())  
		return *m_it;
}

void Bus::update()  //moves the bus to the next stop in the course
{
	if (m_it != m_course.end())
		m_it++;
	else
		return;
}