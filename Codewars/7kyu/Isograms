bool is_isogram(std::string str) {
  int a[26];
  char l1;
  for(int i=0;i<26;i++){
    a[i]=0;
  }
    for(unsigned long i=0;i<str.size();i++){
      l1=std::tolower(str[i]);
      a[int(l1)-'a']++;
    }
    for(unsigned long i=0;i<26;i++){
      if (a[i]>1)
        return false;
    }
    return true;
}
