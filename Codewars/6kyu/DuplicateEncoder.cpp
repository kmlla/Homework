#include <string>
std::string duplicate_encoder(const std::string& word){
  std::string word1 = "";
    for (int i = 0; i < word.size(); i++)
        word1 += std::tolower(word[i]);

    std::string s = "";
    for (int i = 0; i < word.size(); i++)
    {
        if (std::count(word1.begin(), word1.end(), word1.at(i)) > 1)
            s += ")";
        else
            s += "(";
    }
    return s;
}
