int cycle(int n) {
    int ost = 1;
    int count = 0;
    if (n % 2 == 0 || n % 5 == 0){
      return -1;
    }
    else{
     do {
        while (ost < n) {
            ost *= 10;
            ++count;
        }
        ost = ost % n;
     } while (ost != 1);
     return count;
    }
}
