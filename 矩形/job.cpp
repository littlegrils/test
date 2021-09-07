#include<iostream>
#include"Rectangle.h"
using namespace std;
int Rectangle::count = 0;
Rectangle::Rectangle(double width, double hight){
	this->width = width;
	this->hight = hight;
	count++;
}
Rectangle::~Rectangle(){
	count--;
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
double Rectangle::getPerimeter(){
	return (width + hight) * 2;
}
double Rectangle::getArea(){
	return width*hight;
}
int Rectangle::getCount(){
	return count;
}
void Rectangle::display(){
	cout << "�ߣ�" << getWidth() << "��:" << getHight() << endl;
	cout << "�ܳ�:" << getPerimeter() << endl;
	cout << "���:" << getArea() << endl;
	cout << "���ζ������:" << getCount() << endl;
}