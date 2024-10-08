#include "Reader.h"
#include "Triangulation.h"
#include "Writer.h"
#include <iostream>

int main() {
    Reader fileReader;
    fileReader.loadFile("cube.stl");

    Triangulation triangulation;
    triangulation.parseData(fileReader.content);

    std::vector<Triangle> shapeTriangles = triangulation.generateTriangles(fileReader.content);

    Writer fileWriter;
    fileWriter.saveToFile("output.dat", shapeTriangles);

    std::cout << "Triangles successfully saved to output.dat\n";
    return 0;
}
