#include <stdio.h>
#include <math.h>

int main(){

  // defenir as variaveis
  double a, b, c;
  double x, y;

  // Input
  scanf("%lf", &a);

  scanf("%lf", &b);

  scanf("%lf", &c);

  // Calculo
  x = (-b) / (2*a);
  y = -(pow(b, 2) - (4*a*c)) / (4*a);

  // Output
  printf("%.3lf %.3lf\n", x , y);

  return 0;
}
