#pragma once
#include <iostream>
using namespace std;

class Case {
	string formfactor;//ATX, MicroATX
	string color;
public:
	Case()
	{
		formfactor = "";
		color = "";
	}

	Case(string formfactor, string color)
	{
		this->formfactor = formfactor;
		this->color = color;
	}
	string getformfactor()
	{
		return formfactor;
	}
	void setformfactor(string formfactor)
	{
		this->formfactor = formfactor;
	}

	string getcolor()
	{
		return color;
	}
	void setcolor(string color)
	{
		this->color = color;
	}

	void display()
	{
		cout << "Case : FormFactor: " << formfactor << " ,Color: Black" << endl;
	}
};