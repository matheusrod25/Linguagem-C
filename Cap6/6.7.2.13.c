#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[5][5];
    int i, j, soma = 0, cont = 1;
    setlocale(LC_ALL,"");
    for (i = 0; i < 5; i++)
      for (j = 0; j < 5; j++)
        {  printf("Digite o %2d� n�mero inteiro da matriz 5 x 5: ",cont);
           scanf("%d",&mat[i][j]);
           cont++;
           if (i != j && i+j != 4)   // i == j - diagonal principal
             soma += mat[i][j]; }    // i + j = n -1 - diagonal secund�ria
    printf("\n");
    for (i = 0; i < 5; i++)
      {  for (j = 0; j < 5; j++)
           {  printf("%2d ",mat[i][j]);}
         printf("\n"); }
    printf("\n\n");
    printf("A soma dos valores que n�o pertencem a diagonal principal e secund�ria � %d",soma);
    return 0; }

