#include <string>

std::string number_to_string(int num) {
std::string s = "";
int n=num;
if (num<0)
  num=-num;

do {
int k = num % 10;
s = char('0' + k) + s;
num /= 10;
} while (num > 0);
if (n<0)
  return "-"+s;
else
  return s;
}
