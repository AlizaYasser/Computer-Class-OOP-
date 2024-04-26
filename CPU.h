#pragma once
#include <iostream>
using namespace std;
#include "ALU.h"
#include "ControlUnit.h"

class CPU {
protected:
	ALU alu;
	ControlUnit cu;

public:
	CPU()
	{
		alu = ALU();
		cu = ControlUnit();
	}
	CPU(ALU alu, ControlUnit cu)
	{
		this->alu = alu;
		this->cu = cu;
	}
	ALU getALU()
	{
		return alu;
	}

	ControlUnit getControlUnit()
	{
		return cu;
	}
	void setALU(ALU alu)
	{
		this->alu = alu;
	}
	void setControlUnit(ControlUnit cu)
	{
		this->cu = cu;
	}
};