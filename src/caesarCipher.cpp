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

void CaesarCipher::encrypt(){
    char temp;
    //std::string encryptTxt = "";
    encryptedText = ""; // clear value in encrypted text
    for(int i = 0; i < decryptedText.size(); i++){
        temp = decryptedText[i];
        temp = temp + 1;
        encryptedText += temp;

        //std::cout << encryptedText[i];
        
    }
}

void CaesarCipher::decrypt(){

}