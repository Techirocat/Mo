/*
1073741823 - 3 - 2

10120312313 - 3 - 3

*/

#include <stdio.h>
#include <stdlib.h>

int contador(int n, int i, int total){

  if (n == 0)
  {
    return total;
  }
  if (i == n % 10)
  {
    total ++;
  }
  

  return contador((int)(n / 10), i, total);
}

int main() {

  int i, n;

  if (scanf("%d", &n) != 1 || scanf("%d", &i) != 1 || i < 0 )
  {
    printf("NO\n");
    return 0;
  }
  

     printf("%d\n", contador(abs(n) , i, 0));


  return 0;
}