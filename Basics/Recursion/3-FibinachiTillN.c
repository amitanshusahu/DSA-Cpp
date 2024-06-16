#include <stdio.h>

// prints fibanachi till n
int fib(int n) {  

  // Base Condition
  if(n == 0 || n == 1) {
    return n;
  }

  return fib(n-1) + fib(n - 2);

}


int main() {

  int n;
  scanf("%d", &n);

  printf("%d", fib(n));

}