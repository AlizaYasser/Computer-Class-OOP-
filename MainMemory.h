#pragma once
#include <iostream>
#include "PhysicalMemory.h"
using namespace std;

class MainMemory : public PhysicalMemory {
	string technologytype;
public:
	MainMemory()
	{
		technologytype = "";
	}
	MainMemory(string technologytype)
	{
		this->technologytype = technologytype;
	}
	MainMemory(int capacity, string technologytype)
	{
		PhysicalMemory();
		this->technologytype = technologytype;
	}
	string gettechnologyType()
	{
		return technologytype;
	}
	void settechnologyType(string technologyType)
	{
		this->technologytype = technologytype;
	}

	void display()
	{
		cout << "Main memory\n";
		cout << "Technology Type:  " << technologytype << endl;
		cout << "Capacity:  " << capacity << " Gb\n";
	}

	friend istream& operator>>(istream& in, MainMemory& other);
};

istream& operator>>(istream& in, MainMemory& other)
{
	while (other.capacity != 4 && other.capacity != 8 && other.capacity != 12 && other.capacity != 16) {
		in >> other.capacity;
		if (other.capacity != 4 && other.capacity != 8 && other.capacity != 12 && other.capacity != 16) {
			cout << "Please choose correctly:\n1.4 Gb\n2.8 Gb\n3.12 Gb\n4.16 Gb\n";
		}
	}
	cout << "Enter technology type:\n1.Semiconductor\n2.Silicon\n";
	while (other.technologytype != "Semiconductor" && other.technologytype != "Silicon") {
		in >> other.technologytype;
		if (other.technologytype != "Semiconductor" && other.technologytype != "Silicon") {
			cout << "Please choose correctly:\n1.Semiconductor\n2.Silicon\n";
		}
	}
	return in;
}