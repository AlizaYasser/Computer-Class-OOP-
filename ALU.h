#pragma once
#include <iostream>
using namespace std;

class ALU {
	int	NoOfAdders;
	int	NoOfSubtractor;
	int	NoOfRegisters;
	int	sizeOfRegisters;

public:
	ALU()
	{
		NoOfAdders = NoOfSubtractor = NoOfRegisters = sizeOfRegisters = 0;
	}

	ALU(int Addersnum, int Subtractorsnum, int Registersnum, int Registerssize)
	{
		this->NoOfAdders = Addersnum;
		this->NoOfSubtractor = Subtractorsnum;
		this->NoOfRegisters = Registersnum;
		this->sizeOfRegisters = Registerssize;
	}

	int getNoOfAdders()
	{
		return NoOfAdders;
	}

	int getNoOfSubtractors()
	{
		return NoOfSubtractor;
	}

	int getNoOfRegisters()
	{
		return NoOfRegisters;
	}
	int getSizeOfAddress()
	{
		return sizeOfRegisters;
	}
	void setNoOfAdders(int NoOfAdders)
	{
		this->NoOfAdders = NoOfAdders;
	}
	void setNoOfSubtractors(int NoOfSubtractors)
	{
		this->NoOfSubtractor = NoOfSubtractors;
	}
	void setNoOfRegisters(int NoOfRegisters)
	{
		this->NoOfRegisters = NoOfRegisters;
	}
	void setSizeOfAddress(int SizeOfAddress) 
	{
		this->NoOfRegisters = SizeOfAddress;
	}
	void display()
	{
		cout << "ALU:  \n" << "Adders:  " << NoOfAdders << ", Subtractors:  " << NoOfSubtractor << ", Registers:  " << NoOfRegisters
			<< ", Size: " << sizeOfRegisters << " bits." << endl;
	}
};
