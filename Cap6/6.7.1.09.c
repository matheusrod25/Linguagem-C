#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
int main()
  { int A[TAM], B[TAM],C[TAM],i,j,k,l = 0;
    setlocale(LC_ALL,"");
    for (i = 0; i < TAM; i++)
     {  printf("Digite o %2dº número do vetor A: ",i+1);
        scanf("%d",&A[i]); }
    printf("\n");
    for (j = 0; j < TAM; j++)
     {  printf("Digite o %2dº número do vetor B: ",j+1);
        scanf("%d",&B[j]); }
    for (k = 0; k < TAM; k++)
        C[k] = A[k] - B[k];
    printf("\nVetor C = {");
    do
    {  if (l == 9)
         printf("%d}\n",C[l]);
       else
         printf("%d, ",C[l]);
       l++;
    } while (l < TAM);

    return 0; }
