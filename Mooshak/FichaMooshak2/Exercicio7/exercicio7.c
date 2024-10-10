#include <stdio.h>
#include <math.h>
#include <string.h>


/*
char com a letra a representar M OU H
double para o peso
int para a altura centimetros

IMC = peso(kg) / pow(altura, 2) (metros)

M -> IMC >= 32.4 YES
H -> IMC >= 31.2 YES

OUTPUT: IMC OBESIDADE(YES ou NO)

TESTE: M 85.2 177 -> 27.195 NO
*/

int main(){

  char ipt[20];
  char m_h;
  double peso;
  int altura;
  char obes[6];

  fgets(ipt, 20, stdin);
  sscanf(ipt, "%c %lf %d", &m_h, &peso, &altura);

  double imc = peso / pow((double)altura/100, 2);

  if ((m_h != 'M' && m_h != 'H') || peso <= 0 || altura <= 0){
    printf("NO\n");
    return 0;
  }
  

  if (m_h == 'M'){
    (imc >= 32.4) ? strcpy(obes, "YES") : strcpy(obes, "NO");
  }else{
    (imc >= 31.2) ? strcpy(obes, "YES") : strcpy(obes, "NO");
  }

  imc = round(imc * 1000) / 1000;

  printf("%.3lf %s\n", imc, obes);

  return 0;
}