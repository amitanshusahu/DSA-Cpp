#include <stdio.h>


// function to return n pow p
int pow(int n, int p) {

  // base condition
  if(p == 0) {
    return 1;
  }


  int pre = pow(n, p-1);
  return n * pre;


}


int main () {

  int n, p;
  scanf("%d%d", &n, &p);

  printf("%d", pow(n, p));

}