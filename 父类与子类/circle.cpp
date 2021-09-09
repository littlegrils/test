#include"Cricle.h"
#include"shape.h"
const double p = 3.14;
Cricle::Cricle(){
	radius = 1.0;
	cout << "radius" << endl;
}
Cricle::Cricle(string color, float radius) :shape(color){
	this->radius = radius;
	cout << "radius()" << endl;

}
Cricle::~Cricle(){
	cout << "~Cirle" << endl;
}
float Cricle::getRadius(){
	return radius;
}
void Cricle::setRadius(float redius){
	this->radius = radius;
}
double Cricle::getArea(){
	return radius*radius*p;
}
void Cricle::print(){
	shape::print();
	cout << endl;
	cout << "redius=" << radius << endl;
}