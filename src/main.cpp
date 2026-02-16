#include <iostream>
#include "fileHandler.h"
#include "caesarCipher.h"
#include "wordList.h"
#include "codeBreaker.h"
void mainMenu();
void decryptionMenu();
void encryptionMenu();
int main(){
    //mainMenu();
    FileHandler fileHandler = FileHandler("text.txt", "encrypted.txt");
    CaesarCipher caesarCipher = CaesarCipher(fileHandler.readFile(), "");
    caesarCipher.encrypt(1000);
    CodeBreaker codeBreaker = CodeBreaker(caesarCipher.getEncryptedText(), "wordList.txt");
    caesarCipher.decrypt(codeBreaker.findShift(1000000));
    // std::cout << caesarCipher.getDecryptedText();

    //caesarCipher.decrypt();
    //std::cout << caesarCipher.getDecryptedText();

    return 0;
}

void encryptionMenu(){
    std::string input;
    // encryption menu
    system("clear");
    //            1         1         1         1         1         1         1
    std::cout << "=============================================================\n";
    std::cout << "=                                                           =\n";
    std::cout << "=                        Encryption                         =\n";
    std::cout << "=                                                           =\n";
    std::cout << "=          Press 'e' at anytime to return to main menu      =\n";
    std::cout << "=             Please enter file name to be encrypted:       =\n";
    std::getline(std::cin, input);
    std::cin.ignore();
    if(input == "e")
        return;
    std::cout << "=       Please enter file for encrypted text to be written: =\n";
    std::getline(std::cin, input);
    std::cin.ignore();
    if(input == "e")
        return;
    
    // ENCRYPTION COOL STUFF HERE **************************
    
    std::cout << "=                  File sucessfully encrypted!              =\n";
    std::cout << "=                Press anything to return to menu:          =\n";
    std::getline(std::cin, input);
    std::cin.ignore();
    return;
}

void decryptionMenu(){
    char choice;
    // decryption menu
    do{
        system("clear");
        //            1         1         1         1         1         1         1
        std::cout << "=============================================================\n";
        std::cout << "=                                                           =\n";
        std::cout << "=                        Decryption                         =\n";
        std::cout << "=                                                           =\n";
        std::cout << "=                     Nothing to See here                   =\n";
        std::cout << "=                                                           =\n";
        std::cout << "=                      press 1 to quit                      =\n";
        std::cout << "=                                                           =\n";
        std::cout << "=                                                           =\n";
        std::cout << "=============================================================\n";
        std::cin >> choice;
    }while(choice != '1');
    return;
}

void mainMenu(){
    char choice;
    do{
        system("clear");
        // main menu
        //            1         1         1         1         1         1         1
        std::cout << "=============================================================\n";
        std::cout << "=                                                           =\n";
        std::cout << "=                   Decryption Program                      =\n";
        std::cout << "=                                                           =\n";
        std::cout << "=              Please Select One of the Following:          =\n";
        std::cout << "=                       1. Encrypt File                     =\n";
        std::cout << "=                       2. Decrypt File                     =\n";
        std::cout << "=                       3. Quit Program                     =\n";
        std::cout << "=                                                           =\n";
        std::cout << "=============================================================\n";
        std::cin >> choice;
    
    
        switch(choice){
            case '1':
                encryptionMenu();
                break;
            case '2':
                decryptionMenu();
                break;
            default:
                break;
        }
        
    }while(choice != '3');
    return;
}
