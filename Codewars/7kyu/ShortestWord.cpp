#include <string>
int find_short(std::string str)
{
  int minim=str.size()+1;
  int k=0;
  for (unsigned long i=0;i<str.size();++i){
    if (str[i]!=' ')
      k+=1;
    else
    {
      if (k<minim)
        minim=k;
      k=0;
    }
  }
  if (k<minim)
    minim=k;
  return minim;
}
