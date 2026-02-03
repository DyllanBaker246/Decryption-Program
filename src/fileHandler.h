#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <string>
#include <iostream>
#include <fstream>
class FileHandler{
    private:
        std::string inputFile;
            // name of input file
        std::string outputFile;
            // name of output file
    public:
        FileHandler(std::string in, std::string out);
            // constructor for fileHandler
            //initializes inputFile and outputFile
        std::string readFile();
            // reads data in inputFile
            // returns contents of entire file into one string
            // if failure to open file, error message is displayed
        void writeFile(std::string);
            // takes in a string value
            // writes string to outputFile
            // if outputFile does not exist, creates it
};

#endif