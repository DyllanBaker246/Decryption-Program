#ifndef WORD_LIST.H
#define WORD_LIST.H
#include <vector>
#include <iostream>
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