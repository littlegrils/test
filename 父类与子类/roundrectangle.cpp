#include<iostream>
#include"RoundRectangle.h"

#include"shape.h"
#include"Rectangle.h"
const double pi = 3.14;
using namespace std;
RoundRectangle::RoundRectangle(){
	roundRadius = 1.0;
	cout << "R" << endl;
}
RoundRectangle::RoundRectangle(string color, double width, double hight, double roundRadius) :Rectangle(color, width, hight){
	this->roundRadius = roundRadius;
	cout << "R()" << endl;

}
RoundRectangle::~RoundRectangle(){
	cout << "~R" << endl;
}
double RoundRectangle::getArea(){
	return (Rectangle::getArea() + 4 * pow(roundRadius, 2) + 2 * pi*pow(roundRadius, 2));
}
void RoundRectangle::print(){
	shape::print();
	Rectangle::print();
	cout << "S=" << getArea() << endl;
}
