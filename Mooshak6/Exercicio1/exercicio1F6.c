#include <stdio.h>

int main(){

    int n, pares = 0, impares = 1;

    do{
        scanf("%d", &n);
        if(n % 2==0){
             pares += n;
        }
        else if(n %2 !=0){
            impares *= n;
        }
    }
    while(n != 0);


     printf("%d %d\n", pares, impares);

    return 0;
}