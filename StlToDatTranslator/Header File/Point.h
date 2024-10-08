#pragma once

class Point {
    int xPos, yPos, zPos;
public:
    // double xPos, yPos, zPos;
    // Point(double x, double y, double z);

   // int xPos, yPos, zPos;
    Point(int x, int y, int z);
    int getX() const;
    int getY() const;
    int getZ() const;
    ~Point();
};
