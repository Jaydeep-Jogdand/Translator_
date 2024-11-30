#pragma once
#include <map>
#include <vector>
#include "Triangle.h"

class Triangulation {
public:
    std::map<double, int> vertexToIndex;  // Map coordinates to their index
    std::vector<double> uniqueCoordinates;          // List of unique coordinates
    std::vector<Triangle> trianglesList;            // List of triangles

    Triangulation();
    void insertTriangles(const Triangle& triangle);
    ~Triangulation();
};
