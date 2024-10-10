#include <stdio.h>

int main(){
  int dias, horas, minutos, segundos;
  long long int tempo;
  scanf("%lld", &tempo);

  if (tempo < 0) {
        printf("NO\n");
        return 0;
    }

  dias = tempo / (24 * 3600);
  horas = (tempo - (dias * 24 * 3600)) / 3600;
  minutos = (tempo - (dias * 24 * 3600) - (horas * 3600)) / 60 ;
  segundos = (tempo - (dias * 24 * 3600) - (horas * 3600) - (minutos * 60));

  printf("%d:%d:%d:%d\n", dias, horas, minutos, segundos);

  return 0;
}
