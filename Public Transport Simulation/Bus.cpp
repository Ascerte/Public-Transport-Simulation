#include "Bus.h"
#include<iostream>
#include"Serv_network.h"
#include<fstream>
#include<sstream>

Serv_network tester;

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

void tickTransform(int &tick)  //function to transform the tick to hh:mm:ss format
{
	int sec, min, hour;
	hour = (tick / 60 / 60) % 24;
	min = (tick / 60) % 60;
	sec = tick % 60;
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
	if (m_it != m_course.end()) //check if the bus had not reached the final stop
	{
		if (m_isRunning == false && tick == m_embark) //check if the bus is not running and the current tick is equal to the scheduled departure after waiting the passengers to embark
		{
			tickTransform(tick); //print curent tick
			f << "Bus " << m_id << " has left station " << *m_it << "\n";
			m_arrival = tick + tester.getWeight(*m_it, *(m_it + 1)); //set the scheduled arrival based on the current tick + weight between the current node and destination node
			move(); //move the bus to the next stop
			m_isRunning = true; // the bus is now running
		}
		else
		{
			if (tick == m_arrival) //check if the bus is not running and the current tick is equal to the scheduled arrival time after departure
			{
				tickTransform(tick);  //print current tick
				f << "Bus " << m_id << " has arrived at station " << *m_it << "\n";
				m_isRunning = false; //the bus has now stopped
				m_embark = tick + 60; //departure time after the embarking of passenger stops is calculated as current tick + 1 minute in ticks
			}
		}
	}

	else //if the bus has completed its route we print a message then set the m_finished flag to true
	{
		tickTransform(tick);
		f << "Bus " << m_id << " has completed its course \n";
		m_finished = true;
	}

}

