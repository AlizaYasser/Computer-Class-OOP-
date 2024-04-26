#pragma once
#include <iostream>
using namespace std;

class Battery {
	int capacity;
public:
	Battery()
	{
		capacity = 0;
	}
	Battery(int capacity)
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
		cout << "Battery capacity: 5000 mAh\n";
	}
};
