#pragma once
#include "Reader.h"
#include <vector>
#include "Point.h"
#include "Triangulation.h"

class STLReader : public Reader {
private:
    std::vector<Point> pointList;

    // Adds or retrieves index of the unique coordinate
    int getOrAddUniqueCoordinate(double value, Triangulation& triangulation);

    // Creates a triangle from three points and inserts it into the Triangulation
    void buildAndInsertTriangle(Point& p1, Point& p2, Point& p3, Triangulation& triangulation);

public:
    STLReader();
    ~STLReader();

    // Reads the STL file and processes the content
    void read(const std::string& inputFile, Triangulation& triangulation) override;
};
