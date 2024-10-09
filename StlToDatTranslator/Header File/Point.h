#pragma once

class Point {
private:

    int xPos, yPos, zPos;
public:
    Point(int x, int y, int z);
    int getX() const;
    int getY() const;
    int getZ() const;
    ~Point();
};
