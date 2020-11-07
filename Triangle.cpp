#include "Triangle.h"
double Triangle ::GetArea() {
	return (height * width) / 2;
}

double Triangle::GetPerimeter() {
	return (System::Math::Sqrt((System::Math::Pow(height, 2)) + (System::Math::Pow(width, 2)))) + height + width;
}