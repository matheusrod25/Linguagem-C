#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[4][4];
    int i, j, cont = 1, maior = 0, linha = 0, coluna = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 4; i++)
      {  for (j = 0; j < 4; j++)
           {  printf("Digite o %2dº valor da matriz 4 x 4: ",cont);
              scanf("%d",&mat[i][j]);
              if (i == 0 && j == 0)
                maior = mat[i][j];
              else
                {  if (mat[i][j] > maior)
                    {  maior = mat[i][j];
                       linha = i;
                       coluna = j; }}
              cont++; } }
    printf("\nO maior valor contido na matriz 4 x 4 é %d e está na linha %d e coluna %d\n"
           ,maior,linha,coluna);
    return 0; }


