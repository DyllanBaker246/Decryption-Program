#ifndef WORD_LIST_H
#define WORD_LIST_H
#include <vector>
#include <iostream>
#include <fstream>
class WordVector{
    // WordVector class is a temporary means of storing word database
    // words are stored in a linear vector
    // upon construction, wordList will be populated
    private:
        std::vector<std::string> wordList;
            // stores words in dataset
    public:
        WordVector(std::string);
            // creates WordVector object
            // argument: file name of word set
        void printWordVector();
        bool findString(std::string);
            // searches wordList for given string
            // argument: string
            // returns: true if found, false is not 
};
class Node{
        // Class Node serves as the individual nodes to a search tree
        // tree stores a database of words
    private:
        char letter;
        std::vector<Node*> nextLetters;
    public:
        Node(char);
            // Node constructor
        char getLetter();
            // returns letter
        Node* findLetter(char);
            // searched nextLetters for desired letter
            // if not found, returns NULL
            // returns letter
};
class WordList{
    private:
        std::vector<Node*> searchTree;
            // vector of root nodes of each search tree
    public:
        WordList(std::string);
            // creates search tree based on given word set (txt file)
        bool findWord(std::string);
            // if string is in word set, returns true
            // else false
};
#endif