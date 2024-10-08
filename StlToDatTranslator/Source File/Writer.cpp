#include "Writer.h"
#include <fstream>
#include <iomanip>
#include <iostream>


Writer::Writer()
{

}

void Writer::saveToFile(const std::string& filePath, const std::vector<Triangle>& shapeTriangles) {
    std::ofstream file(filePath);
    for (const auto& tri : shapeTriangles) {
        file << std::fixed << std::setprecision(6)
            << tri.vertex1.xPos << " " << tri.vertex1.yPos << " " << tri.vertex1.zPos << "\n"
            << tri.vertex2.xPos << " " << tri.vertex2.yPos << " " << tri.vertex2.zPos << "\n"
            << tri.vertex3.xPos << " " << tri.vertex3.yPos << " " << tri.vertex3.zPos << "\n"
            << tri.vertex1.xPos << " " << tri.vertex1.yPos << " " << tri.vertex1.zPos << "\n";
    }
    std::cout << "Triangles saved to file: " << shapeTriangles.size() << std::endl; // Debug print
}
Writer::~Writer()
{

}
