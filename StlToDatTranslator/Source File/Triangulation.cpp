#include "Triangulation.h"

Triangulation::Triangulation() {}

void Triangulation::insertTriangles(const Triangle& triangle) {
    trianglesList.push_back(triangle);
}

Triangulation::~Triangulation() {}
