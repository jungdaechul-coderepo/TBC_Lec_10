#pragma once

#include<string>
#include<iostream>

class Teacher
{
private:
	std::string _name;

public:
	Teacher(const std::string & name_in="No name")
		:_name(name_in)
	{}

	void setName(const std::string& name_in)
	{
		_name = name_in;
	}

	std::string getName()
	{
		return _name;
	}

	friend std::ostream& operator <<(std::ostream& out, const Teacher& teacher)
	{
		out << teacher._name;
		return out;
	}
};