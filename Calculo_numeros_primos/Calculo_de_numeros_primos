/*Programa de cáculo de números primos*/
#include <stdio.h>

int es_primo(int num){
  int respuesta=1;
  int cont;
  for (cont=num-1;cont>1;cont--){
    if(num%cont==0){
     respuesta=0; 
    }
  }
  return(respuesta);
}

int main(void) {
  int num;
  int cont;
  //leo un número
  printf("Introduzca un número: ");
  scanf(" %d",&num);
  //Pruebo a dividirlo entre todos los números estrictamente menores que el mismo
  for(cont=num-1;cont>1;cont--){
    if(num%cont==0 && es_primo(cont)==1){
      printf(" %d",cont);
      num=num/cont;
      if(num%cont==0){
        cont++;
      }

    }
  }
  return 0;
}
