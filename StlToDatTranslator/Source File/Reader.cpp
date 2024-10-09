#include "Reader.h"
#include <fstream>
#include <sstream>
#include <iostream>

Reader::Reader(){}
void Reader::loadFile(const std::string& filePath) {
    std::ifstream file(filePath);
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            if (word == "vertex") {
                std::string x, y, z;
                ss >> x >> y >> z;
                content += x + " " + y + " " + z + " ";
            }
        }
    }
  //  std::cout << "Loaded data: " << content << std::endl; // Debug print
}
Reader::~Reader(){}
