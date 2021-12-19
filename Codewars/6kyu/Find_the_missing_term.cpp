static long findMissing(std::vector<long> list){
  long d = (list[list.size()-1] - list[0]) / long(list.size());
  for (int i = 0; i <= list.size()-2; ++i) {
    if (list[i+1] - list[i] != d) 
      return list[i] + d;
  }
}
