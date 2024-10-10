
#include "Writer.h"
#include <fstream>
#include <iomanip>
#include <iostream>

Writer::Writer() {}

void Writer::saveToFile(const std::string& filePath, const std::vector<Triangle>& shapeTriangles) {
    std::ofstream file(filePath);
    for (const auto& tri : shapeTriangles) {
   
           file << tri.vertex1.getX() << " " << tri.vertex1.getY() << " " << tri.vertex1.getZ() << "\n"
            << tri.vertex2.getX() << " " << tri.vertex2.getY() << " " << tri.vertex2.getZ() << "\n"
            << tri.vertex3.getX() << " " << tri.vertex3.getY() << " " << tri.vertex3.getZ() << "\n"
            << tri.vertex1.getX() << " " << tri.vertex1.getY() << " " << tri.vertex1.getZ() << "\n";
    }
    std::cout << "Triangles saved to file: " << shapeTriangles.size() << std::endl;
}

Writer::~Writer() {}



