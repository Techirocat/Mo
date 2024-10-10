#include <stdio.h>
#include <math.h>

int main(){

  // Defenir variaveis
  float x;
  float calc;

  // Input
  scanf("%f", &x);

  // Calculo
  calc = (2 * tan(x)) / (1 + pow(tan(x), 2));

  //Output
  printf("%.3f\n", calc);

  return 0;
}
