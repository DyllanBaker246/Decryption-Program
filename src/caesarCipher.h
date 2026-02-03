#ifndef CAESARCIPHER_H
#define CAESARCIPHER_H
#include <string>
#include<iostream>
class CaesarCipher{
    private:
        std::string decryptedText;
        std::string encryptedText;
    public:
        CaesarCipher(std::string d, std::string e);
        std::string getDecryptedText();
        std::string getEncryptedText();
        void encrypt(int shift);
        void decrypt();
};
#endif