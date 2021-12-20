#include <string>
using namespace std ; 

string reverseString (string str )
{
  for (int i = 0; i < str.size() / 2; ++i)
  {
    char s = str[i];
    str[i] = str[str.size() - 1 - i];
    str[str.size() - 1 - i] = s;
  }
    return str;
}
