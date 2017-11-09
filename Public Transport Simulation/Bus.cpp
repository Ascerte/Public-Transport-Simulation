#include "Bus.h"
#include<iostream>
#include"Serv_network.h"

Bus::Bus( std::initializer_list<int> l)
	:m_course(l)
{

}

void Bus::printCourse()
{
	for (m_it; m_it != m_course.end(); m_it++)
		std::cout << *m_it << " ";
}

int Bus::getPosition()
{
	if (m_it != m_course.end())
		return *m_it;
}

void Bus::update()
{
	if (m_it != m_course.end())
		m_it++;
	else
		return;
}