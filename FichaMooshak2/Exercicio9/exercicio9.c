#include <stdio.h>
#include <math.h>


int main(){

  int a,b,c;
  int d;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

 
  
   if (a < 0 || a > 20 || b < 0 || b > 20 || c < 0 || c > 20) {
        printf("NO\n");
        return 0;
    }

     d = (int)round((a * 40.0 + b * 60.0) / 100.0);
    
    if (d >= 10){
      d = (d > c) ? d : c;
    }else{
      d = c;
    }
  
  printf("%d\n", d); 

  return 0;
}
