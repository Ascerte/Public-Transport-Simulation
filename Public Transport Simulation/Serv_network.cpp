#include "Serv_network.h"
#include"functions.h"
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>

Stops::Stops(int id, std::initializer_list<std::pair<int, int>> vert) //ctor takes as parameter the node's ID and an initializer_list of pairs for the vector
	:ID(id), vertices(vert)
{

}

void Stops::print()
{
	std::cout << "Node " << ID; //prints the node ID
	for (std::vector<std::pair<int, int>>::iterator it = vertices.begin(); it != vertices.end(); it++)
	{

		std::cout << "-> " << it->first << " with the weight of " << it->second << "\n "; // iterates through the vector and prints the first and the second element of the pair

	}
}

int Stops::returnWeight(int node)
{
	for (std::vector<std::pair<int, int>>::iterator it = vertices.begin(); it != vertices.end(); it++)
	{
		if (it->first == node)
			return it -> second;
	}
}

Serv_network::Serv_network()
{
	m_graph.push_back(Stops(0, { {1, 3}, {5,4} })); //initialize 6 nodes using the constructor
	m_graph.push_back(Stops(1, { {0, 3}, {2,5} }));
	m_graph.push_back(Stops(2, { {3,2} }));
	m_graph.push_back(Stops(3, { {4,2}, {5,2} }));
	m_graph.push_back(Stops(4, { {1,1}, }));
	m_graph.push_back(Stops(5, { {0,4}, {3,2}, {4,4} }));
}

void Serv_network::printGraph()
{
	for (std::vector<Stops>::iterator it = m_graph.begin(); it != m_graph.end(); it++) //iterate through the vector and call the print function of each node
	{
		it->print();
		std::cout << "\n";
	}
}

int Serv_network::getWeight(int currNode, int adjNode)
{
	return m_graph[0].returnWeight(adjNode);
	
}
