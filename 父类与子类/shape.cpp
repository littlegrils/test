#include"shape.h"
#include<iostream>
#include<string>
using namespace std;
shape::shape(string color){
	this->color = color;
	cout << "shape" << endl;
}

shape::~shape()
{
	cout << "~shape" << endl;
}
shape::shape()
{
	color = "red";
	cout << "shape" << endl;
}
string shape::getColor(){
	return color;
}
void shape::setColor(string color){
	this->color = color;
}
double shape::getArea(){
	return 0;
}
void shape::print(){
	cout << "color=" << getColor() << endl << "area=" << getArea() << endl;
}