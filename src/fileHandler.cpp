#include "fileHandler.h"
FileHandler::FileHandler(std::string in, std::string out){
    inputFile = in;
    outputFile = out;
}

std::string FileHandler::readFile(){
    std::ifstream file(inputFile);
    if(!file){
        std::cout << "\n Unable to open file\n";
        return "";
    }

    std::string readFileContents;
    std::string line;

    while(std::getline(file, line))
        readFileContents += line + "\n";

    // testing
    //std::cout << readFileContents;
    file.close();    
    return readFileContents;
}

void FileHandler::writeFile(std::string str){
    std::ofstream outFile(outputFile);
    if(outFile.is_open()){
        outFile << str;
    }
    outFile.close();
    return;
}