#include <stdio.h>
#include <math.h>

/*

Valor default da refeicao é de 2.49
1 ... 50 = 2.49
51 ... 100 = 2.49 - 5% = (2.37)
101 ... 200 = preco_a (2.37) - 7%  = (2.20)
201 ... 300 = preco_a (2.20) - 10% = 
301 ...  = preco_a - 15%

PRECOS

2.49


TESTE: 102 -> 247.40
*/

int main(){

  double preco_1 = 2.49;  //50 ref
  double preco_2 =  preco_1 - preco_1 * 0.05;  // 51 - 100 ref
  double preco_3 =  preco_2 - preco_2 * 0.07;  // 101 - 200
  double preco_4 =  preco_3 - preco_3 * 0.10;  // 201 - 300
  double preco_5 =  preco_4 - preco_4 * 0.15; // 301 -  


  preco_5 = round((preco_4 - preco_4 * 0.15)*100) / 100; 
  preco_4 = round((preco_3 - preco_3 * 0.10)*100) / 100;
  preco_3 = round((preco_2 - preco_2 * 0.07)*100) / 100;
  preco_2 = round((preco_1 - preco_1 * 0.05)*100) / 100; 

  

  int num_ref;
  scanf("%d", &num_ref);

  double total = 0;

  if(num_ref < 0 ){
    printf("NO\n");
    return 0;
  }
  
  if(num_ref <= 50){
    
    total += num_ref * preco_1; 
  }else{

    total += 50 * preco_1;
    if(num_ref <= 100){

      total += (num_ref - 50) * preco_2;
    }else{

      total += 50 * preco_2;
      if(num_ref <= 200){

        total += (num_ref - 100) * preco_3;
      }else{

        total += 100 * preco_3;
        if (num_ref <= 300){

          total +=  (num_ref - 200) * preco_4;
        }else{

          total += 100 * preco_4;

          total += (num_ref - 300) * preco_5;
        }
      }
    }
  }
  
  printf("%.2lf\n", total);

  return 0;
}