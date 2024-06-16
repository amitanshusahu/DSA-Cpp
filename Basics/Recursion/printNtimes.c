#include<stdio.h>

void print(int i, int n) {

  // base case
  if(i > n) return;


  printf("Hey");


  print(i+1, n);
}

int main() {

  int n;
  scanf("%d", &n);

  print(1, n);

}