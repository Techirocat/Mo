#include <stdio.h>

int main() {

  int n, x = 1;

  if (scanf("%d", &n) != 1 || n < 0)
  {
    printf("NO\n");
    return 0;
  }
  


  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == i)
      {
        printf("%d", x);
      }else{
        printf("%d ", x);
      }
      
      x++;
    }
    printf("\n");
  }
  


  return 0;
}