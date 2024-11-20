#include <stdio.h>



int catalan(int n){

  if (n == 0)
  {
    return 1;
  }
  


int resultado = 0;

  for (int p = 0; p < n; p++)
  {
    int q = n - p - 1;
    resultado += catalan(q) * catalan(p);
  }
  
  return resultado;

}

int main() {

  int n;

  if (scanf("%d", &n) != 1 || n < 0)
  {
    printf("NO\n");
    return 0;
  }
  
  printf("%d\n", catalan(n));


  return 0;
}