#pragma once
#include <iostream>
using namespace std;
#include "CPU.h"
#include "Port.h"
#include "Computer.h"
#include "Case.h"
#include "PowerSupply.h"
#include "NetworkCard.h"
#include "StorageDevice.h"
#include "GraphicsCard.h"
#include "PCCPU.h"
#include "AppleSilicon.h"
#include "Battery.h"
#include "MainMemory.h"

class Computerassembly {
	double totalprice;
	string type;
	Computer cmp;
	Case cse;

public:
	Computerassembly()
	{
		totalprice = 0.0;
		type = "";
		cmp = Computer();
		cse = Case();
	}
	Computerassembly(double totalprice, string type, Computer cmp, Case cse)
	{
		this->totalprice = totalprice;
		this->type = type;
		cmp = Computer();
		cse = Case();
	}
	string gettype()
	{
		return type;
	}

	void settype(string type)
	{
		this->type = type;
	}
	double gettotalprice()
	{
		return totalprice;;
	}

	void settotalprice(double totalprice)
	{
		this->totalprice = totalprice;
	}

	int calculateprice(PowerSupply price, NetworkCard price1, StorageDevice price2)
	{
		int pr = 0;
		pr = price.getprice() + price1.getprice() + price2.getprice() + 1000;
		cout << "The total price would be: $" << pr << endl;
		return pr;
	}

	int calculateprice(PowerSupply price, NetworkCard price1, StorageDevice price2, GraphicsCard price3, Case price4)
	{
		int pr = 0;
		pr = price.getprice() + price1.getprice() + price2.getprice() + price3.getprice() + 400;
		cout << "The total price would be: $" << pr << endl;
		return pr;
	}

	void assemblecomputer()
	{
		PCCPU archi;	//Architecture
		AppleSilicon as;

		int Adders;	//ALU
		int Subtractors;
		int Registers;
		int Size;

		ControlUnit clock;	//ControlUnit
		MainMemory mm;	//MainMemory
		PhysicalMemory pm;	//PhysicalMemory
		StorageDevice sd;	//StorageDevice
		NetworkCard networkcd;	//networkCard
		GraphicsCard gd;	//Graphic Card
		PowerSupply pwrs;	//Power Supply
		Battery battery;	//Battery
		Case cse;	//Case

		//MotherBoard
		Port po;
		int br;//baud rate
		string poname;
		int count = 0;



		cout << "                         ____________________ " << endl;
		cout << "                        |                    |" << endl;
		cout << "                        |      WELCOME       |" << endl;
		cout << "                        |____________________|" << endl;
		int choice = 0;
		cout << "Please select what you would like to buy:\n1.PC\n2.Mac\n";
		while (choice != 1 && choice != 2) {
			cin >> choice;
			if (choice != 1 && choice != 2) {
				cout << "Please choose correctly\n1.PC\n2.Mac\n" << endl;
			}
		}
		if (choice == 1) {
			cout << "Select the architecture:\n1.AMD\n2.x86\n";
			cin >> archi;
		}
		else if (choice == 2) {
			as.setarchitecture("AppleSilicon");
		}
		cout << "Enter the No. of Adders,Subtractors,Registers and the size of registers:\n";
		cin >> Adders >> Subtractors >> Registers >> Size;

		ALU alu(Adders, Subtractors, Registers, Size);

		cout << "Enter your desired clock rate(Range:3.0-4.0):\n";
		cin >> clock;

		cout << "Enter the capacity of main memory:\n1.4 Gb\n2.8 Gb\n1.12 Gb\n2.16 Gb\n";
		cin >> mm;

		pm.setCapacity(16);

		cout << "Enter the Storage device type:\n1.HDD\n2.SSD\n";
		cin >> sd;

		cout << "Enter the type of Network Card:\n1.Ethernet\n2.Wifi\n";
		cin >> networkcd;

		if (choice == 1) {
			cout << "Enter the brand of Graphic Card:\n1.Amd\n2.Nvidia\n";
			cin >> gd;
		}

		cout << "Enter the number of ports(1-4):";
		cin >> count;
		while (count > 4) {
			cin >> count;
			if (count > 4) {
				cout << "Please choose correctly-The range is 1-4:\n";
			}
		}
		Port ports[3];

		for (int i = 0; i < count; i++) {
			cout << "Port [" << i + 1 << "]\n";
			cout << "Enter port type (IO, VGI, USB, HDMI): ";
			do {
				cin >> poname;
				if (poname != "IO" && poname != "VGI" && poname != "USB" && poname != "HDMI") {
					cout << "Please choose correctly (IO, VGI, USB, HDMI): ";
				}
			} while (poname != "IO" && poname != "VGI" && poname != "USB" && poname != "HDMI");

			cout << "Enter baud rate: ";
			cin >> br;
			ports[i].setBaudRate(br);
			ports[i].settype(poname);
		}


		cout << "Choose wattage for power supply:\n1.450 watt\n2.650 watt\n3.850 watt\n";
		cin >> pwrs;
		int num = 0;
		if (choice == 1) {
			cout << "Choose Case form factor(Enter 1-3):\n1.ATX\n2.Micro-ATX\n3.Mini-ITX\n";
			cin >> num;
			while (num != 1 && num != 2 && num != 3) {
				cin >> num;
				if (num != 1 && num != 2 && num != 3) {
					cout << "Please choose correctly:  Range(1-3)\n";
				}
			}
			if (num == 1) {
				cse.setformfactor("ATX");
			}
			else if (num == 2) {
				cse.setformfactor("Micro-ATX");
			}
			else if (num == 3) {
				cse.setformfactor("Mini-ITX");
			}
		}

		cout << "		 ___________________________________________________________________" << endl;
		cout << "		|Here are your chosen specifications.Please confirm before checkout.|" << endl;
		cout << "		|___________________________________________________________________|" << endl;

		if (choice == 1) {
			cout << "PC\n";
			archi.display();
		}
		else if (choice == 2) {
			cout << "MAC\n";
			as.display();
		}
		alu.display();
		clock.display();
		mm.display();
		pm.display();
		sd.display();
		networkcd.display();
		gd.display();
		pwrs.display();
		battery.display();
		for (int i = 0; i < count; i++) {
			cout << "Port [" << i + 1 << "]" << endl;
			ports[i].display();
		}
		if (choice == 1) {
			cse.display();
		}
		if (choice == 1) {
			calculateprice(pwrs, networkcd, sd, gd, cse);
		}
		else if (choice == 2) {
			calculateprice(pwrs, networkcd, sd);
		}
		cout << "		 ____________________________" << endl;
		cout << "		| Thankyou for shopping here |" << endl;
		cout << "		|____________________________|" << endl;

	}

};