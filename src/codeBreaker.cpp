#include "codeBreaker.h"
CodeBreaker::CodeBreaker(std::string str, std::string fileName) : wordList(fileName){
    encryptedText = str;
}
int CodeBreaker::findShift(int max){
    CaesarCipher caesarCipher = CaesarCipher("", encryptedText);
    std::string temp = "";

    for(int i = 0; i < max; i++){
        caesarCipher.decrypt(i);
        if(wordList.findString(caesarCipher.getDecryptedText())){
            std::cout << "Found! Shift:" << i << "\n";
            return i;
        }
    }
    return -1;
}