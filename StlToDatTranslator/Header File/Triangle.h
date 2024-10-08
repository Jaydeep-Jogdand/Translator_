#pragma once
#include "Point.h"

class Triangle {
public:
    Point vertex1, vertex2, vertex3;


    Triangle(Point vertex1, Point vertex2, Point vertex3);
    ~Triangle();
};
