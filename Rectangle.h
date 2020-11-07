#pragma once
#include "FiguraGeometrica.h"
class Rectangle :
    public FiguraGeometrica
{
public:
    Rectangle() {};
    ~Rectangle() {};

    double GetArea() override;
    double GetPerimeter() override;
};

