#include "wordList.h"
// Node Class
Node::Node(char c){
    letter = c;
}
Node* Node::findLetter(char c){
    Node* temp;
    for(int i = 0; i < nextLetters.size(); i++){
        if(nextLetters[i]->getLetter() == c){
            temp = nextLetters[i];
            return temp;
        }
    }
    return nullptr;
}

char Node::getLetter(){
    return letter;
}

// Word list class
WordList::WordList(std::string fileName){
    std::ifstream file(fileName); // open file
    std::string line; // stores string at the given line
    while(std::getline(file, line)){

        // loop through chars of word to be added
        // if char is found
        //  make node with char the current node
        //  continue
        // if char is not found
        //  create new node, add to nextLetters of prior node
        for(int i = 0; i < line.size(); i++){

        }
    }
}

bool WordList::findWord(std::string str){
    return true;
}