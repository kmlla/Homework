std::string no_space(std::string x)
{
  std::string s;
  for (int i=0;i<x.size();++i){
    if (x[i]!=' ')
      s+=x[i];
    }
  return s;
}
