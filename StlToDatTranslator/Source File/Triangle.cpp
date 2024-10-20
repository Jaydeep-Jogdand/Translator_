
#include "Triangle.h"

Triangle::Triangle(Point vertex1, Point vertex2, Point vertex3)
    : vertex1(vertex1), vertex2(vertex2), vertex3(vertex3) {}

Point Triangle::getVertex1() const {
    return vertex1;
}

Point Triangle::getVertex2() const {
    return vertex2;
}

Point Triangle::getVertex3() const {
    return vertex3;
}

Triangle::~Triangle() {}
