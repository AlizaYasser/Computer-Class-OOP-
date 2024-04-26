#pragma once
#include <iostream>
using namespace std;
#include "CPU.h"

class PCCPU : public CPU {
	string architecture;
public:
	PCCPU()
	{
		architecture = "";
	}

	PCCPU(string architecture)
	{
		this->architecture = architecture;
	}
	string getarchitecture()
	{
		return architecture;
	}

	void setarchitecture(string architecture)
	{
		this->architecture = architecture;
	}
	friend istream& operator>>(istream& in, PCCPU& archi);
	void display()
	{
		cout << "Architecture:  " << architecture << endl;
	}
};

istream& operator>>(istream& in, PCCPU& archi)
{
	while (archi.architecture != "AMD" && archi.architecture != "x86") {
		in >> archi.architecture;
		if (archi.architecture != "AMD" && archi.architecture != "x86") {
			cout << "Please choose correctly:\n1.AMD\n2.x86\n" << endl;
		}
	}
	return in;
}