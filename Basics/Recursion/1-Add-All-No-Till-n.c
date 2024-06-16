#include <stdio.h>


// function to print sum till n
int sumtill(int n){

  // base condition
  if(n == 0) return 0;

  int pre = sumtill(n-1);
  return n + pre;

}


int main() {

  int n;
  scanf("%d", &n);

  printf("%d", sumtill(n));


}