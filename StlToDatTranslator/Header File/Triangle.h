#pragma once
#include "Point.h"

class Triangle {
private:
    Point vertex1;
    Point vertex2;
    Point vertex3;

public:
    Triangle(Point vertex1, Point vertex2, Point vertex3);

    Point getVertex1() const;
    Point getVertex2() const;
    Point getVertex3() const;

    ~Triangle();
};
