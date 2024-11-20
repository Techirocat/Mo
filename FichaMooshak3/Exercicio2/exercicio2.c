#include <stdio.h>

double celsiusParaFahrenheit(double celsius){
  
  return ((celsius * 9) / 5) + 32;
}

double fahrenheitParaCelsius(double fahrenheit){
  
  return ((fahrenheit - 32) * 5) / 9;
}


int main() {

  char character;
  double x;

  int a = scanf("%c", &character);
  int b = scanf("%lf", &x);

  if (a != 1 || b != 1)
  {
    printf("NO\n");
    return 0;
  }
  
  if (character == 'F')
  {
    printf("%.1lf\n", celsiusParaFahrenheit(x));
    
  }else if(character == 'C'){
    printf("%.1lf\n", fahrenheitParaCelsius(x));
  }else{
    printf("NO\n");
  }
  


  return 0;
}