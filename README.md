# Decryption-Program
Program will take file as input, perform decryption algorithm, and give confidence report based on similarity between known word data set.
# Class Descriptions:
## Caesar Cipher
- Given plain text, shifts chars based on integer value
- NOTE: CURRENT PATCH (2/10/26) works with all ascii values, SHIFT > 128
### Functions
#### CaesarCipher
- Constructor, creates object passed plain or encrypted text
#### void encrypt(int shift)
- shifts plain text by "shift"
- encrypted text is stored in encryptedText
#### void decrypt(int shift)
- shifts encrypted text by negative "shift"
- new string is stored in decrypted text
## Word Vector (V 1.0 - 2/8/26)
- first version to store word data set, simple linear vector
- Functions:
- WordVector(std::string); // creates word vector, file name needed
- void printWordVector(); // prints contents of word vector
- bool findString(std::string); // searches vector for string, returns true if found, false if not
