#include <stdio.h>

int main(void) {
  int x;
  int*px;
  px=&x;//define la ubicación de x
  x=2;
  printf("\ndirección del valor de x: %x",&x);
  printf("\nEl valor de x es : %d", x);
  printf("\n puntero a x, px: %x", px);
  printf("\ndireccion de px: %x", &px);
  printf("\nEl valor de x a traves de su puntero: %d", *px);
}
