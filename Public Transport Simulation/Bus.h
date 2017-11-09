#pragma once
#include<utility>
#include<vector>
#include"Serv_network.h"
#include<initializer_list>

class Bus
{
public:
	Bus(std::initializer_list<int> l);
	void printCourse();
	int getPosition();
	void update();

private:
	std::vector<int> m_course;
	std::vector<int>::iterator m_it = m_course.begin();
};

