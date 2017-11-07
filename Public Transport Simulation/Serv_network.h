#pragma once

class Serv_network
{
	
public:
	Serv_network(int stops);
	~Serv_network();
	int& operator()(const int &index1, const int &index2);
	void makeGraph();
	void printGraph();
	friend class Bus;

protected:
	int m_stops = 0;
	int m_graph[10][10] = { 0 };
};
