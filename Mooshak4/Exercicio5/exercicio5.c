#include <stdio.h>

double wallis(int k){
  if (k == 1)
  {
    double termo_1 = (2.0 * 2.0) / (1.0 * 3.0); 
    return termo_1;
  }
  
  double calculo = (2.0*k*2.0*k) / ((2 * k-1.0)*(2 * k+1.0)); 

  return calculo * wallis(k-1);
}

int main() {

  int k;

  if (scanf("%d", &k) != 1 || k <= 0)
  {
    printf("NO\n");
    return 0;
  }
  
  printf("%.12lf\n", wallis(k) * 2);

  return 0;
}