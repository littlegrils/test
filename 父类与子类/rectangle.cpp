#pragma once
#include"Rectangle.h"
#include"shape.h"
#include<iostream>
using namespace std;
Rectangle::Rectangle(){
	width = 1.0;
	hight = 2.0;
	cout << "Rectangle" << endl;

}
Rectangle::Rectangle(string color, double width, double hight) :shape(color){
	this->width = width;
	this->hight = hight;
	cout << "Rectangle" << endl;
}
double Rectangle::getWidth(){
	return width;
}
double Rectangle::getHight(){
	return hight;
}
double Rectangle::setWidth(double width){
	return width;
}
double Rectangle::setHight(double hight){
	return hight;
}
Rectangle::~Rectangle(){
	cout << "Rectangle" << endl;
}
void Rectangle::print(){
	shape::print();
	cout << "width=" << width << endl << "hight=" << hight << endl;
}
double Rectangle::getArea(){
	return width*hight;
}