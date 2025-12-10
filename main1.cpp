#include <iostream>
#include <vector>
#include <string>
#include <fstream>
std::vector<std::string> readstrfile(const std::string& filename) {
    std::vector<std::string> lines;
    return lines;
}
void displayLines(const std::vector<std::string>& lines) {
    for (const auto& line : lines) {
        std::cout << line << std::endl;
    }
}
void writeToFile(const std::vector<std::string>& lines, const std::string& filename) {
    std::ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& line : lines) {
            outFile << line << std::endl;
        }
        outFile.close();
    }
}

int main() {
setlocale(LC_ALL, "Russian");
    std::string inputFile = "Vvod.txt";
    std::string outputFile = "Vivod.txt";
    std::vector<std::string> lines = readstrfile(inputFile);
    displayLines(lines);
    writeToFile(lines, outputFile);

    std::cout << "Программа завершена." << std::endl;
    return 0;
}