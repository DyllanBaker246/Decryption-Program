#ifndef CODEBREAKER_H
#define CODEBREAKER_H
#include "caesarCipher.h"

class CodeBreaker{
    private:
        std::string encryptedText;
    public:
        int findShift();
            // Finds the shift value of the encrypted text
            // uses Caesar Cipher
            // returns the shift value if found
            // returns -1 if not found.
};

#endif