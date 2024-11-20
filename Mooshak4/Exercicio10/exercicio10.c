#include <stdio.h>

int logica( int anos ){

  int vacas[anos + 1];

  vacas[1] = 1;
  vacas[2] = 1;
  vacas[3] = 1;

  for (int i = 4; i <= anos; i++)
  {
    vacas[i] = vacas[i - 1] + vacas[i - 3];
  }
  
  
  return vacas[anos];

}


int main() {

  int anos;

  if (scanf("%d", &anos) != 1 || anos < 1)
  {
    printf("NO\n");
    return 0;
  }
  

  printf("%d\n", logica(anos));


  return 0;
}