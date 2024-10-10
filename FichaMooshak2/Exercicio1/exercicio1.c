#include <stdio.h>

int main(){
  char ipt[20];
  char ope;
  int x,y;

  fgets(ipt, 20, stdin);

  sscanf(ipt, "%d %c %d", &x, &ope, &y);

  switch (ope)
  {
  case '+':
    printf("%d\n", x + y);
    break;
  case '-':
    printf("%d\n", x - y);
    break;
  case '*':
    printf("%d\n", x * y);
    break;
  case '/':
  if(y == 0){
    printf("NO\n");
  }else{
    printf("%d\n", x / y);    
  }
    break;
  default:
    printf("NO\n");
    break;
  }

  return 0;
}
