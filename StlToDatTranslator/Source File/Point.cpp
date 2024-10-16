#include "Point.h"
Point::Point(int x, int y, int z)
    : xPos(x), yPos(y), zPos(z) {}
Point::~Point(){}
int Point::getX()  const {
    return xPos;
}

int Point::getY() const
{
    return yPos;
}

int Point::getZ()const{
    return zPos;
}




