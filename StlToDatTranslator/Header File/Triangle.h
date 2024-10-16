#pragma once
#include "Point.h"

class Triangle {
private:  // Make Point objects private
    Point vertex1, vertex2, vertex3;

public:
    Triangle(Point vertex1, Point vertex2, Point vertex3);

    // Add getter methods for private members
    Point getVertex1() const;
    Point getVertex2() const;
    Point getVertex3() const;

    ~Triangle();
};



