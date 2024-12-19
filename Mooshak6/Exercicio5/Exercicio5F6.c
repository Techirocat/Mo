#include <stdio.h>

long long int pascal(int n, int k){

  long long int p = 1;

    for (int i = 1; i <= k; i++) {
        p = p * (n - i + 1) / i;
    }

    return p;
}


int main() {

  int n;

  if (scanf("%d", &n) != 1 || n < 0)
  {
    printf("NO\n");
    return 0;
  }
  
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == i)
      {
        printf("%lld", pascal(i, j));
      }else{
        printf("%lld ", pascal(i, j));
      }
    }
    printf("\n");
  }
  





  return 0;
}