#include "Point.h"


Point::Point(int x, int y, int z)
    : xPos(x), yPos(y), zPos(z) {}  // Correct placement of the initialization list
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
Point::~Point()
{

}
