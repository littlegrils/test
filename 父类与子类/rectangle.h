#pragma once
#include "shape.h"
class Rectangle :public shape{
private:
	double width, hight;
public:
	Rectangle();
	Rectangle(string color, double width, double hight);
	~Rectangle();
	double getWidth();
	double setWidth(double width);
	double getHight();
	double setHight(double hight);
	double getArea();
	void print();
};