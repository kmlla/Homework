bool narcissistic( int value ){
  int v = value, p = 0, ost = 0, sum = 0, ost1 = 0;
  while (value > 0)
  {
    p += 1;
    value /= 10;
  }
  value = v;
  while (value > 0)
  {
    ost = value % 10;
    ost1 = value % 10;
    value /= 10;
    for (int i = 1; i < p; ++i)
    {
      ost *= ost1;
    }
    sum += ost;
  }
  if (sum == v)
  {
    return true;
  } else {
    return false;
  }
}
