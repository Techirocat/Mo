#include <stdio.h>

/*

0 ... 9 - pelo menos um E
10 ... 13 - pelo menos um D e nunhum E
14 ... 16 - pelo menos um C
17 ... 18 - 3Bs ou 2Bs e um A
19 - B e 2As
20 - 3As

TESTE: A C B 17 -> NOT OK


*/

int main(){

  char c1, c2, c3;
  int A = 0, B=0, C=0, D=0, E=0, nota;

  scanf(" %c", &c1);
  scanf(" %c", &c2);
  scanf(" %c", &c3);

  scanf(" %d", &nota);

  char crit[] = {c1, c2, c3};

   for (int i = 0; i < 3; i++) {
        if (crit[i] == 'A') { 
            A++; 
        } else if (crit[i] == 'B') { 
            B++; 
        } else if (crit[i] == 'C') { 
            C++; 
        } else if (crit[i] == 'D') { 
            D++; 
        } else if (crit[i] == 'E') { 
            E++; 
        }else{
          printf("NO\n");
          return 0;
        }
    }
  
  int total = A + B + C + D +E;

  if (nota < 0 || nota > 20 || total != 3){
    printf("NO\n");
    return 0;
  }


  if ( A == 3 ){ // certo
    if (nota == 20){
      printf("OK\n");
    }else{
      printf("NOT OK\n");
    }
  }

  if ( A == 2 && B == 1 ){ // certo
    if (nota == 19){
      printf("OK\n");
    }else{
      printf("NOT OK\n");
    }
  }

  if ( B == 3 || (A == 1 && B == 2)){ // certo
    if (nota == 17 || nota == 18){
      printf("OK\n");
    }else{
      printf("NOT OK\n");
    }
  }

  if ( C >= 1 && D == 0 && E == 0 ){ // certo
    if (nota == 14 ||  nota == 15 || nota == 16){
      printf("OK\n");
    }else{
      printf("NOT OK\n");
    }
  }

  if ( D >= 1 && E == 0 ){ // 
    if (nota >= 10 && nota <= 13){
      printf("OK\n");
    }else{
      printf("NOT OK\n");
    }
  }
  
  if ( E >= 1 ){
    if (nota >= 0 && nota <= 9){
      printf("OK\n");
    }else{
      printf("NOT OK\n");
    }
  }

  return 0;
}
