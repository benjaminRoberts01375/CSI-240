#include "rectangle.h"
#include <iostream>

Rectangle::Rectangle(const std::string name, const std::string caption, double side1, double side2) : Shape{name, caption}, side1{side1}, side2{side2}
{
  std::cout << "Rectangle Constructor" << std::endl;
}
Rectangle::~Rectangle()
{
  std::cout << "Rectangle Destructor" << std::endl;
}
void Rectangle::draw() const
{
  std::cout << "Drawing a Rectangle" << std::endl;
}
double Rectangle::getArea() const
{
  return side1 * side2;
}
std::string Rectangle::toString() const
{
  return "Rectangle's call to toString";
}
