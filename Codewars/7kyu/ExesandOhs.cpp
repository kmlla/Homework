bool XO(const std::string& str)
{
  int kx=0,ko=0;
  for (int i=0;i<=str.size();++i){
    if ((str[i]=='x') || (str[i]=='X'))
      kx+=1;
    else if ((str[i]=='o') || (str[i]=='O'))
      ko+=1;
  }      
  if (kx==0 && ko==0)
    return true;
  else if (kx==ko)
    return true;
  else
    return false;
}
