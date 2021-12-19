#include <string>
#include <cmath>

 int Mod(int a, std::string b, int len)
{
    int m = 0;
    for (int i = 0; i < len; i++)
        m = (m * 10 + b[i] - '0') % a;
    return m; 
}

int last_digit(const std::string& str1, const std::string& str2){
    int size_a = str1.size(), size_b = str2.size();
    int len = size_b;
    if (size_a == 1 && size_b == 1 && str2[0] == '0' && str1[0] == '0')
        return 1;
    else if (size_b == 1 && str2[0] == '0')
        return 1;
    else if (size_a == 1 && str1[0] == '0')
        return 0;
    int exp=0;
    if (Mod(4, str2, len) == 0)
      exp=4;
    else
      exp=Mod(4, str2, len);
    int res = pow(str1[size_a - 1] - '0', exp);
    return res % 10;
}
