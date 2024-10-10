#include <stdio.h>
#include <math.h>

/*

anos_c = 5 anos -> +1%
anos_i = 5 anos -> +1%
idade_d = {10,20,30,40,50,...}

preco final = preco + idade_d(desconto) - anos_c(desconto) - anos_i(desconto)


TESTE: 

1100.50 12 4 43 -> 1353.62
1500.20 7 1 32 -> 1785.24
750.67 9 12 58 -> 923.35                  ( 30 - 2- 1 = 27% )


Posibilidade que não são possiveis:

- Valores do input serm menores de 0
- idade de contrato e do acidente maiores que a idade
- desconto menor do que 0?
- desconto maior ou igual a 100% ?
- 


*/


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
