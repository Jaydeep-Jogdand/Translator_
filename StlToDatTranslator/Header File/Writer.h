#pragma once
#include <vector>
#include <string>
#include "Triangle.h"

class Writer {
public:
    Writer();
    void saveToFile(const std::string& filePath, const std::vector<Triangle>& shapeTriangles);
    ~Writer();
};
