#include <stdio.h>
#include <math.h>

int main(){

  char ipt[30];
  float preco, p_f;
  int anos_c, anos_i, idade_d;

  fgets(ipt, 30, stdin);
  int x = sscanf(ipt, "%f %d %d %d", &preco, &anos_c, &anos_i, &idade_d);

 

  if (preco <= 0 || anos_c < 0 || anos_i < 0|| idade_d < 0 || anos_c > idade_d || anos_i > idade_d || x < 4 || anos_i > anos_c){
    printf("NO\n");
    return 0;
  }

  idade_d = ceil(idade_d /10.0) * 10;

  anos_c = anos_c / 5; // apenas pega a parte inteira da divisao
  anos_i = anos_i / 5; 

  int desconto = (idade_d / 2) - anos_c - anos_i;

  p_f = preco + preco * ((float) desconto/100); // round -> double, roundf -> float
  p_f = roundf(p_f * 100) / 100;

  printf("%.2f\n", p_f);

  return 0;
}
