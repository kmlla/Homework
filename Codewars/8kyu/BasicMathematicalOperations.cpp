int basicOp(char op, int val1, int val2) {
  if (op=='+')
    return val1+val2;
  else if (op=='-')
    return val1-val2;
  else if (op=='*')
    return val1*val2;
  else if (op=='/')
    return val1/val2;
}
