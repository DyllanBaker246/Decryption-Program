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

}

bool WordList::findWord(std::string str){
    return true;
}