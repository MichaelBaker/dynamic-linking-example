#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  void* lib = dlopen("lib.dylib", RTLD_LAZY);
  if(lib == NULL) {
    printf("Couldn't load da dynamic lib\n");
    exit(1);
  } else {
    printf("Loaded da dynamic lib\n");
  }

  int (*fib_pointer)(int) = dlsym(lib, "fib");
  if(fib_pointer == NULL) {
    printf("Cound't load da fib\n");
    exit(1);
  } else {
    printf("Loaded da fib\n");
    printf("Fib of 10 is %d\n", fib_pointer(10));
  }

  exit(0);
}
