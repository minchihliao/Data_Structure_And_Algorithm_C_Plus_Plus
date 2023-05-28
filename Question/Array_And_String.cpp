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

bool Array_And_String::IsPermmutation(std::string sourceString, std::string compareString)
{
    if (sourceString.size() != compareString.size())
        return false;
    int *letters = new int[128]{};

    for (auto &c : sourceString)
    {
        letters[(int)c]++;
    }

    for (auto &c : compareString)
    {
        int index = (int)c;
        letters[index]--;
        if (letters[index] < 0)
            return false;
    }

    return true;
}

void Array_And_String::ReplaceSpace(char *s, int sawArrLength, int arrlength)
{
    int spaceNumber = 0;
    for (int i = 0; i < sawArrLength; i++)
    {
        if (s[i] == ' ')
            spaceNumber++;
    }
    int newIndex = sawArrLength + spaceNumber * 2;

    if (sawArrLength < arrlength)
        s[newIndex] = '\0';
    for (int i = sawArrLength - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
        {
            s[newIndex - 1] = '0';
            s[newIndex - 2] = '2';
            s[newIndex - 3] = '%';
            newIndex = newIndex - 3;
        }
        else
        {
            s[newIndex - 1] = s[i];
            newIndex--;
        }
    }
    int newLength = sawArrLength + spaceNumber * 2;
    for (int i = 0; i < newLength; i++)
    {
        std::cout << s[i];
    }
    std::cout << std::endl;
}