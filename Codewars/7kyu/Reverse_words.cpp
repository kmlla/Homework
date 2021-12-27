#include<iostream>
#include <string>

std::string reverse_words(std::string str)
{
    char dop; int b = 0;
    int len = str.size();
    for (int i = 0; i <= len; ++i) {
        if (str[i] == ' ' || i == len) {
            for (int j = b; j < b + (i - b) / 2; ++j) {
                dop = str[j];
                str[j] = str[b + i - (j + 1)];
                str[b + i - (j + 1)] = dop;
            } 
            b = i + 1;
        }
    }
    return str;
}
