#ifndef WORD_LIST_H
#define WORD_LIST_H
#include <vector>
#include <iostream>
#include <fstream>
class WordList{
    // WordList class is a temporary means of storing word database
    // words are stored in a linear vector
    // upon construction, wordList will be populated
    private:
        std::vector<std::string> wordList;
            // stores words in dataset
    public:
        WordList(std::string);
            // creates WordList object
            // argument: file name of word set
        void printWordList();
        bool findString(std::string);
            // searches wordList for given string
            // argument: string
            // returns: true if found, false is not 
};
#endif