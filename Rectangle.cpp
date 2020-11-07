#include "Rectangle.h"

double Rectangle::GetArea() {
	return width * height;
}

double Rectangle::GetPerimeter() {
	return 2 * (height + width);
}