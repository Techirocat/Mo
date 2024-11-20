#include <stdio.h>


unsigned long long int sequencia(int n, unsigned long long int a, unsigned long long int b, unsigned long long int c){

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
  
  
  return sequencia(n - 1, b, c, a+b);
}

int main() {

  int n;

  if (scanf("%d", &n) != 1 || n < 0)
  {
    printf("NO\n");
    return 0;
  
  }
  
  unsigned long long int resultado = sequencia(n , 1, 1, 1);

  printf("%llu\n", resultado);


  return 0;
}