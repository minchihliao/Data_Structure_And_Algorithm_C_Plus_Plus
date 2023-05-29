#include <iostream>
#include <array>
#include <string>
class Array_And_String
{
private:
    int countCompression(char *s, int arraylength);

public:
    bool isUniqueChar_CharArray(char str[]);
    bool isUniqueChar_String(std::string str);
    bool IsPermmutation(std::string s, std::string t);
    void ReplaceSpace(char *s, int sawArrLength, int arrlength);
    char *Compress_charArray(char *s, int arraylength);
};
