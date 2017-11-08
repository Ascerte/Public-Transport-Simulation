#pragma once
#include<utility>
#include<vector>
#include"Serv_network.h"

class Bus
{
public:
	Bus();
	~Bus();
	void createCourse();

private:
	std::vector<int> m_course;
	std::vector<int>::iterator m_it = m_course.begin();
	int m_courselen = static_cast<int>(m_course.size());
};

