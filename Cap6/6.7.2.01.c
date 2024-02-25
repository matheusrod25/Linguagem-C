#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[3][3];
    int i, j, cont = 1, menor = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 3; i++)
      {  for (j = 0; j < 3; j++)
           {  printf("Digite o %2dº valor da matriz 3 x 3: ",cont);
              scanf("%d",&mat[i][j]);
              if (i == 0 && j == 0)
                menor = mat[i][j];
              else
                {  if (mat[i][j] < menor)
                     menor = mat[i][j]; }
              cont++; } }
    printf("\nO menor valor contido na matriz 3 x 3 é %d\n",menor);
    return 0; }

