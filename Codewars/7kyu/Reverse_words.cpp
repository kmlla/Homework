std::string reverse_words(std::string str)
{
    std::string out;  //The default is an empty string
    std::string a_word;
    for (int i=0;i<str.size();++i) {
        if (str[i] != ' ') {  //If it is not a space, add a word from the front to make the words in reverse order.
            a_word = str[i] + a_word;
        }
        if (str[i] == ' ') {  //If it is a space, put the word in the output string,
            out = out + a_word;
            a_word = "";  //The word is blank, then start next time
            out = out + " ";  //The output string plus spaces
        }
    }
    out = out + a_word;
    return out;
}
