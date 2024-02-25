#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
  { float mat[4][4];
    int i, j, cont = 1, maior_dez = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < 4; i++)
      {  for (j = 0; j < 4; j++)
           {  printf("Digite o %2dº valor da matriz 4 x 4: ",cont);
              scanf("%f",&mat[i][j]);
              if (mat[i][j] > 10)
                maior_dez++;
              cont++; } }
    printf("\nExistem %d valores maiores que 10 nesta matriz\n",maior_dez);
    printf("\n");
    /*for (i = 0; i < 4; i++) // Para exibir a matriz
      {  for (j = 0; j < 4; j++)
           {  printf("%.1f ",mat[i][j]);}
         printf("\n");}*/
    return 0; }


