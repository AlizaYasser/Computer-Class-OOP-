#pragma once
#include <iostream>
#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "CPU.h"
using namespace std;

class Computer
{
	PhysicalMemory pm;
	MotherBoard mb;
	CPU cpu;
public:
	Computer()
	{
		pm = PhysicalMemory();
		mb = MotherBoard();
		cpu = CPU();
	}
	Computer(PhysicalMemory pm, MotherBoard mb, CPU cpu)
	{
		this->pm = pm;
		this->mb = mb;
		this->cpu = cpu;
	}
	PhysicalMemory getPhysicalMemory()
	{
		return pm;
	}
	MotherBoard getMotherBoard()
	{
		return mb;
	}
	CPU getCPU()
	{
		return cpu;
	}
	//void setPhysicalMemory(PhysicalMemory pm);
	//void setMotherBoard(MotherBoard mb);
	//void setCPU(CPU cpu);
};