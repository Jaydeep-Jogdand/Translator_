#pragma once
#include <vector>
#include <string>
#include "Triangulation.h"

class Writer {
public:
    virtual void write(const std::string& outputFile, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueCoordinates) = 0;
    virtual ~Writer() {}
};
