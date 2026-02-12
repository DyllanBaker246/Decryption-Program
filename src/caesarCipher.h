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
            // creates CaesarCipher object
            // one or both values are known
        CaesarCipher();
            // Overloaded contrustor
            // sets values of plain text and encrypted text to ""
        void setPlainText(std::string);
            // sets the value of plain text
        void setEncryptedText(std::string);
            //sets value of encryptedText
        std::string getDecryptedText();
            // returns value of plain text
        std::string getEncryptedText();
            // returnsx value of encrypted text
        void encrypt(int shift);
            // Encrypts plain text, stored in encryptedText
        void decrypt(int shift);
            // Decryptes Encrypted text, stores in plainText
};
#endif