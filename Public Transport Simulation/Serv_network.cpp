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

/*int& Serv_network::operator()(const int &index1, const int &index2)
{
	return m_graph[index1][index2];
}*/

void Serv_network::makeGraph()
{
	std::vector<std::pair<int, int>> arcs;
	
	for (int i = 0; i < m_stops; i++)
		for (int j = 0; j < m_stops; j++)
			arcs.push_back(std::make_pair(i, j));

	std::vector<std::pair<int, int>>::iterator it = arcs.begin();

	std::random_shuffle(arcs.begin(), arcs.end());
	//test
	int arcno(getRandom(4, 15));

	int index = 0;
	for (it = arcs.begin(); index < arcno; it++, index++)
		m_graph[(it->first)][(it->second)] = getRandom(0, 10);
		
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