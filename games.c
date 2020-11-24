#include <stdio.h>
#include <string.h>
int main()
{
  //Variables del Sistema
  int i = 0, opt, iSudoku;
  //Variables Sudoku
  char optSudoku;
  int n[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  int y, x;
  int a, b;
  do
  {
    printf("Bienvenido a XGame.\nPor favor escoja que juego desea iniciar.\n");
    printf("1.Sudoku\n2.Gato\n3.Laberinto\n4.Salir\n");
    scanf("\n%d", &opt);
    switch (opt)
    {
    case 1:
      iSudoku = 0;
      do
      {
        printf("Desea Jugar 'Sudoku'? y/n: ");
        scanf("%s", &optSudoku);
        switch (optSudoku)
        {
        case 'y':
          printf("Bienvenido a XGameSudoku!!\nUsted debe introducir los numeros del 1 al 9 de tal manera que las filas al sumarse den 15, así como las diagonáles deben dar 15 también.\nEl orden en el que se irán leyendo los datos es el siguinte...\n1  2  3\n4  5  6\n7  8  9\nLe recomendamos usar un cuaderno para realizar este juego.\nEXITO!!");
          for (y = 0; y <= 2; y++)
          {
            for (x = 0; x <= 2; x++)
            {
              printf("Ingresa un número\n");
              scanf("%d", &n[x][y]);
              if (n[x][y] <= 9)
              {
                for (a = 0; a <= 2; a++)
                {
                  for (b = 0; b <= 2; b++)
                  {
                    printf("%d\t", n[b][a]);
                  }
                  printf("\n");
                }
              }
              else
              {
                printf("Solo puede poner números del 1 al 9, vuelva a intentarlo\n");
                x = 0;
                y = 0;
              }
            }
            printf("\n");
          }
          for (y = 0; y <= 2; y++)
          {
            for (x = 0; x <= 2; x++)
            {
              printf("%d\t", n[x][y]);
            }
            printf("\n");
          }
          if (n[0][0] + n[1][0] + n[2][0] == 15 && n[0][0] + n[0][1] + n[0][2] == 15 && n[0][0] + n[1][1] + n[2][2] == 15 && n[0][1] + n[1][1] + n[2][1] == 15 && n[0][2] + n[1][2] + n[2][2] == 15 && n[1][0] + n[1][1] + n[1][2] == 15 && n[2][0] + n[2][1] + n[2][2] == 15)
          {
            printf("\nEnhorabuena, USTED HA GANADO!!!\n");
          }
          else
          {
            n[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
            printf("\nLo sentimos, su respuesta no ha sido correcta :(\n");
          }
          break;
        case 'n':
          iSudoku = 3;
          break;
        default:
          printf("\nOpción no válida\n");
        }
      } while (iSudoku < 1);
      break;
    case 2:

      break;
    case 3:
      printf("LABERINTO\n");
      break;
    case 4:
      i = 3;
      break;
    default:
      printf("Opción no válida\n");
    }
  } while (i < 1);
  printf("Muchas gracias por usar XGame\n");
  return 0;
}
