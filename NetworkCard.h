#pragma once
#include <iostream>
using namespace std;

class NetworkCard {
	string type;
	int speed;
	double price;
public:
	NetworkCard()
	{
		type = "";
		speed = 0;
		price = 0;
	}

	NetworkCard(string type, int speed, double price)
	{
		this->type = type;
		this->speed = speed;
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

	int getspeed()
	{
		return speed;
	}
	void setspeed(int speed)
	{
		this->speed = speed;
	}
	double getprice()
	{
		price = 300;
		return price;
	}

	void setprice(double price)
	{
		this->price = price;
	}

	void display()
	{
		cout << "NetworkCard: Type-" << type << " ,Speed: " << speed << " Mbps\n";
	}
	friend istream& operator>>(istream& in, NetworkCard& other);
};

istream& operator>>(istream& in, NetworkCard& other)
{
	while (other.type != "Ethernet" && other.type != "Wifi") {
		in >> other.type;
		if (other.type != "Ethernet" && other.type != "Wifi") {
			cout << "Please choose correctly:\n1.Ethernet\n2.Wifi\n";
		}
	}
	if (other.type == "Ethernet") {
		cout << "Choose the speed:\n1. 100 MBbps\n2. 1000 Mbps\n3.10,000 Mbps\n";
		while (other.speed != 100 && other.speed != 1000 && other.speed != 10000) {
			in >> other.speed;
			if (other.speed != 100 && other.speed != 1000 && other.speed != 10000) {
				cout << "Please choose correctly:\n1. 100 MBbps\n2. 1000 Mbps\n3.10,000 Mbps\n";
			}
		}
	}
	else if (other.type == "Wifi") {
		cout << "Choose the speed:\n1.54 MBbps\n2.600 Mbps\n3.1,300 Mbps\n";
		while (other.speed != 54 && other.speed != 600 && other.speed != 1300) {
			in >> other.speed;
			if (other.speed != 54 && other.speed != 600 && other.speed != 1300) {
				cout << "Please choose correctly:\n1.54 MBbps\n2.600 Mbps\n3.1,300 Mbps\n";
			}
		}
	}
	return  in;
}
