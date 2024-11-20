#include <stdio.h>

long long int tribonacci(int n, long long int a, long long int b, long long int c){
  if (n == 0)
  {
    return a;
  }
  if (n == 1)
  {
    return b;
  }
  if (n == 2)
  {
    return c;
  }

  return tribonacci(n - 1, b, c , a + b + c);
  
  
  
}

int main() {

  int n;

  if (scanf("%d", &n) != 1 || n < 0 )
  {
    printf("NO\n");
    return 0;
  }

  long long int resultado = tribonacci(n , 0, 1, 2);

  printf("%lld\n", resultado);

  return 0;
}
