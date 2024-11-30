#include "STLReader.h"
#include "STLWriter.h"
#include "Triangulation.h"
#include <iostream>

int main() {
    STLReader reader;
    STLWriter writer;
    Triangulation triangulation;

    reader.read("TestCase/cube.stl", triangulation);
    writer.write("output.dat", triangulation.trianglesList, triangulation.uniqueCoordinates);


    std::cout << "Triangles successfully saved to output.dat\n";
    return 0;
}
