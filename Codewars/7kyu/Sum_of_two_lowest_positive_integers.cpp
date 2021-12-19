#include <vector>

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
    long minim = std::max(numbers[0],numbers[1]);
    long predmin = std::min(numbers[0],numbers[1]);
    for (unsigned long i=0;i<numbers.size();++i){
      if (numbers[i]<=minim){
        predmin=minim;
        minim=numbers[i];
      }
      else if (numbers[i]<=predmin)
        predmin=numbers[i];
        
    }
  return minim+predmin;
}
