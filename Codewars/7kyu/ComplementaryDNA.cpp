#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string s;
  for(int i=0;i<dna.size();++i){
    if (dna[i]=='A')
      s+='T';
    else if (dna[i]=='T')
      s+='A';
    else if (dna[i]=='G')
      s+='C';
    else 
      s+='G';
    }
  return s;
}
