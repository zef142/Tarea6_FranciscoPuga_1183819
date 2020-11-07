#include "Circle.h"

double Circle::GetArea() {
	return 3.14159 * (width / 2) * (width / 2);
}

double Circle::GetPerimeter() {
	return 3.14159 * 2 * (width / 2);
}