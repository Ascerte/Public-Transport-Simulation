#include "Serv_network.h"
#include"functions.h"
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

Serv_network::Serv_network(int stops)
	: m_stops(stops)
{
	makeGraph();
}

Serv_network::~Serv_network()
{
}

int& Serv_network::operator()(const int &index1, const int &index2)
{
	return m_graph[index1][index2];
}

void Serv_network::printGraph()
{
	for (int i = 0; i < m_stops; i++)
	{
		for (int j = 0; j < m_stops; j++)
			std::cout << m_graph[i][j] << " ";
		std::cout << "\n";
	}
}
