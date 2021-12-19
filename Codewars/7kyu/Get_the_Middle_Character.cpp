std::string get_middle(std::string input) 
{
  std::string s = "";
  if (input.size() % 2 != 0)
  {
    for(unsigned long i = 0; i <= input.size() / 2 ; ++i)
    {
      if (i == input.length() / 2 )
      {
      s += input[i] ; 
      }
    }
    return s;
  } else {
    for(unsigned long i = 0; i < input.size() / 2; ++i)
    {
      if (i == input.size() / 2 - 1)
      {
      s += input[i];
      s += input[i + 1]; 
      }
    }
    return s;
  }
}
