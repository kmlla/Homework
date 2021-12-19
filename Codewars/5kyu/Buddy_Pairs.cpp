using namespace std;
  int div_sum(int n) {
      int s = 0;
      for (int i = 1; i * i < n + 1; i++) {
          if (n % i == 0) {
              s += i;
          if (n / i != i) 
              s += n / i;
          }
      }
      return s - n;
  }
namespace Bud
{
    string buddy(long long start, long long limit)
{
    bool flag = true;
    int num1 = 0, num2 = 0, num;
    for (int i = start; i < limit; i++){
        num1 = i;
        if (!flag) 
            break;
        
        num = div_sum(i);
        for (int j = i + 1; j < num; ++j){
            num2 = j;
            if (num - 1 == j and div_sum(j) - 1 == i) {
                flag = false;
                break;
            }
        }
    }
    if (num1 != (limit - 1)) {
      std::string str = "(" + std::to_string(num1 - 1) + " " + std::to_string(num2) + ")";
        return str;
    }
    else 
        return "Nothing";
    }
}
