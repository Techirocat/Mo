#include <stdio.h>


long long int fact(int n){
  long long int n_fact = 1;
  for (int i = 1; i <= n; i++)
  {
    n_fact *= i;
  }
  
  return n_fact;
}

long long int comb(int n, int k){
  return (fact(n))/(fact(k) * fact(n - k));
}

int main(){

  int n, k;

  int a1 = scanf("%d", &n);
  int a2 = scanf("%d", &k);

  if (a1 != 1 || a2 != 1)
  {
    printf("NO\n");
    return 0;
  }
  
  if (n < 0 || k < 0)
  {
    printf("NO\n");
    return 0;
  }
  
  if (k > n)
  {
    printf("NO\n");
    return 0;
  }
  

  printf("%lld\n", comb(n, k));

  return 0;
}
