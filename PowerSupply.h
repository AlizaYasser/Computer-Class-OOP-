#pragma once
#include <iostream>
using namespace std;


class PowerSupply {
	int wattage;
	string efficiencyrating;
	double price;
public:
	PowerSupply()
	{
		wattage = 0;
		efficiencyrating = "";
		price = 0.0;
	}
	PowerSupply(int wattage, string efficiencyrating, double price)
	{
		this->wattage = wattage;
		this->efficiencyrating = efficiencyrating;
		this->price = price;
	}

	int getwattage()
	{
		return wattage;
	}
	void setwattage(int wattage)
	{
		this->wattage = wattage;
	}

	string getefficiencyrating()
	{
		return efficiencyrating;
	}
	void setefficiencyrating(string efficiencyrating)
	{
		this->efficiencyrating = efficiencyrating;
	}

	double getprice()
	{
		price = 340;
		return price;
	}

	void setprice(double price)
	{
		this->price = price;
	}
	void display()
	{
		cout << "Power Supply:  Wattage: " << wattage << " watt ,Efficiency Rating: " << efficiencyrating << endl;
	}
	friend istream& operator>>(istream& in, PowerSupply& other);
};


istream& operator>>(istream& in, PowerSupply& other)
{
	while (other.wattage != 450 && other.wattage != 650 && other.wattage != 850) {
		in >> other.wattage;
		if (other.wattage != 450 && other.wattage != 650 && other.wattage != 850) {
			cout << "Please choose correctly:\n1.450 watt\n2.650 watt\n3.850 watt\n";
		}
	}
	int choice = 0;
	cout << "Choose Efficiency rating(Only enter 1 or 2):\n1. 80 Plus Bronze\n2. 80 Plus Gold\n";
	cin >> choice;
	while (choice != 1 && choice != 2) {
		cin >> choice;
		if (choice != 1 && choice != 2) {
			cout << "Please choose correctly\n1. 80 Plus Bronze\n2. 80 Plus Gold\n" << endl;
		}
	}
	if (choice == 1) {
		other.efficiencyrating = "80 Plus Bronze";
	}
	else if (choice == 2) {
		other.efficiencyrating = "80 Plus Gold";
	}
	return in;
}
