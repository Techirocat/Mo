#include <stdio.h>

int main(){
  char ipt[20]; 
  int a,b,c,d, temp;

  fgets(ipt, 20, stdin);

  sscanf(ipt, "%d %d %d %d", &a, &b, &c, &d);

  if (a >= 0){
    a = 1 ;
  }else{
    a = -1;                           
  }

  int ordem[3] = {b, c, d};

  switch (a){
  case 1:                    // 22 3 111 ->  3 22 111
    for (int i = 0; i < 3; i++){
      for (int j = i; j < 3; j++){
        if (ordem[i] > ordem[j]){
          temp = ordem[j];
          ordem[j] = ordem[i];
          ordem[i] = temp;
        } 
      }
    }
    break;

  case -1:               // -12 22 3 111  -> 111 22 3
  for (int i = 0; i < 3; i++){
      for (int j = i; j < 3; j++){
        if (ordem[i] < ordem[j]){
          temp = ordem[j];
          ordem[j] = ordem[i];
          ordem[i] = temp;
        }
      }
    }
}
  printf("%d %d %d\n", ordem[0], ordem[1], ordem[2]);

  return 0;
}