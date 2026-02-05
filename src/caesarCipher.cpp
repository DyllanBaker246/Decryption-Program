#include "caesarCipher.h"

CaesarCipher::CaesarCipher(std::string dTxt, std::string eTxt){
    encryptedText = eTxt;
    decryptedText = dTxt;
}

std::string CaesarCipher::getDecryptedText(){
    return decryptedText;
}

std::string CaesarCipher::getEncryptedText(){
    return encryptedText;
}

void CaesarCipher::encrypt(int shift){
    char temp;
    //std::string encryptTxt = "";
    encryptedText = ""; // clear value in encrypted text
    for(int i = 0; i < decryptedText.size(); i++){
        temp = decryptedText[i];
        temp += shift;
        // temp = (temp + shift) % 127;
        // if(temp < 32)
        //     temp += 31;
        encryptedText += temp;
    }
}

void CaesarCipher::decrypt(int shift){
    char temp;
    //std::string encryptTxt = "";
    decryptedText = ""; // clear value in decrypted text
    for(int i = 0; i < encryptedText.size(); i++){
        temp = encryptedText[i];
        temp -= shift;
        decryptedText += temp;
    }
}