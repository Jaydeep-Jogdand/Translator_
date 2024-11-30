#pragma once
#include "Writer.h"
#include "Triangulation.h"

class STLWriter : public Writer {
public:
    STLWriter();
    ~STLWriter();
    void write(const std::string& outputFile, const std::vector<Triangle>& triangles, const std::vector<double>& uniqueCoordinates) override;
};
