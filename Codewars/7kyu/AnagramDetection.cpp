#include <string>

bool isAnagram(std::string test, std::string original){
int a[26];
int b[26];
char l1,l2;
 if (test.size() != original.size()) {
    return false;
  }
for(int i=0;i<26;i++){
  a[i]=0;
  b[i]=0;
}
  if ((test.size()==0) && (original.size()==0))
    return true;
  for(unsigned long i=0;i<test.size();i++){
    l1=std::tolower(test[i]);
    a[int(l1)-'a']++;
  }
    for(unsigned long i=0;i<original.size();i++){
      l2=std::tolower(original[i]);     
      b[int(l2)-'a']++;
  }
  for(unsigned long i=0;i<26;i++){
    if (a[i]!=b[i])
      return false;
  }
  return true;
}
