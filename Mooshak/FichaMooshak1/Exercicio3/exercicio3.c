#include <stdio.h>

int main(){

  // defenir as variaveis
  float pre;
  int des;
  float n_pre;

  // Input
  scanf("%f", &pre);

  scanf("%d", &des);

  // Calculo
  n_pre = pre - (pre * des / 100.0);

  // Output
  printf("%.2f\n", n_pre);

  return 0;
}