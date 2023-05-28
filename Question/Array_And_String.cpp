#include "Array_And_String.h"

bool Array_And_String::isUniqueChar_CharArray(char str[])
{
    int strLength = sizeof(str) / sizeof(str[0]) - 2;
    if (strLength > 128)
        return false;
    bool *char_set = new bool[128]{};

    for (int i = 0; i < strLength; i++)
    {
        int val = (int)str[i];
        if (char_set[val])
            return false;
        char_set[val] = true;
    }
    return true;
}

bool Array_And_String::isUniqueChar_String(std::string str)
{
    if (str.size() > 128)
        return false;
    bool *char_set = new bool[128]{};
    for (char x : str)
    {
        int val = (int)x;
        if (char_set[val])
            return false;
        char_set[val] = true;
    }
    return true;
}