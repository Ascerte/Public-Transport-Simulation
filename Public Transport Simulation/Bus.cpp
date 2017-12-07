#include "Bus.h"
#include<iostream>
#include"Serv_network.h"
#include<fstream>
#include<sstream>

std::ofstream f("output.txt");
Bus::Bus( int busno, std::initializer_list<int> l)
	:m_course(l), m_id(busno)
{

}

void Bus::printCourse()
{
	for (m_it; m_it != m_course.end(); m_it++)  //prints all the nodes that the bus visits
		std::cout << *m_it << " ";
}

std::vector<int>::iterator Bus::getPosition()  //returns current position of the bus
{
		return m_it;
}

int Bus::getID()
{
	return m_id;
}

void Bus::reset()
{
	m_it = m_course.begin();

}

void Bus::move()
{
	m_it++;
}

bool Bus::isFinished()
{
	return m_finished;
}



void printLine(int &h, int &m, int &s)
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

void tickTransform(int &tick)
{
	int sec, min, hour;
	hour = (tick / 60 / 60) % 24;
	min = (tick / 60) % 60;
	sec = tick % 60;
	//f << hour << ":" << min << ":" << sec << " -> ";
	f << 0 << hour << ":";
	if (min < 10)
		f << 0 << min;
	else
		f << min;
	f << ":";

	if (sec < 10)
		f << 0 << sec;
	else
		f << sec;
	f << " -> ";
}

void Bus::startCourse(int &tick)
{
	if (m_it != m_course.end())
	{
		if (m_isRunning == false)
		{
			tickTransform(tick);
			f << "Bus " << m_id << " has left station " << *m_it << "\n";
			move();
			m_isRunning = true;
		}
		else
		{
			tickTransform(tick);
			f << "Bus " << m_id << " has arrived at station " << *m_it << "\n";
			m_isRunning = false;
		}
	}

	else
	{
		tickTransform(tick);
		f << "Bus " << m_id << " has completed its course \n";
		m_finished = true;
	}


}
