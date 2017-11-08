#pragma once
#include<vector>
#include<utility>
#include<initializer_list>
#include<iostream>

struct Stops
{
	int ID; //id of the node
	std::vector<std::pair<int, int>> vertices;  //we are using a vector of pairs to keep track of the destination node and the weight of the vertex

	Stops(int id, std::initializer_list<std::pair<int, int>> vert);
	void print();
	
};


class Serv_network
{
public:
	Serv_network();
	void printGraph();

private:
	std::vector<Stops> m_graph;
};
