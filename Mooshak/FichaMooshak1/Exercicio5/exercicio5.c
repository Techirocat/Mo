#include <stdio.h>

int main(){

  // Defenir variaveis
  unsigned int n, d;
  int total = 0;

  //Input 
  scanf("%d", &n);

  //Logica
  while (n > 0)
  {
    d = n % 10; // ultimo digito de n
    n = n / 10; // remove o ultimo digito
    total = total + d; // adiciona o ultimo digito ao total
  }
  
  //output 
  printf("%d\n", total);

  return 0;
}

