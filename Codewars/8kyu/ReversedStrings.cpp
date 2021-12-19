#include <string>
using namespace std ; 

string reverseString (string str )
{
  string dop;
  for (int i=str.size()-1;i>=0;--i){
    dop+=str[i];
  }
  return dop;
  }
