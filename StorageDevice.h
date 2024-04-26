#pragma once
#include <iostream>
#include "PhysicalMemory.h"
using namespace std;


class StorageDevice :public PhysicalMemory {
	string type;
	int capacity;
	double price;
public:
	StorageDevice()
	{
		type = "";
		capacity = 0;
		price = 0;
	}
	StorageDevice(string type, int capacity, double price)
	{
		this->type = type;
		this->capacity = capacity;
		this->price = price;
	}
	string gettype()
	{
		return type;
	}

	void settype(string type)
	{
		this->type = type;
	}
	double getprice()
	{
		price = 350;
		return price;
	}
	void getprice(double price)
	{
		this->price = price;
	}
	int getcapacity()
	{
		return capacity;
	}
	void getcapacity(int capacity)
	{
		this->capacity = capacity;
	}
	void display()
	{
		cout << "Storage device:  " << type;
		cout << ",  Capacity of " << type << " : ";
		if (type == "HDD") {
			cout << capacity << " Gb" << endl;
		}
		else if (type == "SDD") {
			cout << capacity << " Tb" << endl;
		}
	}
	friend istream& operator>>(istream& in, StorageDevice& other);
};

istream& operator>>(istream& in, StorageDevice& other)
{
	while (other.type != "HDD" && other.type != "SSD") {
		in >> other.type;
		if (other.type != "HDD" && other.type != "SSD") {
			cout << "Please choose correctly:\n1.HDD\n2.SSD\n";
		}
	}

	if (other.type == "HDD") {
		cout << "Enter the capacity of HDD(in GigaBytes):\n1.128 Gb\n2.256 Gb\n3.512 Gb\n4.2000 Gb\n";
		while (other.capacity != 128 && other.capacity != 256 && other.capacity != 512 && other.capacity != 2000) {
			in >> other.capacity;
			if (other.capacity != 128 && other.capacity != 256 && other.capacity != 512 && other.capacity != 2000) {
				cout << "Please choose correctly:\n1.128 Gb\n2.256 Gb\n3.512 Gb\n4.2000 Gb\n";
			}
		}
	}
	else if (other.type == "SDD") {
		cout << "Enter the capacity of SSD(in TeraBytes):\n1.1 Tb\n2.2 Tb\n3.4 Tb\n4.8 Tb\n";
		while (other.capacity != 4 && other.capacity != 8 && other.capacity != 2 && other.capacity != 1) {
			in >> other.capacity;
			if (other.capacity != 4 && other.capacity != 8 && other.capacity != 2 && other.capacity != 1) {
				cout << "Please choose correctly:\n1.1 Tb\n2.2 Tb\n3.4 Tb\n4.8 Tb\n";
			}
		}
	}
	return in;
}