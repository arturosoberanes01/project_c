#include <stdio.h>
#include <string.h>
int main()
{
  //Variables del Sistema
  int iMenu = 0, opt;
  char optGame;
  //Variables Sudoku
  int n[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
  int y, x;
  int a, b;
  int iSudoku;
  //Variables Gato
  int iGato;
  do
  {
    printf("Bienvenido a XGame.\nPor favor escoja que juego desea iniciar.\n");
    printf("1.Sudoku\n2.Gato\n3.Laberinto\n4.Salir\n");
    scanf("\n%d", &opt);
    switch (opt)
    {
      case 1:
        iSudoku=0;
        do
        {
          printf("Desea Jugar 'Sudoku'? y/n: ");
          scanf("%s",&optGame);
          switch(optGame)
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
                printf("\nLo sentimos, su respuesta no ha sido correcta :(\n");
                n[3][3]={{0,0,0},{0,0,0},{0,0,0}};
              }
              break;
            case 'n':
              iSudoku=3;
              break;
            default:
              printf("\nOpción no válida\n");
          }
        }while (iSudoku<1);
        break;
      case 2:
        iGato=0;
        do
        {
          printf("¿Desea Jugar Gato y/n:?  ");
          scanf("%d",&optGame);
          switch(optGame)
          {
            case 'y':
              printf("\n\n\n Juego del Gato \n\n\n");
              for (i=0;i<3;i++)
              {
                for (j=0;j<3;j++)
                {
                  matriz[i][j]=' ';
                  printf("[%c]",matriz[i][j]);
                }
                printf("\n");
              }
              printf("Presione Y para jugar o X para salir \n");
              scanf("%c", &opc);
              if (opc== 'Y' || opc== 'X')
              {
                do
                {
                  if (turno%2==1)
                  {   
                    do
                    {
                      printf("\n Jugador 1: \n");
                      printf("Digite la fila: \n");
                      scanf("%d", &fila);
                      printf("Digite la columna: \n");
                      scanf("%d", &col);
                      if (matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2 )
                      {
                        printf("Coordenadas no validas \n");
                        printf("Proporcione otras coordenadas \n");
                      }
                    }while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
                    matriz[fila][col]='x';
                    printf("\033[2J");
                    for (i=0;i<3;i++)
                    {
                      for (j=0;j<3;j++)
                      {
                        printf("[%c]",matriz[i][j]);
                      }
                      printf("\n");
                    }
                    turno++;
                  }else if(turno%2==0)
                  {
                    do
                    {
                      printf("\n Jugador 2: \n");
                      printf("Digite la fila: \n");
                      scanf("%d", &fila);
                      printf("Digite la columna: \n");
                      scanf("%d", &col);
                      if (matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2)
                      {
                        printf("Coordenadas no validas \n");
                        printf("Proporcione otras coordenadas \n");
                      }
                    }while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
                    matriz[fila][col]='o';
                    printf("\033[2J");
                    for (i=0;i<3;i++)
                    {
                      for (j=0;j<3;j++)
                      {
                        printf("[%c]",matriz[i][j]);
                      }
                      printf("\n");
                    }
                    turno++;
                  }
                  if (matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
                      || matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
                      || matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

                      || matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
                      || matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
                      || matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

                      || matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
                      || matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0])
                  {
                    ganador=1;
                    printf("\n\n\n 'FELICIDADES GANO EL JUGADOR 1' \n\n\n");
                  }
                  if (matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
                      || matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
                      || matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]

                      || matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
                      || matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
                      || matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]

                      || matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
                      || matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0])
                  {
                    ganador=1;
                    printf("\n\n\n 'FELICIDADES GANO EL JUGADOR 2' \n\n\n");
                  }
                }while(ganador<1);
              }else
              {
                printf("\033[2J");
                printf("\n De todas formas no queria que jugaras %d\n",opc);
              }
              break;
            case 'n':
              iGato=3;
              break;
            default:
              printf("Opción no valida");
          }
        }while(iGato<1);
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
  }while (iMenu < 1);
  printf("Muchas gracias por usar XGame\n");
  return 0;
}
