#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[3][3];
    int i, j,cont = 1, soma = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 3; i++)
      for (j = 0; j < 3; j++)
        {  printf("Digite o %dº número inteiro da matriz 3 x 3: ",cont);
           scanf("%d",&mat[i][j]);
           cont++;
           if (i+j == 2) // i + j = n - 1 , n = 3
             soma+= mat[i][j]; }
    printf("\nA soma dos valores da diagonal secundária da matriz 3 x 3 é %d.\n",soma);
    return 0; }
