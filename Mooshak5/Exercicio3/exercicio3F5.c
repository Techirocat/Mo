#include <stdio.h>

void logica(int n, int i, int contador, int soma, int algarismos, int *r_contador, int *r_soma, int *r_algarismos){

  if (n == 0)
  {
    *r_contador = contador;
    *r_algarismos = algarismos;
    *r_soma = soma;
    return;
  }
  if (i == n % 10)
  {
    contador++;
  }

  int ultimo_digito = n % 10;
  
  soma = soma + ultimo_digito;
  algarismos++;
  
  logica(n / 10, i , contador , soma, algarismos, r_contador, r_soma, r_algarismos);

}

int main() {

  int n;
  int i;

  if (scanf("%d", &n) != 1 || scanf("%d", &i) != 1 || i > n || i < 0)
  {
    printf("NO\n");
    return 0;
  }
  
  int contador = 0;
  int soma = 0;
  int algarismos = 0;


  logica(n ,i, 0,0,0, &contador, &soma, &algarismos);

  printf("%d %d %d\n", contador, soma, algarismos);




  return 0;
}