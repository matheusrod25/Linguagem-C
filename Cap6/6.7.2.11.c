#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { int mat[5][5];
    int i, j, soma = 0, cont = 1;
    setlocale(LC_ALL,"");
    for (i = 0; i < 5; i++)
      for (j = 0; j < 5; j++)
        {  printf("Digite o %2dº número inteiro da matriz 5 x 5: ",cont);
           scanf("%d",&mat[i][j]);
           cont++;
           if (i < j )  // valores acima da diagonal principal
             {  soma += mat[i][j];} }
    printf("\n");
    for (i = 0; i < 5; i++)
      {  for (j = 0; j < 5; j++)
           {  printf("%2d ",mat[i][j]);}
         printf("\n"); }
    printf("\n\n");
    printf("A soma dos valores acima da diagonal principal é %d",soma);
    return 0; }

