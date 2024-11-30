#pragma once

class Point {
private:
    int xPos;
    int yPos; 
    int zPos;

public:
    Point(int x, int y, int z);
    ~Point();

    int getX() const;
    int getY() const;
    int getZ() const;
};
