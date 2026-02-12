#ifndef CODEBREAKER_H
#define CODEBREAKER_H
#include "caesarCipher.h"
#include "wordList.h"

class CodeBreaker{
    private:
        std::string encryptedText;
        WordList wordList;
    public:
        CodeBreaker(std::string str, std::string fileName);
            // Constructor for CodeBreaker
            // argument is the encrypted text to be decrypted and file name of data set
        int findShift(int);
            // Finds the shift value of the encrypted text
            // argument represents upperlimit to be tested
            // uses Caesar Cipher
            // returns the shift value if found
            // returns -1 if not found.
};

#endif