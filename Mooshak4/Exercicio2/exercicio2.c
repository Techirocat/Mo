#include <stdio.h>

int tribonacci(int n){
  if (n == 0){
    return 0;
  } else if(n == 1){
    return 1;
  }else if(n == 2){
    return 2;
  }else{
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n -3);
  } 
}


int main() {

  int n;

  if (scanf("%d", &n) != 1){
    printf("NO\n");
    return 0;
  }
  
  if (n < 0){
    printf("NO\n");
    return 0;
  }
  

  printf("%d\n", tribonacci(n));

  return 0;
}