#pragma once
#include <iostream>
using namespace std;


class Port {
public:
	string type;//VGI Port,I/O Port,USB Port,HDMI Port
	int baud_rate;
public:
	Port() 
	{
		type = "";
		baud_rate = 0;
	}

	Port(string type, int baud_rate)
	{
		this->type = type;
		this->baud_rate = baud_rate;
	}

	string getType()
	{
		return type;
	}
	void settype(string type)
	{
		this->type = type;
	}
	int getBaudRate()
	{
		return baud_rate;
	}
	void setBaudRate(int baud_rate)
	{
		this->baud_rate = baud_rate;
	}
	void display()
	{
		cout << "Type: " << type << ", Baud Rate: " << baud_rate << endl;
	}
};