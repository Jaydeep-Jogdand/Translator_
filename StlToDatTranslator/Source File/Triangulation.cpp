#include "Triangulation.h"
#include <unordered_map>
#include <sstream>
#include <iostream>

Triangulation::Triangulation(){}
void Triangulation::parseData(const std::string& rawData) {
    std::istringstream dataStream(rawData);
    double coordValue;
    int index = 0;

    while (dataStream >> coordValue) {
        if (vertexToIndex.find(coordValue) == vertexToIndex.end()) {
            vertexToIndex[coordValue] = index;
            uniqueCoordinates.push_back(coordValue);
            index++;
        }
    }
}

std::vector<Triangle> Triangulation::generateTriangles(const std::string& rawData) {
    std::vector<Triangle> triangles;
    std::istringstream dataStream(rawData);
    std::vector<int> vertexIndices;

    double coord;
    while (dataStream >> coord) {
        vertexIndices.push_back(vertexToIndex[coord]);

        // Every 9 coordinates represent 3 vertices of a triangle
        if (vertexIndices.size() == 9) {
            Point p1(uniqueCoordinates[vertexIndices[0]], uniqueCoordinates[vertexIndices[1]], uniqueCoordinates[vertexIndices[2]]);
            Point p2(uniqueCoordinates[vertexIndices[3]], uniqueCoordinates[vertexIndices[4]], uniqueCoordinates[vertexIndices[5]]);
            Point p3(uniqueCoordinates[vertexIndices[6]], uniqueCoordinates[vertexIndices[7]], uniqueCoordinates[vertexIndices[8]]);
            triangles.emplace_back(p1, p2, p3);
            vertexIndices.clear();
        }
    }
    return triangles;
}
Triangulation::~Triangulation()
{}




