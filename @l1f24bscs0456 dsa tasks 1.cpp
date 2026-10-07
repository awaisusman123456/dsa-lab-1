//#ifIndef SHAPE_H
//#define SHAPE_H
//class shape
//{
//	virtual double area const() = 0;
//	virtual ~shape(); {}
//};
//// circle.h
//#ifIndef CIRCLE_H
//#define CIRCLE_H
//#include "shape.h"
//class circle :public shape
//{
//private:
//	double radius;
//public:
//	circle(double r)
//	{
//		radius = r;
//	}
//	double area()constant override
//	{
//		return 3.14*radius*radius;
//	}
//};
//#endif
//// rectangle.h
//#ifIndef RECTANGLE_H
//#define RECTANGLE_H
//#include "shape.h"
//class rectangle :public shape
//{
//private:
//	double length;
//	double width;
//public:
//	rectangle(double l, double w)
//	{
//		length = l;
//		width = w;
//	}
//	double area const() override
//	{
//		return length*width;
//	}
//};
//#endif
//// main function
//#include<iostream>
//#include"circle.h"
//#include"rectangle.h"
//using namespace std;
//int main(){
//	circle circle(5);
//	rectangle rectangle(10.4);
//	cout << "area of a circle:" << circle.area() << endl;
//	cout << "rectangle of a circle:" << rectangle.area() << endl;
//	return 0;
//}
//task 02:-
#ifIndef EMPLOYEE_H
#define EMPLOYEE_H
class employee
{
public:
	virtual double calculate salary()const = 0;
	virtual ~employee(){}
};
#endif
// full time employee.h
#ifIndef FULL TIME EMPLOYEE_H
#define FULL TIME EMPLOYEE_H
#include"employee.h"
class full time employee : public employee
{
private:
	double fixed salary;
public:
	fulltimeemployee()
}

