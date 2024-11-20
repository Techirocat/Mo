#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    if (b == 0){
        return abs(a);
        }
    
    return mdc(b, a % b);
}

int main() {

    int a, b;
    
    if (scanf("%d", &a) != 1 || scanf("%d", &b) != 1) {
        printf("NO\n");
        return 0; 
    }    
    
    int resultado = mdc(a, b);
    printf("%d\n", resultado);
    
    return 0;
}
