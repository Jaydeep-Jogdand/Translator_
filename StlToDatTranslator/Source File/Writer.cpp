#include "Writer.h"
#include <fstream>
#include <iomanip>
#include <iostream>

Writer::Writer() {}

void Writer::saveToFile(const std::string& filePath, const std::vector<Triangle>& shapeTriangles) {
    std::ofstream file(filePath);
    for (const auto& tri : shapeTriangles) {
        // Use getter methods to access vertex points
        file << tri.getVertex1().getX() << " " << tri.getVertex1().getY() << " " << tri.getVertex1().getZ() << "\n"
             << tri.getVertex2().getX() << " " << tri.getVertex2().getY() << " " << tri.getVertex2().getZ() << "\n"
             << tri.getVertex3().getX() << " " << tri.getVertex3().getY() << " " << tri.getVertex3().getZ() << "\n"
             << tri.getVertex1().getX() << " " << tri.getVertex1().getY() << " " << tri.getVertex1().getZ() << "\n";
    }
    std::cout << "Triangles saved to file: " << shapeTriangles.size() << std::endl;
}

Writer::~Writer() {}
