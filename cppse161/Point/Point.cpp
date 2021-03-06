#include"Point.h"

//第2步：实现类的方法
//构造函数/方法
Point::Point(std::string name, float x, float y) {
	this->pName = name;//将参数name赋值给对象属性pName
	this->pX = x;//同理
	this->pY = y;//同理
}

//显示函数/方法
void Point::ShowPoint() {
	std::cout << pName << "  " << pX << "  " << pY <<"\n"<< std::endl;//在显示器上打印
}

//实现三个重载的构造函数：定义define
Point::Point(){}
Point::Point(std::string name) {
	this->pName = name;
}
Point::Point(Point & p) {
	this->pName = p.pName;
	this->pX = p.pX;
	this->pY = p.pY;
}