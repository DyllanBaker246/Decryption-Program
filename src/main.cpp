#include <iostream>
#include "fileHandler.h"
#include "caesarCipher.h"
void mainMenu();
void decryptionMenu();
void encryptionMenu();
int main(){
    //mainMenu();
    FileHandler fileHandler = FileHandler("text.txt", "");
    //std::cout << fileHandler.readFile();
    CaesarCipher caesarCipher = CaesarCipher(fileHandler.readFile(), "");
    std::cout << caesarCipher.getDecryptedText();
    caesarCipher.encrypt(20);
    std::cout << caesarCipher.getEncryptedText();
    caesarCipher.decrypt(20);
    std::cout << caesarCipher.getDecryptedText();


    return 0;
}

void encryptionMenu(){
    char choice;
    // encryption menu
    do{
        system("clear");
        //            1         1         1         1         1         1         1
        std::cout << "=============================================================\n";
        std::cout << "=                                                           =\n";
        std::cout << "=                        Encryption                         =\n";
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
