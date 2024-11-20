#include <stdio.h>

int logica(int n){

  if (n == 0 || n == 1 || n == 2)
  {
    return 1;
  }
  
  return logica(n - 2) + logica(n - 3);
  
}


int main() {

  int n;

  if (scanf("%d", &n) != 1 || n < 0)
  {
    printf("NO\n");
    return 0;

  }
  
  printf("%d\n", logica(n));


  return 0;
}