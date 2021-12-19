#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string s1 = "";
  std::string s2 = "";
  for (int i = 0; i < 10; ++i )
  {
    if (arr[i] == 0) 
      s1 += "0";
    if (arr[i] == 1) 
      s1 += "1";
    if (arr[i] == 2) 
      s1 += "2";
    if (arr[i] == 3) 
      s1 += "3";
    if (arr[i] == 4) 
      s1 += "4";
    if (arr[i] == 5) 
      s1 += "5";
    if (arr[i] == 6) 
      s1 += "6";
    if (arr[i] == 7) 
      s1 += "7";
    if (arr[i] == 8) 
      s1 += "8";
    if (arr[i] == 9) 
      s1 += "9";   
  } 
  s2 = "(";
  s2 += s1[0];
  s2 += s1[1];
  s2 += s1[2];
  s2 += ") ";
  s2 += s1[3];
  s2 += s1[4];
  s2 += s1[5];
  s2 +=  "-";
  s2 += s1[6];
  s2 += s1[7];
  s2 += s1[8];
  s2 += s1[9];
  return  s2;
}
