#pragma once
#include <iostream>
using namespace std;


class ControlUnit {
	float clock;

public:
	ControlUnit()
	{
		clock = 0.0;
	}
	ControlUnit(float clock)
	{
		this->clock = clock;
	}
	float getClock()
	{
		return clock;
	}

	void setClock(float clock)
	{
		this->clock = clock;
	}
	void display()
	{
		cout << "Control Unit  Clock rate:" << clock << " GHz\n";
	}
	friend istream& operator>>(istream& in, ControlUnit& other);
};

istream& operator>>(istream& in, ControlUnit& other)
{
	while (other.clock < 3 || other.clock > 4) {
		in >> other.clock;
		if (other.clock < 3 || other.clock > 4) {
			cout << "Please choose correctly:\nRange(3.0-4.0)\n";
		}
	}
	return in;
}