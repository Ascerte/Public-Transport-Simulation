#pragma once
#include<utility>
#include<vector>
#include"Serv_network.h"
#include<initializer_list>

class Bus
{
public:
	Bus(int busno ,std::initializer_list<int> l);
	void printCourse();
	std::vector<int>::iterator getPosition();
	int getID();
	void reset();
	void move();
	bool isFinished();
	void startCourse(int &tick);

private:
	std::vector<int> m_course;
	std::vector<int>::iterator m_it = m_course.begin();
	int m_id;
	bool m_finished = false;
	bool m_isRunning = false;
	int m_arrival;
	int m_embark = 0;
};

