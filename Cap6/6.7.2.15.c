#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int A[3][3], B[3][3];
    int i, j, cont = 1, resultado = 0, linha = 0, coluna = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 3; i++)
      {  for (j = 0; j < 3; j++)
           {  printf("Digite o %2dº número inteiro da matriz: ",cont);
              scanf("%d",&A[i][j]);
              cont++; } }

    return 0; }
