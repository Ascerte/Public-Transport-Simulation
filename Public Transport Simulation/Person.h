#include<iostream>
#include<string>
#pragma once

class Person
{
public:
	Person(std::string name);
	~Person();
	friend std::ostream& operator<<(std::ostream& out, Person pers)
	{
		//out<<
	}

private:
	std::string m_name;
};