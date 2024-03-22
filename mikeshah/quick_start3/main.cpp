#include <fstream> // File I/O operations
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char *argv[]) {

    // Program args
    std::cout << "argc: " << argc << std::endl;
    if (argc < 2) {
        std::cout << "Please specify a file name" << std::endl
                  << "e.g. ./prog filename.txt" << std::endl;
        return 0;
    }

    std::ifstream inputFile;
    inputFile.open(argv[1]);

    if (inputFile.is_open()) {
        // Temp storage for each line
        std::string line;
        // Read in the data
        while (std::getline(inputFile, line)) {
            if (line[0] == '#') {
                // Do nothing
            } else {
                std::stringstream stream(line);
                std::string chunk;
                while (stream >> chunk) {
                    int data = std::stoi(chunk);
                    std::cout << data << std::endl;
                }
            }
        }
    }
    inputFile.close();

    return 0;
}