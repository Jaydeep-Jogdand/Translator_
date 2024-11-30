#include "STLWriter.h"
#include <fstream>
#include <iostream>

STLWriter::STLWriter() {}

STLWriter::~STLWriter() {}

void STLWriter::write(const std::string& outputFile, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueCoordinates) {
    std::ofstream file(outputFile);
    if (!file.is_open()) {
        throw std::runtime_error("Cannot open the output file");
        return;
    }

    for (const auto& tri : triangles) {
        file << uniqueCoordinates[tri.getVertex1().getX()] << " " << uniqueCoordinates[tri.getVertex1().getY()] << " " << uniqueCoordinates[tri.getVertex1().getZ()] << "\n"
            << uniqueCoordinates[tri.getVertex2().getX()] << " " << uniqueCoordinates[tri.getVertex2().getY()] << " " << uniqueCoordinates[tri.getVertex2().getZ()] << "\n"
            << uniqueCoordinates[tri.getVertex3().getX()] << " " << uniqueCoordinates[tri.getVertex3().getY()] << " " << uniqueCoordinates[tri.getVertex3().getZ()] << "\n"
            << uniqueCoordinates[tri.getVertex1().getX()] << " " << uniqueCoordinates[tri.getVertex1().getY()] << " " << uniqueCoordinates[tri.getVertex1().getZ()] << "\n";
    }

    file.close();
    std::cout << "Triangles saved to " << outputFile << std::endl;
}
