bool is_square(int n)
{
  for (int i=0;i<=n/2+1;++i){
    if (n==i*i){
      return true;
    break;
    }
  }
  return false;
}
