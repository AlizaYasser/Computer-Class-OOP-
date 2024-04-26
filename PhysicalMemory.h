#pragma once
#include <iostream>
using namespace std;


class PhysicalMemory {
protected:
	int capacity;
public:
	PhysicalMemory()
	{
		capacity = 0;
	}

	PhysicalMemory(int capacity)
	{
		this->capacity = capacity;
	}
	int getCapacity()
	{
		return capacity;
	}

	void setCapacity(int capacity)
	{
		this->capacity = capacity;
	}
	void display()
	{
		cout << "Physica1 Memory Capacity:  " << capacity << " Gb" << endl;
	}
};
