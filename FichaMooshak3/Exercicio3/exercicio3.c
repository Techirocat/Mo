#include <stdio.h>
#include <math.h>

double arearectangulo(double comp, double largura) /*A*/ {
  return comp * largura;
}

double perimrectangulo(double comp, double largura)/*B*/{
  return 2 * comp + 2 * largura;
} 

double areatriangulo(double a, double b, double c) /*C*/{
  double heron = (a + b + c) / 2;
  return sqrt(heron * (heron - a) * (heron - b) * (heron - c));
}
double perimtriangulo(double a, double b, double c) /*D*/{
  return a + b + c;
}
double areacirculo(double raio) /*E*/{
  return M_PI * pow(raio, 2);
}
double perimcirculo(double raio) /*F*/{
  return 2 * M_PI * raio;
}


int main() {

  char character;

  double comprimento;
  double largura;
  double a;
  double b;
  double c;
  double raio;

  int input = scanf("%c", &character);

  if (input != 1)
  {
    printf("NO\n");
    return 0;
  }
  
  switch (character)
  {
  case 'A':{

    int a1 = scanf("%lf", &comprimento);
    int a2 = scanf("%lf", &largura);

      if (a1 != 1 || a2 != 1 || comprimento <= 0 || largura <= 0)
      {
        printf("NO\n");
        return 0;
      }

      printf("%.4lf\n", arearectangulo(comprimento, largura));

    }
    break;
  case 'B':{

    int b1 = scanf("%lf", &comprimento);
    int b2 = scanf("%lf", &largura);

      if (b1 != 1 || b2 != 1 || comprimento <= 0 || largura <= 0)
      {
        printf("NO\n");
        return 0;
      }

      printf("%.4lf\n", perimrectangulo(comprimento, largura));
    }
    break;

  case 'C':{
    
    int c1 = scanf("%lf", &a);
    int c2 = scanf("%lf", &b);
    int c3 = scanf("%lf", &c);

      if (c1 != 1 || c2 != 1 || c3 != 1 || a <= 0 || b <= 0 || c <= 0)
      {
        printf("NO\n");
        return 0;
      }

      printf("%.4lf\n", areatriangulo(a, b, c));
    }
    break;

  case 'D':{

    int d1 = scanf("%lf", &a);
    int d2 = scanf("%lf", &b);
    int d3 = scanf("%lf", &c);

      if (d1 != 1 || d2 != 1 || d3 != 1 || a <= 0 || b <= 0 || c <= 0)
      {
        printf("NO\n");
        return 0;
      }

      printf("%.4lf\n", perimtriangulo(a, b, c));
  }
    break;

  case 'E':{

    int e1 = scanf("%lf", &raio);

      if (e1 != 1 || raio <= 0 )
      {
        printf("NO\n");
        return 0;
      }

      printf("%.4lf\n", areacirculo(raio));
  }
    break;

  case 'F':{
 
    int f1 = scanf("%lf", &raio);

      if (f1 != 1 || raio <= 0)
      {
        printf("NO\n");
        return 0;
      }

      printf("%.4lf\n", perimcirculo(raio));
    }
    break;
  
  default:
    printf("NO\n");
    break;
  }



  return 0;
}