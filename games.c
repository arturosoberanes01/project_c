#include <stdio.h>

int main(){
  int i=0, opt;
  do
  {
    printf("Bienvenido a XGame.\nPor favor escoja que juego desea iniciar.\n");
    printf("1.Sudoku\n2.Gato\n3.Laberinto\n4.Salir\n");
    scanf("\n%d",&opt);
    switch(opt)
    {
      case 1:
        printf("SUDOKU\n");
      break;
      case 2:
      printf("GATO\n");
      break;
      case 3:
      printf("LABERINTO\n");
      break;
      case 4:
      i=3;
      break;
      default:
      printf("Opción no válida\n");
    }
  }while(i<1);
  printf("Muchas gracias por usar XGame\n");
  return 0;
}
