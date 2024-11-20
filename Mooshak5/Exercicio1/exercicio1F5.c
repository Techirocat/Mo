#include <stdio.h>


double wallis(int n, double acumulado){
  if (n == 0)
  {
    return acumulado;
  }

  double calculo = (2.0*n*2.0*n) / ((2 * n-1.0)*(2 * n+1.0)); 

  return wallis(n - 1, acumulado * calculo);

}


int main() {

  int n;

  if (scanf("%d", &n) != 1 || n <= 0)
  {
    printf("NO\n");
    return 0;
  }
  

  double pi = 2.0 *  wallis(n, 1.0);
  printf("%.12lf\n", pi);

  return 0;
}
