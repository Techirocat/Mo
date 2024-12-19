#include <stdio.h>
#include <math.h>

/*
N=0, 1=1, OK 
N=1, 3=3, OK 
N=2, 7=7, OK 
N=3, 15=15, OK
N=4, 31=31, OK
Até N=4, igualdade OK
*/


int combina(int n, int k){

  if (k == 0 || n == k)
  {
    return 1;
  }
  
  int resultado = 1;

  for(int i = 1; i <= k; i++){

    resultado = resultado * (n - i + 1) / i; 
    // Exercicio 5(E) da Ficha 6
  }

  return resultado;
}


int somatorio(int N){

  int resultado = 0;

  for (int n = 0; n <= N; n++)
  {
    for (int k = 0; k <= n; k++)
    {
         resultado = resultado + combina(n, k);
    }
  }

  return resultado;
  
}



int pote_2(int N){

  int resultado = 0;

  for (int n = 0; n <= N; n++)
  {
    resultado = resultado + pow(2, n);
  }
  
  return resultado;
}

void igualdade(int M){
  int ok = 1;

  for (int N = 0; N <= M; N++)
  {
    
    int esquerda = somatorio(N);
    int direita = pote_2(N);

    printf("N=%d, %d=%d, ", N, esquerda, direita);

    if (esquerda == direita)
    {
      printf("OK\n");

    }else{

      printf("NOT OK\n");
      ok = 0;
    }
    
    
    


  }

if (ok)
    {
      printf("Até N=%d, igualdade OK\n", M);
    }
    else{
      printf("Até N=%d, igualdade NOT OK\n", M);
    }

}

int main() {

  int M;

  if (scanf("%d", &M) != 1 || M < 0)
  {
    printf("NO\n");
    return 0;
  }
  
  igualdade(M);

  return 0;
}