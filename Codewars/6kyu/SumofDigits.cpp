int digital_root(int n)
{
  int s=0;
  int t;
  do {
    while (n!=0){
      s+=n%10;
      n=n/10;
    }
    n=s;
    t=s;
    s=0;
  } while (t/10!=0);
  return n;
}
