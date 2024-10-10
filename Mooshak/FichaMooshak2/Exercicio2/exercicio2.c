#include <stdio.h>
#include <math.h>

int main(){
  int a,b,c;
  double nota;
  int notaf;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  if (a < 0 || a > 20 || b < 0 || b > 20 || c < 0 || c > 20 ){
    printf("NO\n");
    return 0;
  }
  
  nota = (a * 0.5) + (b * 0.3) + (c * 0.2);

  notaf = (int)round(nota);
  printf("%d\n", notaf);

  return 0;
}