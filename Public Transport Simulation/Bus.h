#pragma once
#include<utility>
#include<vector>
#include"Serv_network.h"

class Serv_network;
class Bus
{
public:
	Bus();
	~Bus();
	void createCourse(Serv_network &serv);

private:
	std::vector<std::pair<int, int>> m_course;
	std::vector<std::pair<int, int>>::iterator m_it = m_course.begin();
	int m_courselen = static_cast<int>(m_course.size());
};

