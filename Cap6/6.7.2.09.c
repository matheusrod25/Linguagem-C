#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
  { int mat[3][3], S[3];
    int i, j, soma = 0, cont = 1;
    setlocale(LC_ALL,"");
    for (i = 0; i < 3; i++)
      {  for (j = 0; j < 3; j++)
           {  printf("Digite o %2dº número inteiro da matriz 3 x 3: ",cont);
              scanf("%d",&mat[i][j]);
              cont++;} }
    printf("\n");
    // Matriz 3 x 3
    printf("Matriz 3 x 3\n");
    for (i = 0; i < 3; i++)
      {  for (j = 0; j < 3; j++)
           {  printf("%2d ",mat[i][j]);}
         printf("\n"); }
    printf("\n");
    // Transposta

    printf("Matriz Transposta\n");
    for (j = 0; j < 3; j++)
      {  for (i = 0; i < 3; i++)
           {  printf("%2d ",mat[i][j]);}
         printf("\n"); }

    printf("\n");
    for (j = 0; j < 3; j++)
      {  for(i = 0; i < 3; i++)
           { soma += mat[i][j]; }
         S[j]= soma;
         soma = 0;  }
    printf("\nVetor = { ");
    for (i = 0; i < 3; i++)
      {  if (i != 2)
           printf("%d, ",S[i]);
         else
           printf("%d }\n",S[i]);}
    return 0; }

