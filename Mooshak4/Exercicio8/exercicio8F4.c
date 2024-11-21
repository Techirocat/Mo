#include <stdio.h>
#include <stdbool.h>


bool potencia_2_2(int n) {
    return n > 0 && (n & (n - 1)) == 0;
    /* 8-> 1000 -- 7-> 111  ->> 0000
    7 -> 111  -- 6 -> 110 ->> 110

    */
}

void asteriscos(int n, int posicao) {
    if (n == 1) {
        for (int i = 0; i < posicao; i++) {
            printf("  ");
        }
        printf("*\n");
        return;
    }

    asteriscos(n / 2, posicao);

    for (int i = 0; i < posicao; i++) {
        printf("  ");
    }
    for (int i = 0; i < n; i++) {
        printf("*");
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    asteriscos(n / 2, posicao + n / 2);
}

int main() {
    int n;

    if (scanf("%d", &n) != 1 || n < 1 || n > 100 || !potencia_2_2(n) ) {
        printf("NO\n");
        return 0;
    }

    asteriscos(n, 0);

    return 0;
}
