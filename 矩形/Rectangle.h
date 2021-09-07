class Rectangle{
private:
	double width, hight;
	static int count;
public:
	Rectangle(double width = 1.0, double hight = 1.0);
	~Rectangle();
	static int getCount();
	double getWidth();
	double getHight();
	double setWidth(double width);
	double setHight(double hight);
	double getPerimeter();
	double getArea();
	void display();
};