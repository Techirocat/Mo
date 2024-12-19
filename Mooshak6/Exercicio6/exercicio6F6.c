#include <stdio.h>


void tabuada(int n, int m){

  for (int i = 0; i <= m; i++)
  {
    printf("%d x %d = %d\n", i, n, n * i);
  }
  
  return;
}

int main() {

  int n, m;

  if (scanf("%d", &n) != 1 || scanf("%d", &m) != 1 || n < 0 || m < 0)
  {
    printf("NO\n");
    return 0 ;
  }
  
  tabuada(n, m);

  return 0;
}