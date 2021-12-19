#include <vector>

int maxSequence(const std::vector<int>& arr){
  int maxx = 0, max1 = 0;
 
    for (unsigned long i = 0; i < arr.size(); i++)
    {
        max1 = max1 + arr[i];
        if (maxx < max1)
            maxx = max1;
 
        if (max1 < 0)
            max1 = 0;
    }
    return maxx;
}
