#pragma once
#include"shape.h"
class Cricle :public shape{
private:
	float radius;
public:
	Cricle();
	Cricle(string color, float radius);
	~Cricle();
	float getRadius();
	void setRadius(float radius);
	double getArea();
	void print();
};