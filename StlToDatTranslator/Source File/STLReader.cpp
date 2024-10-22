#include "STLReader.h"
#include <sstream>
#include <fstream>
#include <iostream>

STLReader::STLReader() {}

STLReader::~STLReader() {}

void STLReader::read(const std::string& inputFile, Triangulation& triangulation) {
    std::ifstream myfile(inputFile);
    std::string line;

    if (!myfile.is_open()) {
        throw std::runtime_error("File doesn't exist");
        return;
    }

    while (std::getline(myfile, line)) {
        std::istringstream iss(line);
        std::string vertex;
        double x;
        double y;
        double z;

        // Processing lines that contain vertices
        if (iss >> vertex >> x >> y >> z && vertex == "vertex") {
            int xIndex = getOrAddUniqueCoordinate(x, triangulation);
            int yIndex = getOrAddUniqueCoordinate(y, triangulation);
            int zIndex = getOrAddUniqueCoordinate(z, triangulation);
            pointList.push_back(Point(xIndex, yIndex, zIndex));

            // Once we have 3 vertices, we create a triangle
            if (pointList.size() == 3) {
                buildAndInsertTriangle(pointList[0], pointList[1], pointList[2], triangulation);
                pointList.clear();
            }
        }
    }
}

int STLReader::getOrAddUniqueCoordinate(double value, Triangulation& triangulation) {
    // Finds or adds a unique coordinate value to the triangulation's uniqueCoordinates list
    auto it = triangulation.vertexToIndex.find(value);
    if (it != triangulation.vertexToIndex.end()) {
        return it->second;
    }

    int newIndex = triangulation.uniqueCoordinates.size();
    triangulation.vertexToIndex[value] = newIndex;
    triangulation.uniqueCoordinates.push_back(value);

    return newIndex;
}

void STLReader::buildAndInsertTriangle(Point& p1, Point& p2, Point& p3, Triangulation& triangulation) {
    // Creates a triangle and inserts it into the triangulation
    Triangle triangle(p1, p2, p3);
    triangulation.insertTriangles(triangle);
}
