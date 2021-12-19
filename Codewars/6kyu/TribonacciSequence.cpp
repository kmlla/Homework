std::vector<int> tribonacci(std::vector<int> signature, int n)
{
    if (n==0){
      std::vector<int> r1;
      r1.reserve(n); 
      return r1;
    } 
    else {
      std::vector<int> r(n);
      r [0] += signature [0];
      r [1] += signature [1];
      r [2] += signature [2];
      
      for (int i = 3; i < n; ++i){
        r[i] += r[i-3] + r[i-2] + r[i-1];
      }
    return r;
    }
}
