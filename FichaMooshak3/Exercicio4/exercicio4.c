/*

^  -> Circuito XOR
|  -> Cricuito OR
&  -> Circuito AND
~  -> Circuito NOT


*/

#include <stdio.h>
#include <stdbool.h>

typedef unsigned char elem;
typedef unsigned long long set;
const set emptyset=0; 

void empty_out(set *c){
  *c = emptyset;
} // A: c <-- conjunto vazio

void add(elem n, set * c){
  *c = *c | (1ULL << n);
} // B: c <-- c U {n} 

void unio(set c1,set *c2){ // uniao
  *c2 = *c2 | c1;
} // C: c2 <-- c1 U c2 

void inter(set c1,set *c2){ // intersecao
  *c2 = *c2 & c1;
} // D: c2 <-- c1 inter c2 

void compl(set *c){
  *c = ~*c;
} // E: c <-- !c (complemento em {0..63}) 

void diff(set c1,set *c2){ // A - B
  *c2 = ~*c2 & c1;
} // F: c2 <-- c1 / c2 

bool incl(set c1, set c2){
  set x = (c1 & c2);
  return (x == c1) ? true : false; 
} // G: c1 está incluído em c2?

bool igual(set c1, set c2){
  return (c1 == c2)? true : false;
} // H: c1 é igual a c2 ?




int main() {

// INPUT INICIAL
  char character;

  int input = scanf("%c", &character);

  if (input != 1)
  {
    printf("ERROR\n");
  }


// CRIAR AS RESTANTES VARIAVEIS

  
  
  set c, c1, c2;
  elem n;

//===========================================



  switch (character)
  {
  case 'A':
      empty_out(&c);
      printf("%llu\n", c);  
    break;

  case 'B':{
    if (scanf("%hhu", &n) == 1 && scanf("%llu", &c) == 1) {
      
      if (n < 0 || n > 63)
      {
        printf("ERROR\n");
        return 0;
      }
      
      add(n, &c);
      printf("%llu\n", c);
    }else {
      printf("ERROR\n");
    }
    break;
  }
  case 'C':{

    if (scanf("%llu", &c1) == 1 && scanf("%llu", &c2) == 1) {
      unio(c1, &c2);
      printf("%llu\n", c2);
    }else {
      printf("ERROR\n");
    }
  }
    break;

  case 'D':{
    if (scanf("%llu", &c1) == 1 && scanf("%llu", &c2) == 1) {
          inter(c1, &c2);
      printf("%llu\n", c2);
    }else {
      printf("ERROR\n");
    }

  }
    break;

  case 'E':{

    if (scanf("%llu", &c) == 1) {
        compl(&c);
      printf("%llu\n", c);
    }else {
      printf("ERROR\n");
    }

  }
    break;

  case 'F':{

    if (scanf("%llu", &c1) == 1 && scanf("%llu", &c2) == 1) {
    diff(c1, &c2);
      printf("%llu\n", c2);
    }else {
      printf("ERROR\n");
    }

  }
    break;

  case 'G':{

    if (scanf("%llu", &c1) == 1 && scanf("%llu", &c2) == 1) {

      (incl(c1, c2)) ? printf("YES\n") : printf("NO\n");
      
    }else {
      printf("ERROR\n");
    }
     
  }
    break;

  case 'H':{

    if (scanf("%llu", &c1) == 1 && scanf("%llu", &c2) == 1) {

      (igual(c1,c2)) ? printf("YES\n") : printf("NO\n");
      
    }else {
      printf("ERROR\n");
    }
    
  }
    break;
  
  default:
    printf("ERROR\n");
    break;
  }



  return 0;
}