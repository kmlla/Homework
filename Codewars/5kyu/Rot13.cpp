#include <string>
using namespace std;

string rot13(string msg)
{
  std::string s;
  for (size_t i = 0; i < msg.size(); ++i){
  if (msg[i] >= 'A' && msg[i] <= 'M' || msg[i] >= 'a' && msg[i] <= 'm')
    s+=msg[i] + 13;
  else if (msg[i] >= 'N' && msg[i] <= 'Z' || msg[i] >= 'n' && msg[i] <= 'z')
    s+=msg[i] - 13;
  else
    s+=msg[i];
  }
  return s;
}
