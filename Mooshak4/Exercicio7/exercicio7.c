#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define INFINITO __INT_MAX__

// ===================================================

int jogo(int m, int passos) {

    int minn = INFINITO;

    if (m == 42) {
        return passos; 
    }

    if (m < 42) {
        return INFINITO;
    }


// ===================================================


    // Regra 1: se m é par
    if (m % 2 == 0) {
        minn = jogo(m / 2, passos + 1);
    }

// ===================================================


    // Regra 2: se m é múltiplo de 3 ou 4
    if (m % 3 == 0 || m % 4 == 0) {
      int x = m % 100; // Últimos dois dígitos
      int x_1 = x / 10;
      int x_2 = x % 10;
      int novo_valor = x_1 * x_2;

      if (x_1 != 0 && x_2 != 0) { // Evita multiplicação inválida
         
         int resultado = jogo(m - novo_valor, passos + 1);
          if (resultado < minn){ 
            minn = resultado;
          }
        }
    }

// ===================================================


   // Regra 3: se m é múltiplo de 5
    if (m % 5 == 0) {
        int resultado = jogo(m - 42, passos + 1);
        if (resultado < minn) 
            minn = resultado;
    }

    return minn;
}


// ===================================================


int main() {
    int m;

    if (scanf("%d", &m) != 1 || m <= 0) {
        printf("NO\n");
        return 0;
    }

    int resultado = jogo(m, 0);



    if (resultado == INFINITO) {
        printf("BAD LUCK\n");
    } else {
        printf("%d\n", resultado);
    }

    return 0;
}
