#pragma once
#include "FiguraGeometrica.h"
class Triangle :
    public FiguraGeometrica
{
public:
    Triangle() {};
    ~Triangle() {};
    double GetArea() override;
    double GetPerimeter() override;
};

