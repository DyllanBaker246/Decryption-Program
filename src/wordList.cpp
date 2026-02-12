#include "wordList.h"
// Word List Class ***********************************************
WordList::WordList(std::string fileName){
    std::ifstream file(fileName);
    std::string line;

    while(std::getline(file, line)){
        wordList.push_back(line);
    }
    file.close();
}

void WordList::printWordList(){
    for(int i = 0; i < wordList.size(); i++)
        std::cout << wordList[i] << '\n';
}

bool WordList::findString(std::string str){
    for(int i = 0; i < wordList.size(); i++){
        if(wordList[i] == str)
            return true;
    }
    return false;
}