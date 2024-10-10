#include <stdio.h>
#include <string.h>

/*
CASOS A CRIAR: 
- ZERO
- PAR OU IMPAR
- DIVISIVEL POR 3
- DIVISIVEL POR 5

TESTES:
12 12 - IGUAL
4 25 - MAIOR
-2 0 - MENOR
0 2 - MENOR
18 20 - MAIOR
12 18 - MENOR
8 4 - MENOR
25 33 - MAIOR
25 35 - MENOR
11 33 - MAIOR
*/

int main(){

  int x, y;
  char mensagem[10];

  scanf("%d", &x);
  scanf("%d", &y);

 if (x == y){ // se forem iguais
    strcpy(mensagem, "IGUAL");
    printf("%s\n", mensagem);
    return 0;
  }
  if (x == 0 || y == 0){ // se um dos int for igual a 0
    x < y ? strcpy(mensagem, "MENOR") : strcpy(mensagem, "MAIOR");
    printf("%s\n", mensagem);
    return 0;
  }

  // Caso em que um deles é par e o outro impar
  if (x % 2 == 0 && y % 2 == 1){
    strcpy(mensagem, "MAIOR");
    printf("%s\n", mensagem);
    return 0;
  }else if ( x % 2 == 1 && y % 2 == 0){
    strcpy(mensagem, "MENOR");
    printf("%s\n", mensagem);
    return 0;
  }

  // CAso de um numero ser divisivel por 3
  if (x % 2 == 0){
    if (x % 3 == 0){
      if (y % 3 == 0){
         x > y ? strcpy(mensagem, "MAIOR") : strcpy(mensagem, "MENOR");
         printf("%s\n", mensagem);
         return 0;
      }else{
        strcpy(mensagem, "MAIOR");
        printf("%s\n", mensagem);
        return 0;
      } 
    }else{
      x > y ? strcpy(mensagem, "MENOR") : strcpy(mensagem, "MAIOR");
      printf("%s\n", mensagem);
        return 0;
    }
  }else if(x % 2 == 1){ // caso dos numero IMPARES
    if(x % 5 == 0){
      if (y % 5 == 0){
         x > y ? strcpy(mensagem, "MAIOR") : strcpy(mensagem, "MENOR");
         printf("%s\n", mensagem);
         return 0;
      }else{
        strcpy(mensagem, "MAIOR");
        printf("%s\n", mensagem);
        return 0;
      } 
    }else{ // outros impares
        x > y ? strcpy(mensagem, "MENOR") : strcpy(mensagem, "MAIOR");
        printf("%s\n", mensagem);
        return 0;
    }
  }

  printf("%s\n", mensagem);

  return 0;
}