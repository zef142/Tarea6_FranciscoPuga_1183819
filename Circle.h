#pragma once
#include "FiguraGeometrica.h"
class Circle :
    public FiguraGeometrica
{
public:
    Circle() {};
    ~Circle() {};
    double GetArea() override;
    double GetPerimeter() override;
};

