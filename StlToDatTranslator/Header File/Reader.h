#pragma once
#include <string>

class Reader {
public:
    std::string content;
    void loadFile(const std::string& filePath);
    Reader();
    ~Reader();
};
