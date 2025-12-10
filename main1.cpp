#include <iostream>
#include <vector>
#include <string>
#include <fstream>

std::vector<std::string> readstrfile(const std::string& filename) {
    std::vector<std::string> lines;

    // TODO: Implement file reading
    // Temporary test code for debugging
    lines.push_back("Test line 1");
    lines.push_back("Test line 2");
    lines.push_back("Test line 3");

    // Debug output - remove before merging!
    std::cout << "DEBUG readstrfile: created " << lines.size() << " test lines" << std::endl;

    return lines;
}

void displayLines(const std::vector<std::string>& lines) {
    // Empty - Participant #2 will implement
}

void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    // Empty - Participant #2 will implement
}

int main() {
    std::string inputFile = "Vvod.txt";
    std::string outputFile = "Vivod.txt";

    std::vector<std::string> lines = readstrfile(inputFile);
    displayLines(lines);
    writeToFile(lines, outputFile);

    std::cout << "Program finished." << std::endl;
    return 0;
}