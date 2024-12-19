#include <stdio.h>

void trib(int n, long long int *result) {

    long long int a = 0, b = 1, c = 2, temp = 0;

    if (n == 0) {

        *result = 0;
        return;
    }
    else if (n == 1) {
        *result = 1;
        return;
    }
    else if (n == 2) {
        *result = 2;
        return;
    }

    
    for (int i = 3; i <= n; i++){

        temp = a + b + c;

        a = b;
        b = c;
        c = temp;
        }
    
    *result = c;
}

int main() {

    int n;
    long long int result;

    if (scanf("%d", &n) != 1 || n < 0) {

        printf("NO\n");

        return 0;
    }

    trib(n, &result);

    printf("%lld\n", result);


    return 0;
}