#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[5][5];
    int i, j, soma_diagonal = 0,soma_n_diagonal = 0, cont = 1;
    setlocale(LC_ALL,"");
    for (i = 0; i < 5; i++)
      for (j = 0; j < 5; j++)
        {  printf("Digite o %2d� n�mero inteiro da matriz 5 x 5: ",cont);
           scanf("%d",&mat[i][j]);
           cont++;
           if (i == j || i+j == 4)             // i == j - diagonal principal
             soma_diagonal += mat[i][j];      // i + j = n - 1 - diagonal secund�ria
           else
             soma_n_diagonal += mat[i][j];}
    int dif = soma_diagonal - soma_n_diagonal;
    printf("\n");
    for (i = 0; i < 5; i++)
      {  for (j = 0; j < 5; j++)
           {  printf("%2d ",mat[i][j]);}
         printf("\n"); }
    printf("\n\n");
    printf("Soma diagonais = %d\n",soma_diagonal);
    printf("Soma n�o diagonal = %d\n",soma_n_diagonal);
    printf("\nA diferen�a dos valores que pertencem as diagonais com os que n�o pertencem � %d\n",dif);
    return 0; }

