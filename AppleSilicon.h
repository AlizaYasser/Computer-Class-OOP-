#pragma once
#include <iostream>
#include "CPU.h";
#include "GraphicsCard.h"
using namespace std;

class AppleSilicon : public CPU {
	string architecture;
	GraphicsCard gpu;

public:
	AppleSilicon()
	{
		architecture = "";
		gpu = GraphicsCard();
	}
	AppleSilicon(string architecture, GraphicsCard gpu)
	{
		this->architecture = architecture;
		this->gpu = gpu;
	}
	string getarchitecture()
	{
		return architecture;
	}
	void setarchitecture(string architecture)
	{
		this->architecture = architecture;
	}

	GraphicsCard getgpu()
	{
		return gpu;
	}
	void setgpu(GraphicsCard gpu)
	{
		this->gpu = gpu;
	}
	void display()
	{
		cout << "Architecture:" << architecture << endl;
	}

};