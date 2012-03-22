int fib(int x) {
  int a    = 0;
  int b    = 1;
  int temp = 0;
  while(x--) {
    temp = a;
    a    = b;
    b    = a + temp;
  }
  return a;
}
