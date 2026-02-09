# Decryption-Program
Program will take file as input, perform decryption algorithm, and give confidence report based on similarity between known word data set.
# Class Descriptions:
## Caesar Cipher
- Given plain text, shifts chars based on integer value
- NOTE: CURRENT PATCH (2/4/26) ONLY WORKS WITH CAPITAL LETTERS (ascii values 65-90) with a max shift of +35
## Word Vector (V 1.0 - 2/8/26)
- first version to store word data set, simple linear vector
- Functions:
- WordVector(std::string); // creates word vector, file name needed
- void printWordVector(); // prints contents of word vector
- bool findString(std::string); // searches vector for string, returns true if found, false if not
