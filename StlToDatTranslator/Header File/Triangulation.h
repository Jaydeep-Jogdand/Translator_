#pragma once
#include <unordered_map>
#include <vector>
#include <string>
#include "Triangle.h"

class Triangulation {
public:
    Triangulation();
    std::unordered_map<double, int> vertexToIndex;
    std::vector<double> uniqueCoordinates;
    void parseData(const std::string& rawData);
    std::vector<Triangle> generateTriangles(const std::string& rawData);
    ~Triangulation();
};



