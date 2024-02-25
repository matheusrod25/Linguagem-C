#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[4][4];
    int i,j, neg = 0, cont = 1;
    setlocale(LC_ALL,"");
    for (i = 0; i < 4; i++)
      for (j = 0; j < 4; j++)
        {  printf("Digite o %2dº número inteiro da matriz 4 x 4: ",cont);
           scanf("%d",&mat[i][j]);
           cont++;
           if (mat[i][j] < 0)
             neg++; }
   printf("\nExistem %d números negativos nesta matriz\n",neg);
   return 0; }
