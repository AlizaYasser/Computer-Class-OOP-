#pragma once
#include <iostream>
using namespace std;

class GraphicsCard {
	string brand;
	int memorysize;
	double price;

public:
	GraphicsCard()
	{
		brand = "";
		memorysize = 0;
		price = 0.0;
	}
	GraphicsCard(string band, int memorysize, double price)
	{
		this->brand = brand;
		this->memorysize = memorysize;
		this->price = price;
	}

	string getbrand()
	{
		return brand;
	}
	void setbrand(string brand)
	{
		this->brand = brand;
	}
	int getmemorysize()
	{
		return memorysize;
	}
	void setmemorysize(int memorysize)
	{
		this->memorysize = memorysize;
	}
	double getprice()
	{
		if (brand == "Amd") {
			price = 200;
		}
		else
			price = 250;
		return price;
	}
	void setprice(double price)
	{
		this->price = price;
	}
	void display()
	{
		cout << "Graphic Card:  Brand: " << brand << " ,Memory Size: " << memorysize << " Gb" << endl;
	}

	friend istream& operator>>(istream& in, GraphicsCard& other);
};

istream& operator>>(istream& in, GraphicsCard& other)
{
	while (other.brand != "Amd" && other.brand != "Nvidia") {
		in >> other.brand;
		if (other.brand != "Amd" && other.brand != "Nvidia") {
			cout << "Please choose correctly:\n1.Amd\n2.Nvidia\n";
		}
	}
	cout << "Choose memory size:\n1.2 Gb\n2.4 Gb\n";
	while (other.memorysize != 2 && other.memorysize != 4) {
		in >> other.memorysize;
		if (other.memorysize != 2 && other.memorysize != 4) {
			cout << "Please choose correctly:\n1.2 Gb\n2.4 Gb\n";
		}
	}
	return in;
}