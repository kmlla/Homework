class HiddenSeq{
  public:
    static unsigned long long fcn(int n) {
    unsigned long long d=1;
    for (int i=1;i<=n;++i)
      d*=2;
  return d;
    }
};
