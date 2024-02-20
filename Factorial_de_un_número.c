//Lee un número y calcula el factorial
//el factorial de 5, por ejemplo es 5!=5*4*3*2*1=120
#include <stdio.h>

int main(void){
  int num;
  int cont;
  int producto=1;
  printf("\nDime un numero y calcularé su factorial: ");
  scanf("%d",&num);
  for(cont=num;cont>=1;cont--){
    producto=producto*cont;
  }
  printf("%d!=%d",num,producto);
  return(0);
}
