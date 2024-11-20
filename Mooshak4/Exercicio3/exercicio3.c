#include <stdio.h>

double pot(double x, int n){
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    }
    if (n % 2 == 0) {
        double resultado = pot(x, n / 2); 
        return resultado * resultado;
    }else{
        double resultado = pot(x, n / 2); 
        return resultado * resultado * x;
    }
}

int main() {
    double x; 
    int n;

    if (scanf("%lf", &x) != 1 || scanf("%d", &n) != 1) {
        printf("NO\n");
        return 0;
    }
    if (n < 0)
    {
        printf("NO\n");
        return 0;
    }
    
    

    double resul = pot(x, n);
    printf("%lf\n", resul);

    return 0;
}
