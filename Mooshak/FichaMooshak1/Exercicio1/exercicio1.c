#include <stdio.h>

int main(){

  // Definir as variaveis
  int a, b, c, d, e;
  float media;

  // Inputs

  scanf("%d", &a); //Primeiro numero

  scanf("%d", &b); //Segundo numero

  scanf("%d", &c); // Terceiro numero

  scanf("%d", &d); //Quarto numero

  scanf("%d", &e); //Quinto numero

  // Calculo pedido
  media = (a + b + c + d + e) / 5.0;

  // Output do que e pedido
  printf("%.3f\n", media);

  return 0;
}
