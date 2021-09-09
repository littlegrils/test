#include"Rectangle.h"
class RoundRectangle :public Rectangle{
private:
	double roundRadius;
public:
	RoundRectangle();
	RoundRectangle(string color, double width, double hight, double roundRadius);
	double getRoundRectangle();
	double setRoundRectangle(double roundRadius);
	~RoundRectangle();
	double getArea();
	void print();

};