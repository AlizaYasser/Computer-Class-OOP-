#pragma once
#include <iostream>
#include "MainMemory.h"
#include "Port.h"
using namespace std;


class MotherBoard {
	MainMemory mm;
	Port* ports;
	int count;
public:
	MotherBoard()
	{
		mm = MainMemory();
		ports = nullptr;
		count = 0;
	}
	MotherBoard(MainMemory mm, Port* portarr, int count)
	{
		this->mm = mm;
		this->count = count;
		ports = nullptr;
	}

	Port* getPorts()
	{
		return ports;
	}
	Port getPort(int pos)
	{
		return ports[pos];
	}
	MainMemory getmainmemory()
	{
		return mm;
	}
	void setMainMemory(MainMemory mm)
	{
		this->mm = mm;
	}
	int getcount()
	{
		return count;
	}
	void setcount(int count)
	{
		this->count = count;
	}
};