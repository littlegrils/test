#pragma once
#include<iostream>
using namespace std;
class shape
{
public:
	shape();
	shape(string color);
	~shape();
	double getArea();
	string getColor();
	void setColor(string color);
	void print();
private:
	string color;
};

