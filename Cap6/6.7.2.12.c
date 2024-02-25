#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[6][6];
    int i, j, soma = 0, cont = 1;
    setlocale(LC_ALL,"");
    for (i = 0; i < 6; i++)
      for (j = 0; j < 6; j++)
        {  printf("Digite o %2dº número inteiro da matriz 6 x 6: ",cont);
           scanf("%d",&mat[i][j]);
           cont++;
           if (i > j) // valores abaixo da diagonal principal
             soma += mat[i][j]; }
    printf("\n");
    for (i = 0; i < 6; i++)
      {  for (j = 0; j < 6; j++)
           {  printf("%2d ",mat[i][j]);}
         printf("\n"); }
    printf("\n\n");
    printf("\nA soma dos valores abaixo da diagonal principal é %d\n",soma);
    return 0; }
