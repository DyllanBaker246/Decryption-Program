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
            std::cout << "Shift: " << i << " | [xxxxxxxxxx] 100%\n";
            return i;
        }

        std::cout << "Shift: " << i << " | [----------] 0%\n";
    }
    return -1;
}